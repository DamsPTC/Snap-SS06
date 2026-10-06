/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10775b120; end: 10775bdb3;  */

void FUN_10775b120(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
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
  undefined8 *puVar15;
  bool bVar16;
  uint uVar17;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  ushort uStack_2f8;
  ushort uStack_2f6;
  ushort uStack_2f4;
  ushort uStack_2f2;
  ulong uStack_2f0;
  undefined1 uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  byte bStack_2d0;
  undefined1 auStack_2c8 [16];
  char cStack_2b8;
  ulong uStack_2b0;
  undefined1 uStack_2a8;
  long lStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined1 uStack_280;
  ulong uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  byte bStack_260;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  int iStack_178;
  undefined1 auStack_170 [56];
  byte bStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [112];
  int iStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  byte bStack_a0;
  undefined8 uStack_70;
  
  func_0x00010775c2a0();
  lStack_2a0 = 0;
  uStack_298 = 0;
  uStack_290 = 0;
  puVar1 = *(undefined8 **)(param_2 + 0x50);
  uStack_70 = extraout_x8;
  for (puVar15 = *(undefined8 **)(param_2 + 0x48); uVar7 = puVar15 == puVar1, !(bool)uVar7;
      puVar15 = puVar15 + 0x20) {
    func_0x000107753050(auStack_130,*puVar15,param_3,param_4);
    uVar7 = iStack_b8 == 1;
    if (!(bool)uVar7) {
      func_0x00010756dd74(auStack_130);
      func_0x00010775c3f8();
      goto LAB_10775bac0;
    }
    auStack_170[0] = 0;
    bStack_138 = 0;
    func_0x00010775c484();
    func_0x000107775f1c(&uStack_1f0);
    uStack_268 = 0xb;
    puVar9 = &uStack_1f0;
    func_0x00010745de74(puVar9,&uStack_270);
    func_0x0001072c9884(&uStack_270);
    puVar10 = &uStack_1f0;
    func_0x0001072c9884();
    if ((int)puVar9 == 0) {
      func_0x00010775c484();
      func_0x0001077760fc(&uStack_1f0);
      func_0x00010729515c(auStack_170,&uStack_1f0);
      func_0x00010775c46c();
      if ((bStack_138 & 1) == 0) {
        func_0x000100060964(&uStack_1f0,&UNK_10f425c09);
        func_0x00010756c0ec(param_1,&uStack_1f0);
        func_0x00010775c46c();
        goto LAB_10775babc;
      }
      uStack_2b0 = uStack_2b0 & 0xffffffffffffff00;
      uStack_2a8 = 0;
      uVar17 = 0;
      if (*(char *)(puVar15 + 4) == '\x01') {
        puVar11 = (ulong *)puVar15[2];
        func_0x00010775c24c();
        iVar8 = iStack_178;
        if (iStack_178 == 1) {
          func_0x00010775c318();
          func_0x00010757fc08();
          uStack_2b0 = *puVar11;
          uStack_2a8 = 1;
        }
        else {
          func_0x00010775c320();
          func_0x00010775c3f8();
        }
        func_0x00010775c2d8();
        uVar7 = iVar8 == 1;
        uVar17 = 1;
        if (!(bool)uVar7) goto LAB_10775babc;
      }
      auStack_2c8[0] = 0;
      cStack_2b8 = '\0';
      uVar7 = *(char *)(puVar15 + 7) == '\x01';
      if ((bool)uVar7) {
        func_0x00010775c24c(puVar15[5]);
        func_0x00010775c3c0();
        if (!(bool)uVar7) {
          func_0x00010775c320();
          goto LAB_10775ba68;
        }
        func_0x00010775c318();
        func_0x0001077755e0(&uStack_b0);
        bVar3 = bStack_a0;
        uVar17 = (uint)bStack_a0;
        if ((bStack_a0 & 1) == 0) {
          if ((bRam0000000113725e78 & 1) == 0) {
            iVar8 = 0x13725e78;
            ___cxa_guard_acquire();
            if (iVar8 != 0) {
              func_0x000100060964(0x113725ec0,&UNK_10f425c42);
              ___cxa_guard_release(0x113725e78);
            }
          }
          func_0x000104c2fe00(&uStack_270,0x113725ec0);
          func_0x00010775c3cc();
          func_0x00010775c474();
        }
        else {
          uVar7 = cStack_2b8 == '\x01';
          if ((bool)uVar7) {
            func_0x000107295c74(auStack_2c8,&uStack_b0);
          }
          else {
            func_0x000107278b70(auStack_2c8,&uStack_b0);
            cStack_2b8 = '\x01';
          }
        }
        func_0x00010726b07c(&uStack_b0);
        func_0x00010775c2d8();
        if ((bVar3 & 1) == 0) goto LAB_10775bab8;
      }
      uStack_2e0 = uStack_2e0 & 0xffffffffffffff00;
      bStack_2d0 = 0;
      uVar7 = *(char *)(puVar15 + 10) == '\x01';
      if ((bool)uVar7) {
        func_0x00010775c24c(puVar15[8]);
        func_0x00010775c3c0();
        if (!(bool)uVar7) {
          func_0x00010775c320();
          goto LAB_10775ba68;
        }
        func_0x00010775c318();
        func_0x0001074389c8(&uStack_270);
        bStack_2d0 = bStack_260;
        uStack_2d8 = CONCAT44(uStack_264,uStack_268);
        uStack_2e0 = uStack_270;
        if ((bStack_260 & 1) == 0) {
          if ((bRam0000000113725e80 & 1) == 0) goto LAB_10775baf0;
          goto LAB_10775ba54;
        }
        func_0x00010775c2d8();
      }
      uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
      uStack_2e8 = 0;
      uVar7 = *(char *)(puVar15 + 0xd) == '\x01';
      if ((bool)uVar7) {
        uVar12 = puVar15[0xb];
        func_0x00010775c24c();
        func_0x00010775c3c0();
        if (!(bool)uVar7) {
          func_0x00010775c320();
          goto LAB_10775ba68;
        }
        func_0x00010775c318();
        puVar11 = &uStack_270;
        func_0x00010732a934();
        uStack_2e8 = SUB81(puVar11,0);
        uStack_2f0 = uVar12;
        if (((ulong)puVar11 & 1) == 0) {
          if ((bRam0000000113725e88 & 1) == 0) {
            iVar8 = 0x13725e88;
            ___cxa_guard_acquire();
            if (iVar8 != 0) {
              func_0x000100060964(0x113725f30,&UNK_10f425caf);
              ___cxa_guard_release(0x113725e88);
            }
          }
          uVar13 = 0x113725f30;
          goto LAB_10775baa4;
        }
        func_0x00010775c2d8();
      }
      uStack_2f2 = 0;
      uVar14 = (uint)*(byte *)(puVar15 + 0x10);
      cVar5 = SBORROW4(uVar14,1);
      cVar6 = (int)(uVar14 - 1) < 0;
      uVar7 = uVar14 == 1;
      if ((bool)uVar7) {
        func_0x00010775c24c(puVar15[0xe]);
        func_0x00010775c3c0();
        if (!(bool)uVar7) {
          func_0x00010775c320();
LAB_10775ba68:
          func_0x00010775c3f8();
          goto LAB_10775bab4;
        }
        func_0x00010775c318();
        func_0x00010775c428();
        func_0x00010775c418();
        func_0x000107323900(&uStack_b0);
        func_0x00010775c430();
        if ((bool)uVar7) {
          func_0x00010775c2f4();
          func_0x00010775c2b0();
          uVar13 = extraout_x11;
          uVar2 = extraout_x10;
          if (cVar6 == cVar5) {
            uVar13 = extraout_x8_00;
            uVar2 = extraout_x9;
          }
          func_0x0001077f305c(uVar2,uVar13);
          func_0x00010775c27c();
        }
        else {
          func_0x00010775c49c();
        }
        func_0x00010775c3d8();
        uStack_2f2 = (ushort)(uVar17 << 8) | 0x120;
        func_0x00010775c3f0();
        if ((uVar17 & 1) == 0) {
          if ((bRam0000000113725e90 & 1) == 0) {
            iVar8 = 0x13725e90;
            ___cxa_guard_acquire();
            if (iVar8 != 0) {
              func_0x000100060964(0x113725f68,&UNK_10f425ce1);
              ___cxa_guard_release(0x113725e90);
            }
          }
          uVar13 = 0x113725f68;
          goto LAB_10775baa4;
        }
        func_0x00010775c2d8();
      }
      uStack_2f4 = 0;
      uVar14 = (uint)*(byte *)(puVar15 + 0x13);
      cVar5 = SBORROW4(uVar14,1);
      cVar6 = (int)(uVar14 - 1) < 0;
      uVar7 = uVar14 == 1;
      if ((bool)uVar7) {
        func_0x00010775c24c(puVar15[0x11]);
        func_0x00010775c3c0();
        if ((bool)uVar7) {
          func_0x00010775c318();
          func_0x00010775c428();
          func_0x00010775c418();
          func_0x000107323900(&uStack_b0);
          func_0x00010775c430();
          if ((bool)uVar7) {
            func_0x00010775c2f4();
            func_0x00010775c2b0();
            uVar13 = extraout_x11_00;
            uVar2 = extraout_x10_00;
            if (cVar6 == cVar5) {
              uVar13 = extraout_x8_01;
              uVar2 = extraout_x9_00;
            }
            func_0x0001077f30b0(uVar2,uVar13);
            func_0x00010775c27c();
          }
          else {
            func_0x00010775c49c();
          }
          func_0x00010775c3d8();
          uStack_2f4 = (ushort)(uVar17 << 8) | 0x120;
          func_0x00010775c3f0();
          if ((uVar17 & 1) != 0) {
            func_0x00010775c2d8();
            goto LAB_10775b534;
          }
          if ((bRam0000000113725e98 & 1) == 0) {
            iVar8 = 0x13725e98;
            ___cxa_guard_acquire();
            if (iVar8 != 0) {
              func_0x000100060964(0x113725fa0,&UNK_10f425d15);
              ___cxa_guard_release(0x113725e98);
            }
          }
          uVar13 = 0x113725fa0;
LAB_10775b810:
          func_0x000104c2fe00(&uStack_270,uVar13);
          func_0x00010775c3cc();
          func_0x00010775c474();
        }
        else {
          func_0x00010775c320();
LAB_10775b7cc:
          func_0x00010775c3f8();
        }
        func_0x00010775c2d8();
        bVar16 = false;
      }
      else {
LAB_10775b534:
        uStack_2f6 = 0;
        uVar14 = (uint)*(byte *)(puVar15 + 0x16);
        cVar5 = SBORROW4(uVar14,1);
        cVar6 = (int)(uVar14 - 1) < 0;
        uVar7 = uVar14 == 1;
        if ((bool)uVar7) {
          func_0x00010775c24c(puVar15[0x14]);
          func_0x00010775c3c0();
          if (!(bool)uVar7) {
            func_0x00010775c320();
            goto LAB_10775b7cc;
          }
          func_0x00010775c318();
          func_0x00010775c428();
          func_0x00010775c418();
          func_0x000107323900(&uStack_b0);
          func_0x00010775c430();
          if ((bool)uVar7) {
            func_0x00010775c2f4();
            func_0x00010775c2b0();
            uVar13 = extraout_x11_01;
            uVar2 = extraout_x10_01;
            if (cVar6 == cVar5) {
              uVar13 = extraout_x8_02;
              uVar2 = extraout_x9_01;
            }
            func_0x0001077f3104(uVar2,uVar13);
            func_0x00010775c27c();
          }
          else {
            func_0x00010775c49c();
          }
          func_0x00010775c3d8();
          uStack_2f6 = (ushort)(uVar17 << 8) | 0x120;
          func_0x00010775c3f0();
          if ((uVar17 & 1) == 0) {
            if ((bRam0000000113725ea0 & 1) == 0) {
              iVar8 = 0x13725ea0;
              ___cxa_guard_acquire();
              if (iVar8 != 0) {
                func_0x000100060964(0x113725fd8,&UNK_10f425d4b);
                ___cxa_guard_release(0x113725ea0);
              }
            }
            uVar13 = 0x113725fd8;
            goto LAB_10775b810;
          }
          func_0x00010775c2d8();
        }
        uStack_2f8 = 0;
        uVar14 = (uint)*(byte *)(puVar15 + 0x19);
        cVar5 = SBORROW4(uVar14,1);
        cVar6 = (int)(uVar14 - 1) < 0;
        uVar7 = uVar14 == 1;
        if ((bool)uVar7) {
          func_0x00010775c24c(puVar15[0x17]);
          func_0x00010775c3c0();
          if (!(bool)uVar7) {
            func_0x00010775c320();
            goto LAB_10775b7cc;
          }
          func_0x00010775c318();
          func_0x00010775c428();
          func_0x00010775c418();
          func_0x000107323900(&uStack_b0);
          func_0x00010775c430();
          if ((bool)uVar7) {
            func_0x00010775c2f4();
            func_0x00010775c2b0();
            uVar13 = extraout_x11_02;
            uVar2 = extraout_x10_02;
            if (cVar6 == cVar5) {
              uVar13 = extraout_x8_03;
              uVar2 = extraout_x9_02;
            }
            func_0x0001077f3154(uVar2,uVar13);
            func_0x00010775c27c();
          }
          else {
            func_0x00010775c49c();
          }
          func_0x00010775c3d8();
          uStack_2f8 = (ushort)(uVar17 << 8) | 0x120;
          func_0x00010775c3f0();
          if ((uVar17 & 1) == 0) {
            if ((bRam0000000113725ea8 & 1) == 0) {
              iVar8 = 0x13725ea8;
              ___cxa_guard_acquire();
              if (iVar8 != 0) {
                func_0x000100060964(0x113726010,&UNK_10f425d7f);
                ___cxa_guard_release(0x113725ea8);
              }
            }
            uVar13 = 0x113726010;
            goto LAB_10775b810;
          }
          func_0x00010775c2d8();
        }
        uStack_b0 = uStack_b0 & 0xffffffffffffff00;
        bStack_a0 = 0;
        uVar7 = *(char *)(puVar15 + 0x1c) == '\x01';
        if ((bool)uVar7) {
          func_0x00010775c24c(puVar15[0x1a]);
          func_0x00010775c3c0();
          if (!(bool)uVar7) {
            func_0x00010775c320();
            goto LAB_10775b7cc;
          }
          func_0x00010775c318();
          func_0x0001074389c8(&uStack_270);
          bStack_a0 = bStack_260;
          uStack_a8 = CONCAT44(uStack_264,uStack_268);
          uStack_b0 = uStack_270;
          if ((bStack_260 & 1) == 0) {
            if ((bRam0000000113725eb0 & 1) == 0) {
              iVar8 = 0x13725eb0;
              ___cxa_guard_acquire();
              if (iVar8 != 0) {
                func_0x000100060964(0x113726048,&UNK_10f425dbd);
                ___cxa_guard_release(0x113725eb0);
              }
            }
            uVar13 = 0x113726048;
            goto LAB_10775b810;
          }
          func_0x00010775c2d8();
        }
        uStack_288 = uStack_288 & 0xffffffffffffff00;
        uStack_280 = 0;
        uVar7 = *(char *)(puVar15 + 0x1f) == '\x01';
        if ((bool)uVar7) {
          uVar12 = puVar15[0x1d];
          func_0x00010775c24c();
          func_0x00010775c3c0();
          if (!(bool)uVar7) {
            func_0x00010775c320();
            goto LAB_10775b7cc;
          }
          func_0x00010775c318();
          puVar11 = &uStack_270;
          func_0x00010732a934();
          uStack_280 = SUB81(puVar11,0);
          uStack_288 = uVar12;
          if (((ulong)puVar11 & 1) == 0) {
            if ((bRam0000000113725eb8 & 1) == 0) {
              iVar8 = 0x13725eb8;
              ___cxa_guard_acquire();
              if (iVar8 != 0) {
                func_0x000100060964(0x113726080,&UNK_10f425df2);
                ___cxa_guard_release(0x113725eb8);
              }
            }
            uVar13 = 0x113726080;
            goto LAB_10775b810;
          }
          func_0x00010775c2d8();
        }
        uVar12 = uStack_298;
        uVar7 = uStack_298 == uStack_290;
        if (uStack_298 < uStack_290) {
          func_0x00010775c330();
          func_0x00010775c114(uVar12);
          uVar12 = uVar12 + 0x120;
        }
        else {
          func_0x00010775c460((long)(uStack_298 - lStack_2a0) / 0x120);
          func_0x00010775c408();
          func_0x00010775c330(lStack_1e0);
          func_0x00010775c114();
          lStack_1e0 = lStack_1e0 + 0x120;
          func_0x00010775c454();
          uVar12 = uStack_298;
          func_0x00010775c400();
        }
        bVar16 = true;
        uStack_298 = uVar12;
      }
      func_0x00010775c3e0();
      func_0x00010775c420();
      func_0x00010775c2e8();
      if (!bVar16) goto LAB_10775bac4;
    }
    else {
      func_0x00010775c484();
      if (*(int *)(puVar10 + 0xd) != 7) {
        func_0x00010563ab98();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10775baec);
        (*pcVar4)();
      }
      puVar9 = puVar10 + 1;
      func_0x000104c2d614();
      uVar12 = uStack_298;
      if (((ulong)puVar9 & 1) == 0) {
        if (uStack_298 < uStack_290) {
          FUN_10775c01c(uStack_298,puVar10 + 1);
          uStack_298 = uVar12 + 0x120;
        }
        else {
          func_0x00010775c460((long)(uStack_298 - lStack_2a0) / 0x120);
          func_0x00010775c408();
          FUN_10775c01c(lStack_1e0,puVar10 + 1);
          lStack_1e0 = lStack_1e0 + 0x120;
          func_0x00010775c454();
          uVar12 = uStack_298;
          func_0x00010775c400();
          uStack_298 = uVar12;
        }
      }
      func_0x00010775c420();
      func_0x00010775c2e8();
    }
  }
  func_0x0001072787e4(&uStack_320,&lStack_2a0);
  uStack_1e8 = uStack_318;
  uStack_1f0 = uStack_320;
  lStack_1e0 = lStack_310;
  uStack_318 = 0;
  lStack_310 = 0;
  uStack_320 = 0;
  func_0x000107348eb0(auStack_128,&uStack_1f0);
  func_0x0001074b0ce4(param_1,auStack_130);
  func_0x00010726af18(auStack_128);
  func_0x00010726afc0(&uStack_1f0);
  func_0x00010726afc0(&uStack_320);
LAB_10775bac4:
  while( true ) {
    func_0x00010726afc0(&lStack_2a0);
    func_0x00010775c25c(uStack_70);
    if ((bool)uVar7) break;
    ___stack_chk_fail();
LAB_10775baf0:
    iVar8 = 0x13725e80;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000100060964(0x113725ef8,&UNK_10f425c7f);
      ___cxa_guard_release(0x113725e80);
    }
LAB_10775ba54:
    uVar13 = 0x113725ef8;
LAB_10775baa4:
    func_0x000104c2fe00(&uStack_270,uVar13);
    func_0x00010775c3cc();
    func_0x00010775c474();
LAB_10775bab4:
    func_0x00010775c2d8();
LAB_10775bab8:
    func_0x00010775c3e0();
LAB_10775babc:
    func_0x00010775c420();
LAB_10775bac0:
    func_0x00010775c2e8();
  }
  return;
}



/* Entry: 10775c01c; end: 10775c08f;  */

/* WARNING: Possible PIC construction at 0x00010775c048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010775c04c) */
/* WARNING: Removing unreachable block (ram,0x00010775c074) */
/* WARNING: Removing unreachable block (ram,0x00010775c08c) */
/* WARNING: Removing unreachable block (ram,0x00010775c060) */

long FUN_10775c01c(long param_1)

{
  long lVar1;
  undefined1 auStack_88 [104];
  
  func_0x00010775c2a0();
  func_0x000107278acc(auStack_88);
  lVar1 = param_1;
  func_0x000104c2f64c();
  func_0x00010775c0f8(lVar1 + 0x38,auStack_88);
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  return param_1;
}



/* Entry: 10775c688; end: 10775c6ff;  */

void FUN_10775c688(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x120) {
    func_0x00010772b8e8(&uStack_48,lVar2);
  }
  func_0x0001072625b4(param_1,&uStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  return;
}



/* Entry: 10775de8c; end: 10775debb;  */

uint FUN_10775de8c(uint param_1)

{
  func_0x0001072e7894();
  return param_1 ^ 1;
}



/* Entry: 10775e23c; end: 10775e287;  */

undefined4 * FUN_10775e23c(undefined4 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107268400(&uStack_30);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = uStack_28;
  *(undefined8 *)(param_1 + 2) = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000104c335c0(&uStack_30);
  return param_1;
}



/* Entry: 10775e970; end: 10775ecf7;  */

/* WARNING: Possible PIC construction at 0x00010775ec30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010775ec34) */
/* WARNING: Removing unreachable block (ram,0x00010775ec58) */
/* WARNING: Removing unreachable block (ram,0x00010775ec80) */
/* WARNING: Removing unreachable block (ram,0x00010775ecb4) */
/* WARNING: Removing unreachable block (ram,0x00010775ecf4) */

long * FUN_10775e970(long *param_1,long *param_2,long param_3,long param_4)

{
  undefined3 uVar1;
  uint uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *plVar7;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [24];
  uint5 auStack_110 [2];
  byte bStack_100;
  undefined1 auStack_f8 [16];
  undefined1 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  byte bStack_d0;
  long alStack_c8 [3];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [16];
  undefined1 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  plVar4 = param_2;
  func_0x00010775ef30();
  plVar7 = plVar4 + 1;
  plVar5 = plVar7;
  uStack_48 = extraout_x8;
  (**(code **)(*plVar4 + 0x20))();
  uVar3 = plVar5 == (long *)0x3;
  if ((bool)uVar3) {
    (**(code **)(*param_2 + 0x28))(auStack_78,plVar7,1);
    auStack_f8[0] = 0;
    uStack_e8 = 0;
    uVar1 = SUB83((undefined8)auStack_110[0],5);
    uVar2 = (uint)(undefined8)auStack_110[0];
    auStack_110[0] = (uint5)(uVar2 & 0xffffff00);
    auStack_110[0]._0_8_ = CONCAT35(uVar1,auStack_110[0]);
    FUN_10777067c(&lStack_e0,param_3,auStack_78,1,param_4,auStack_f8,auStack_110);
    func_0x0001072c9854(auStack_f8);
    func_0x0001072f5f6c(auStack_78);
    if ((bStack_d0 & 1) == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      auStack_78[0] = 0;
      uStack_68 = 0;
      func_0x00010756f300();
      (**(code **)(*param_2 + 0x28))(&lStack_60,plVar7,2);
      func_0x00010756f360(auStack_128,auStack_78);
      uStack_90 = CONCAT35(uStack_90._5_3_,0x100000002);
      FUN_10777067c(auStack_110,param_3,&lStack_60,2,param_4,auStack_128,&uStack_90);
      func_0x0001072c9854(auStack_128);
      func_0x0001072f5f6c(&lStack_60);
      if ((bStack_100 & 1) == 0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
      }
      else {
        uVar3 = *(char *)(param_3 + 0x51) == '\x01';
        if ((bool)uVar3) {
          puVar6 = (undefined8 *)0x80;
          __Znwm();
          uStack_58 = uStack_d8;
          lStack_60 = lStack_e0;
          uStack_88 = (undefined8)auStack_110[1];
          uStack_90 = (undefined8)auStack_110[0];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = &PTR_DAT_1109d5038;
          plVar7 = puVar6 + 3;
          lStack_e0 = 0;
          uStack_d8 = 0;
          auStack_110[0]._0_8_ = 0;
          auStack_110[1]._0_8_ = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          func_0x00010775edf0(plVar7,&lStack_60,&uStack_90);
          func_0x00010775ef28();
          func_0x00010775ef20();
          func_0x0001002a8234(puVar6 + 8,param_4 + 0x40);
          func_0x0001072c9b9c(&uStack_b0);
          func_0x0001072c9b9c(&uStack_a0);
          *param_1 = (long)plVar7;
          param_1[1] = (long)puVar6;
          uStack_138 = 0;
          uStack_130 = 0;
          *(undefined1 *)(param_1 + 2) = 1;
          puVar6 = &uStack_138;
        }
        else {
          puVar6 = (undefined8 *)0x80;
          __Znwm();
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = &PTR_DAT_1109d5038;
          uStack_58 = uStack_d8;
          lStack_60 = lStack_e0;
          lStack_e0 = 0;
          uStack_d8 = 0;
          uStack_88 = (undefined8)auStack_110[1];
          uStack_90 = (undefined8)auStack_110[0];
          auStack_110[0]._0_8_ = 0;
          auStack_110[1]._0_8_ = 0;
          func_0x00010775edf0(puVar6 + 3,&lStack_60,&uStack_90);
          func_0x00010775ef28();
          func_0x00010775ef20();
          *param_1 = (long)(puVar6 + 3);
          param_1[1] = (long)puVar6;
          uStack_a0 = 0;
          uStack_98 = 0;
          *(undefined1 *)(param_1 + 2) = 1;
          puVar6 = &uStack_a0;
        }
        func_0x00010775eed8(puVar6);
      }
      func_0x0001072c95d0(auStack_110);
      func_0x0001072c9854(auStack_78);
    }
    plVar4 = &lStack_e0;
    func_0x0001072c95d0();
  }
  else {
    func_0x00010002b838(alStack_c8,&UNK_10f426068);
    func_0x00010756a668(param_3,alStack_c8);
    plVar4 = alStack_c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  func_0x00010775ef04(uStack_48);
  if ((bool)uVar3) {
    return plVar4;
  }
  ___stack_chk_fail();
  *plVar7 = (long)&PTR_DAT_1109d4fb0;
  func_0x0001072c9b9c(plVar7 + 0xb);
  func_0x0001072c9b9c(plVar7 + 9);
  *plVar7 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(plVar7 + 5);
  func_0x0001072c9884(plVar7 + 2);
  return plVar7;
}



/* Entry: 10775ede0; end: 10775edef;  */

void FUN_10775ede0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010775ede8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10775f080; end: 10775f0db;  */

ulong FUN_10775f080(void)

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
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar9 = auStack_60;
  func_0x00010775f5c4();
  func_0x000100060964(auStack_60);
  uVar7 = unaff_x19;
  func_0x00010775f02c();
  func_0x00010775f5fc();
  func_0x00010775f5b0(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x00010775f5fc();
  func_0x00010775f5dc();
  uVar8 = uVar7;
  func_0x000104c32db4();
  if (((int)uVar8 == 0) || (*(char *)(uVar7 + 0x38) != puVar9[0x38])) {
    return 0;
  }
  cVar5 = *(char *)(uVar7 + 0x58);
  if (cVar5 != puVar9[0x58] || cVar5 == '\0') {
    return (ulong)(cVar5 == puVar9[0x58]);
  }
  bVar3 = *(byte *)(uVar7 + 0x57);
  uVar8 = *(ulong *)(uVar7 + 0x48);
  if (-1 < (char)bVar3) {
    uVar8 = (ulong)bVar3;
  }
  bVar4 = puVar9[0x57];
  uVar1 = *(ulong *)(puVar9 + 0x48);
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  if (uVar8 == uVar1) {
    plVar6 = (long *)*(long *)(uVar7 + 0x40);
    if (-1 < (char)bVar3) {
      plVar6 = (long *)(uVar7 + 0x40);
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



/* Entry: 10775f7e0; end: 10775f8a3;  */

bool FUN_10775f7e0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    if ((*(int *)(param_2 + 0x10) != 1) &&
       ((*(int *)(param_2 + 0x10) == 0 ||
        (lVar1 = param_2, FUN_107750bdc(param_2,plVar2 + 2), lVar1 != 0)))) break;
  }
  return plVar2 != (long *)0x0;
}



/* Entry: 10775fcdc; end: 10776016f;  */

void FUN_10775fcdc(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_1c8 [120];
  int iStack_150;
  undefined1 auStack_148 [56];
  undefined1 auStack_110 [96];
  undefined1 auStack_b0 [56];
  undefined1 auStack_78 [56];
  byte bStack_40;
  undefined8 uStack_38;
  
  func_0x000107760a20();
  lVar2 = *(long *)(param_2 + 0x48);
  uStack_38 = extraout_x8;
  func_0x000107753050(auStack_1c8);
  uVar1 = iStack_150 == 1;
  if (!(bool)uVar1) {
    puVar3 = auStack_1c8;
    func_0x00010756dd74(puVar3);
    func_0x00010756dd30(param_1,puVar3);
    goto LAB_10776005c;
  }
  func_0x000107760a6c();
  uVar1 = *(int *)(lVar2 + 0x68) == 8;
  switch(*(int *)(lVar2 + 0x68)) {
  case 0:
    func_0x000107760a6c();
    func_0x000107760a8c();
    func_0x000107760a00();
    func_0x000107760a84();
    if ((bStack_40 & 1) == 0) {
      func_0x0001077609a8();
      break;
    }
    func_0x0001077609f4();
    if (*(long *)(param_3 + 0xf0) != 0) {
      func_0x000107760a7c();
    }
    func_0x0001077609e8();
    func_0x0001077609b8();
    func_0x0001077609dc();
code_r0x000107760030:
    func_0x00010726b164(auStack_110);
    func_0x000104c2f714(auStack_148);
    puVar3 = auStack_b0;
    goto LAB_107760044;
  case 1:
    func_0x000107760a6c();
    func_0x000107760a8c();
    func_0x000107760a00();
    func_0x000107760a84();
    if ((bStack_40 & 1) != 0) {
      func_0x0001077609f4();
      if (*(long *)(param_3 + 0xf0) != 0) {
        func_0x000107760a7c();
      }
      func_0x0001077609e8();
      func_0x0001077609b8();
      func_0x0001077609dc();
      goto code_r0x000107760030;
    }
    func_0x0001077609a8();
    break;
  case 2:
    func_0x000107760a6c();
    func_0x000107760a8c();
    func_0x000107760a00();
    func_0x000107760a84();
    if ((bStack_40 & 1) != 0) {
      func_0x0001077609f4();
      if (*(long *)(param_3 + 0xf0) != 0) {
        func_0x000107760a7c();
      }
      func_0x0001077609e8();
      func_0x0001077609b8();
      func_0x0001077609dc();
      goto code_r0x000107760030;
    }
    func_0x0001077609a8();
    break;
  case 3:
    func_0x000107760a6c();
    func_0x000107760a8c();
    func_0x000107760a00();
    func_0x000107760a84();
    if ((bStack_40 & 1) != 0) {
      func_0x0001077609f4();
      if (*(long *)(param_3 + 0xf0) != 0) {
        func_0x000107760a7c();
      }
      func_0x0001077609e8();
      func_0x0001077609b8();
      func_0x0001077609dc();
      goto code_r0x000107760030;
    }
    func_0x0001077609a8();
    break;
  case 4:
    func_0x000107760a6c();
    func_0x000107760a8c();
    func_0x000107760a00();
    func_0x000107760a84();
    if ((bStack_40 & 1) != 0) {
      func_0x0001077609f4();
      if (*(long *)(param_3 + 0xf0) != 0) {
        func_0x000107760a7c();
      }
      func_0x0001077609e8();
      func_0x0001077609b8();
      func_0x0001077609dc();
      goto code_r0x000107760030;
    }
    func_0x0001077609a8();
    break;
  case 5:
    func_0x000107760a6c();
    func_0x000107760a8c();
    func_0x000107760a00();
    func_0x000107760a84();
    if ((bStack_40 & 1) != 0) {
      func_0x0001077609f4();
      if (*(long *)(param_3 + 0xf0) != 0) {
        func_0x000107760a7c();
      }
      func_0x0001077609e8();
      func_0x0001077609b8();
      func_0x0001077609dc();
      goto code_r0x000107760030;
    }
    func_0x0001077609a8();
    break;
  case 6:
    func_0x000107760a6c();
    func_0x000107760a8c();
    func_0x000107760a00();
    func_0x000107760a84();
    if ((bStack_40 & 1) != 0) {
      func_0x0001077609f4();
      if (*(long *)(param_3 + 0xf0) != 0) {
        func_0x000107760a7c();
      }
      func_0x0001077609e8();
      func_0x0001077609b8();
      func_0x0001077609dc();
      goto code_r0x000107760030;
    }
    func_0x0001077609a8();
    break;
  case 7:
    func_0x000107348ecc(param_1 + 0x10,lVar2 + 8);
    *(undefined4 *)(param_1 + 0x78) = 1;
    goto code_r0x000107760050;
  case 8:
    func_0x000107760a6c();
    func_0x000107760a8c();
    func_0x000107760a00();
    func_0x000107760a84();
    if ((bStack_40 & 1) != 0) {
      func_0x0001077609f4();
      if (*(long *)(param_3 + 0xf0) != 0) {
        func_0x000107760a7c();
      }
      func_0x0001077609e8();
      func_0x0001077609b8();
      func_0x0001077609dc();
      goto code_r0x000107760030;
    }
    func_0x0001077609a8();
    break;
  default:
    func_0x000107760a6c();
    func_0x000107760a8c();
    func_0x000107760a00();
    func_0x000107760a84();
    if ((bStack_40 & 1) != 0) {
      func_0x0001077609f4();
      if (*(long *)(param_3 + 0xf0) != 0) {
        func_0x000107760a7c();
      }
      func_0x0001077609e8();
      func_0x0001077609b8();
      func_0x0001077609dc();
      goto code_r0x000107760030;
    }
    func_0x0001077609a8();
  }
  func_0x00010756c0ec(param_1,auStack_110);
  puVar3 = auStack_110;
LAB_107760044:
  func_0x000104c2f714(puVar3);
  func_0x00010724b3d8(auStack_78);
code_r0x000107760050:
  param_4 = param_4 + 0x40;
  func_0x000107570f18(param_4,param_1);
  param_1 = param_4;
LAB_10776005c:
  func_0x000107760b44();
  func_0x0001077609c8(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000104c2f714(auStack_b0);
    func_0x00010724b3d8(auStack_78);
    func_0x000107760b44();
    __Unwind_Resume(param_1);
    func_0x000107547c54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10776026c; end: 107760293;  */

void FUN_10776026c(void)

{
  func_0x000107760ac4();
  func_0x000107760a54(&PTR_DAT_1109d5190);
  return;
}



/* Entry: 107760810; end: 10776083f;  */

void FUN_107760810(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109d5200;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10776099c; end: 107760b7f;  */

undefined ** FUN_10776099c(void)

{
  return &PTR_DAT_1109d52f0;
}



/* Entry: 1077617a0; end: 107761847;  */

undefined1 * FUN_1077617a0(undefined8 param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  long lVar3;
  undefined1 auStack_128 [8];
  undefined1 uStack_120;
  undefined4 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_a8;
  undefined4 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107761954(param_1);
  uStack_120 = 1;
  uStack_c0 = 1;
  uStack_b8 = 1;
  uStack_a8 = 0;
  uStack_48 = 1;
  uStack_40 = 1;
  uStack_38 = extraout_x8;
  func_0x0001074d1ee8();
  lVar3 = 0x78;
  do {
    puVar2 = auStack_128 + lVar3;
    func_0x000107296ad0();
    lVar3 = lVar3 + -0x78;
    bVar1 = lVar3 == -0x78;
  } while (!bVar1);
  func_0x000107761940(uStack_38);
  if (bVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar3 = 0x78;
  do {
    func_0x000107296ad0(auStack_128 + lVar3);
    lVar3 = lVar3 + -0x78;
  } while (lVar3 != -0x78);
  func_0x000107761a04();
  func_0x000100060934(extraout_x8_00,&DAT_10f416776);
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0xffffffffffffffff;
  return extraout_x8_00;
}



/* Entry: 1077618f8; end: 107761913;  */

undefined8 * FUN_1077618f8(long param_1)

{
  func_0x000107261dac(param_1 + 0x80);
  func_0x0001072c9b9c(param_1 + 0x70);
  func_0x0001072c9b9c(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 0x40);
  func_0x0001072c9884(param_1 + 0x28);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1077622b8; end: 1077622cf;  */

/* WARNING: Possible PIC construction at 0x0001074d24e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074d24e8) */
/* WARNING: Removing unreachable block (ram,0x0001074d2590) */
/* WARNING: Removing unreachable block (ram,0x0001074d25b0) */
/* WARNING: Removing unreachable block (ram,0x0001074d2548) */

undefined8 FUN_1077622b8(long *param_1)

{
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_70 [64];
  
  func_0x0001074d3a84();
  (**(code **)(*param_1 + 0x40))(auStack_70);
  puStack_88 = &UNK_1074d24e8;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,auStack_70);
  return uStack_98;
}



/* Entry: 1077633d8; end: 10776351b;  */

void FUN_1077633d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000100456794(auStack_a8,param_1,&DAT_10f62a9e8);
  func_0x000107878fec(auStack_c0,1);
  func_0x00010533a9c0(auStack_90,auStack_a8,auStack_c0);
  func_0x00010048a6c8(auStack_78,auStack_90,&DAT_10f42647b);
  func_0x000107878fec(auStack_d8,param_3);
  func_0x00010533a9c0(auStack_60,auStack_78,auStack_d8);
  func_0x00010048a6c8(auStack_48,auStack_60,&DAT_10f62a9ea);
  func_0x00010756b6a8(param_1,param_2,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  func_0x000107765c7c();
  func_0x000107765c84();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  func_0x000107765c8c();
  return;
}



/* Entry: 1077640b8; end: 107764113;  */

void FUN_1077640b8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  func_0x00010745df58(param_2,*(undefined8 *)(param_1 + 0x80));
  lVar2 = *(long *)(param_1 + 0x90);
  while (lVar2 != param_1 + 0x98) {
    puVar1 = (undefined8 *)(lVar2 + 0x28);
    lVar2 = param_2;
    func_0x00010745df58(param_2,*puVar1);
    func_0x000107765ec0();
  }
  return;
}



/* Entry: 1077643d0; end: 1077643e3;  */

void FUN_1077643d0(void)

{
  func_0x000107764a78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107764928; end: 10776494f;  */

void FUN_107764928(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  func_0x000107764950(param_1,&uStack_20);
  return;
}



/* Entry: 107764aac; end: 107764b03;  */

void FUN_107764aac(void)

{
  long extraout_x11;
  undefined8 *unaff_x19;
  
  func_0x000107765b00();
  if (extraout_x11 != 0) {
    func_0x000107765ef8();
  }
  func_0x000107765be0();
  func_0x000107765de8();
  func_0x000107765de0();
  *unaff_x19 = &PTR_DAT_1109d55b8;
  return;
}



/* Entry: 107764fe0; end: 107764feb;  */

void FUN_107764fe0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d5640;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077650d4; end: 107765623;  */

void FUN_1077650d4(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double *pdVar7;
  double *pdVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  long lVar10;
  long unaff_x19;
  long unaff_x23;
  long lVar11;
  ulong uVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_368 [136];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_268 [120];
  int iStack_1f0;
  double dStack_1e8;
  undefined8 uStack_1e0;
  int iStack_170;
  undefined1 auStack_168 [120];
  int iStack_f0;
  undefined1 auStack_e8 [8];
  double adStack_e0 [12];
  undefined4 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = param_1;
  func_0x000107765ba4();
  uStack_78 = extraout_x8;
  func_0x000107753050(auStack_168,*(undefined8 *)(lVar4 + 0x80));
  uVar2 = iStack_f0 == 1;
  if (!(bool)uVar2) {
    func_0x00010756dd74(auStack_168);
    func_0x000107765c64();
    goto LAB_107765450;
  }
  fVar14 = SUB84(auStack_168,0);
  func_0x00010727f7dc();
  func_0x000107776fc4();
  uVar2 = !NAN(fVar14) && !NAN(fVar14);
  if (NAN(fVar14)) goto LAB_107765474;
  if (*(long *)(param_1 + 0xa0) == 0) {
    if ((bRam00000001137260e0 & 1) == 0) {
      iVar3 = 0x137260e0;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x000107765d74(0x113726200);
        ___cxa_guard_release(0x1137260e0);
      }
    }
    uVar9 = 0x113726200;
    goto LAB_1077651d0;
  }
  dStack_1e8 = (double)fVar14;
  lVar4 = param_1 + 0x90;
  func_0x0001077648c8(lVar4,&dStack_1e8);
  func_0x000107765f08();
  if ((bool)uVar2) {
    func_0x00010002c810();
    func_0x000107765a94(*(undefined8 *)(lVar4 + 0x28));
    goto LAB_107765450;
  }
  uVar2 = *(long *)(param_1 + 0x90) == unaff_x23;
  if ((bool)uVar2) {
    func_0x000107765a94(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x28));
    goto LAB_107765450;
  }
  func_0x000107765c6c();
  dVar13 = *(double *)(lVar4 + 0x20);
  uStack_1e0 = *(undefined8 *)(unaff_x23 + 0x20);
  dStack_1e8 = dVar13;
  func_0x000107765e2c();
  fVar14 = (float)dVar13;
  uVar2 = fVar14 == 0.0;
  if ((bool)uVar2) {
    func_0x000107765c6c();
    func_0x000107765a94(*(undefined8 *)(lVar4 + 0x28));
    goto LAB_107765450;
  }
  uVar2 = fVar14 == 1.0;
  if ((bool)uVar2) {
    func_0x000107765a94(*(undefined8 *)(unaff_x23 + 0x28));
    goto LAB_107765450;
  }
  func_0x000107765c6c();
  func_0x000107765ae0(&dStack_1e8,*(undefined8 *)(lVar4 + 0x28));
  uVar2 = iStack_170 == 1;
  if ((bool)uVar2) {
    puVar5 = *(undefined8 **)(unaff_x23 + 0x28);
    func_0x000107765ae0(auStack_268);
    uVar2 = iStack_1f0 == 1;
    if ((bool)uVar2) {
      func_0x000107765f4c();
      uVar2 = *(int *)(puVar5 + 0xd) == 8;
      if ((bool)uVar2) {
        func_0x000107766014();
        uVar2 = *(int *)(puVar5 + 0xd) == 8;
        if ((bool)uVar2) {
          func_0x000107765f4c();
          func_0x000107325cc8();
          puVar6 = puVar5;
          func_0x000107766014();
          func_0x000107325cc8();
          lVar4 = *(long *)*puVar5;
          lVar10 = ((long *)*puVar5)[1];
          uVar2 = lVar4 == lVar10;
          if ((bool)uVar2) {
            func_0x000107277eec(&uStack_2e0);
          }
          else {
            lVar11 = 0;
            uStack_2a0 = 0;
            uStack_298 = 0;
            uStack_290 = 0;
            for (uVar12 = 0; uVar1 = (lVar10 - lVar4) / 0x70, uVar2 = uVar12 == uVar1,
                uVar12 < uVar1; uVar12 = uVar12 + 1) {
              pdVar7 = (double *)(lVar4 + lVar11);
              func_0x0001072cb4bc();
              pdVar8 = (double *)(*(long *)*puVar6 + lVar11);
              func_0x0001072cb4bc();
              adStack_e0[0] = *pdVar8 * (double)fVar14 + (1.0 - (double)fVar14) * *pdVar7;
              uStack_80 = 2;
              FUN_10758ee8c(&uStack_2a0,auStack_e8);
              func_0x00010726af18(adStack_e0);
              lVar4 = *(long *)*puVar5;
              lVar10 = ((long *)*puVar5)[1];
              lVar11 = lVar11 + 0x70;
            }
            func_0x000107277aa4(&uStack_2e0,&uStack_2a0);
            func_0x000107277d70(&uStack_2a0);
          }
          *(undefined8 *)(unaff_x19 + 0x18) = uStack_2d8;
          *(undefined8 *)(unaff_x19 + 0x10) = uStack_2e0;
          uStack_2e0 = 0;
          uStack_2d8 = 0;
          func_0x000107765ee8(8);
          func_0x00010726b188(&uStack_2e0);
          goto LAB_107765440;
        }
        func_0x00010777762c(auStack_368);
        func_0x000107765ffc();
        func_0x000107766040();
        func_0x000107765acc();
        func_0x000107765ab8();
        func_0x000107766014();
        func_0x000107765db0();
        func_0x000107765bc4();
        func_0x000107765bb8();
        func_0x000107765b4c();
        func_0x000107765aa4();
      }
      else {
        func_0x00010777762c(auStack_368);
        func_0x000107765ffc();
        func_0x000107766040();
        func_0x000107765acc();
        func_0x000107765ab8();
        func_0x000107765f4c();
        func_0x000107765db0();
        func_0x000107765bc4();
        func_0x000107765bb8();
        func_0x000107765b4c();
        func_0x000107765aa4();
      }
      func_0x000107765f74(auStack_e8);
      func_0x000107765dc0();
      func_0x000104c2f714(auStack_e8);
      func_0x000107765f6c();
      func_0x000107765da8();
      func_0x000107765df8();
      func_0x000107765d8c();
      func_0x000107765da0();
      func_0x000107765c7c();
      func_0x000107765c84();
      func_0x000107765c8c();
      func_0x000104c2f714(&uStack_2a0);
      func_0x000107765df0();
    }
    else {
      func_0x00010756dd74(auStack_268);
      func_0x000107765c64();
    }
LAB_107765440:
    func_0x000107765bfc(auStack_268);
  }
  else {
    func_0x00010756dd74(&dStack_1e8);
    func_0x000107765c64();
  }
  func_0x000107765bfc(&dStack_1e8);
LAB_107765450:
  while( true ) {
    func_0x000107765bfc(auStack_168);
    func_0x000107765aec(uStack_78);
    if ((bool)uVar2) break;
    ___stack_chk_fail();
LAB_107765474:
    if ((bRam00000001137260d8 & 1) == 0) {
      iVar3 = 0x137260d8;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x000107765e10(0x1137261c8);
        ___cxa_guard_release(0x1137260d8);
      }
    }
    uVar9 = 0x1137261c8;
LAB_1077651d0:
    func_0x000104c2fe00(&dStack_1e8,uVar9);
    func_0x000107765dc0();
    func_0x000104c2f714(&dStack_1e8);
  }
  return;
}



/* Entry: 107765808; end: 10776580f;  */

void FUN_107765808(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107765934; end: 10776596f;  */

undefined4 * FUN_107765934(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  func_0x000107765fbc();
  return param_1;
}



/* Entry: 1077664d4; end: 10776653b;  */

long * FUN_1077664d4(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  byte bStack_130;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_e8;
  undefined1 auStack_a0 [112];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  puVar9 = auStack_a0;
  plVar5 = (long *)auStack_a0;
  plVar6 = (long *)auStack_a0;
  func_0x000107766888(param_1);
  auStack_a0[0] = 0;
  uStack_30 = 0;
  uVar10 = 1;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x000107766874(uStack_28);
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x000107296ad0();
  func_0x0001077668b8();
  plVar5 = plVar6;
  func_0x000107766888();
  plVar7 = plVar5 + 1;
  uStack_e8 = extraout_x8_01;
  (**(code **)(*plVar5 + 0x20))();
  uVar4 = plVar7 == (long *)0x2;
  if ((bool)uVar4) {
    (**(code **)(*plVar6 + 0x28))(&lStack_100,plVar5 + 1,1);
    auStack_158[0] = 0;
    uStack_148 = 0;
    uVar2 = (ulong)uStack_110 >> 0x28;
    uVar1 = (uint)uStack_110;
    uStack_110._0_5_ = (uint5)(uVar1 & 0xffffff00);
    uStack_110 = CONCAT35((int3)uVar2,(uint5)uStack_110);
    FUN_10777067c(&lStack_140,puVar9,&lStack_100,1,uVar10,auStack_158,&uStack_110);
    func_0x0001072c9854(auStack_158);
    func_0x0001072f5f6c(&lStack_100);
    if ((bStack_130 & 1) == 0) {
      *(undefined1 *)extraout_x8_00 = 0;
      *(undefined1 *)(extraout_x8_00 + 2) = 0;
    }
    else {
      func_0x0001072c9ff4(auStack_168,lStack_140 + 0x10);
      puVar8 = (undefined8 *)0x70;
      __Znwm();
      uVar10 = uStack_138;
      lVar3 = lStack_140;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_DAT_1109d5938;
      lStack_140 = 0;
      uStack_138 = 0;
      uStack_f8 = 1;
      uStack_110 = CONCAT44(CONCAT22(uStack_110._6_2_,*(undefined2 *)(lVar3 + 0x24)),
                            *(undefined4 *)(lVar3 + 0x20));
      func_0x0001072c9f9c(puVar8 + 3,6,&lStack_100,&uStack_110);
      func_0x0001072c9884(&lStack_100);
      puVar8[3] = &PTR_DAT_1109d58b0;
      puVar8[0xd] = uVar10;
      puVar8[0xc] = lVar3;
      uStack_110 = 0;
      uStack_108 = 0;
      func_0x0001072c9b9c(&uStack_110);
      *extraout_x8_00 = (long)(puVar8 + 3);
      extraout_x8_00[1] = (long)puVar8;
      *(undefined1 *)(extraout_x8_00 + 2) = 1;
      func_0x0001072c9884(auStack_168);
    }
    plVar5 = &lStack_140;
    func_0x0001072c95d0();
  }
  else {
    func_0x000107878fec(&lStack_100);
    func_0x0001004c3cd0(&lStack_140,&UNK_10f4264bb,&lStack_100);
    func_0x00010048a6c8(auStack_128,&lStack_140,&UNK_10f417b93);
    func_0x00010756a668(puVar9,auStack_128);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
    func_0x0001077668b0();
    plVar5 = &lStack_100;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)extraout_x8_00 = 0;
    *(undefined1 *)(extraout_x8_00 + 2) = 0;
  }
  func_0x000107766874(uStack_e8);
  if ((bool)uVar4) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x0001072c9884(auStack_168);
  plVar5 = &lStack_140;
  func_0x0001072c95d0();
  func_0x0001077668b8();
  *plVar5 = (long)&PTR_DAT_1109d58b0;
  func_0x0001072c9b9c(plVar5 + 9);
  *plVar5 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(plVar5 + 5);
  func_0x0001072c9884(plVar5 + 2);
  return plVar5;
}



/* Entry: 107766804; end: 1077668d3;  */

void FUN_107766804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010776680c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107767358; end: 10776743f;  */

void FUN_107767358(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = param_1;
  lVar3 = param_2;
  puVar4 = param_3;
  func_0x00010776884c();
  uVar1 = *(char *)(puVar4 + 0x32) == '\x01';
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    func_0x0001077688f4();
    *puVar2 = &PTR_DAT_1109d5bc8;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[3] = param_4;
    puStack_40 = puVar2;
    func_0x00010776696c(param_3,param_1 + 9,&puStack_58);
    func_0x000107768958();
    param_1 = param_3;
  }
  else {
    puVar2 = param_1 + 9;
    func_0x000107375ad0();
    puStack_58 = puVar2;
    lStack_50 = lVar3;
    while (puStack_58 != (undefined8 *)0x0) {
      (**(code **)(**(long **)(lStack_50 + 0x38) + 0x48))
                (*(long **)(lStack_50 + 0x38),param_2,param_3,param_4);
      func_0x000107375b30(&puStack_58);
    }
    func_0x0001077533f4(param_1,param_2,param_3,param_4);
  }
  func_0x000107768838(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107768958();
    func_0x00010776886c();
                    /* WARNING: Could not recover jumptable at 0x00010776744c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[0xd] + 0x50))();
    return;
  }
  return;
}



/* Entry: 107768060; end: 107768063;  */

undefined8 * FUN_107768060(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d5988;
  func_0x0001072c9b9c(param_1 + 0xd);
  func_0x0001072c9500(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10776815c; end: 10776818b;  */

long FUN_10776815c(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107768a70();
  func_0x000107768970();
  lVar1 = unaff_x19 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10776830c; end: 107768317;  */

undefined ** FUN_10776830c(void)

{
  return &PTR_DAT_1109d5b58;
}



/* Entry: 1077684cc; end: 1077684f3;  */

long FUN_1077684cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107768634; end: 10776865b;  */

void FUN_107768634(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d5c48;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107768810; end: 107768837;  */

long FUN_107768810(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107769444; end: 107769467;  */

void FUN_107769444(void)

{
  return;
}



/* Entry: 107769788; end: 107769803;  */

undefined8 * FUN_107769788(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined1 auStack_30 [16];
  
  func_0x000107548a44(auStack_30);
  uStack_34 = 1;
  uStack_38 = 0x1010101;
  func_0x0001072c9f9c(param_1,2,auStack_30,&uStack_38);
  func_0x0001077698f4();
  *param_1 = &PTR_DAT_1109d5d18;
  uVar1 = *param_3;
  param_1[0xb] = param_3[1];
  param_1[10] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_1 + 0x16) = 8;
  return param_1;
}



/* Entry: 10776a40c; end: 10776a4b7;  */

void FUN_10776a40c(void)

{
  return;
}



/* Entry: 10776ad24; end: 10776aeab;  */

/* WARNING: Possible PIC construction at 0x00010776af34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776af38) */

double * FUN_10776ad24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                      long param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  double *pdVar4;
  double *pdVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  double *extraout_x8_00;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  double *unaff_x19;
  undefined8 *******pppppppuVar15;
  undefined *puVar16;
  double dVar17;
  undefined8 ******ppppppuStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [40];
  undefined8 uStack_e8;
  long lStack_e0;
  double *pdStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_b8 [120];
  int iStack_40;
  undefined8 uStack_38;
  
  lVar8 = param_2;
  func_0x00010776d97c();
  pdVar5 = *(double **)(lVar8 + 0x48);
  uStack_38 = extraout_x8;
  func_0x00010776dd20();
  uVar3 = iStack_40 == 1;
  if ((bool)uVar3) {
    func_0x00010776dd10();
    uVar3 = *(int *)(pdVar5 + 0xd) == 2;
    if ((bool)uVar3) {
      func_0x00010776dd10();
      func_0x0001072cb4bc();
      dVar17 = *pdVar5;
      uVar3 = dVar17 == (double)(long)(double)(long)dVar17;
      if ((((bool)uVar3) && (uVar9 = *(ulong *)(param_2 + 0x60), uVar9 != 0)) &&
         (*(long *)(param_2 + 0x70) != 0)) {
        uVar10 = (ulong)dVar17;
        uVar11 = uVar9 - 1;
        if ((uVar9 & uVar11) == 0) {
          uVar12 = uVar11 & uVar10;
          uVar3 = true;
        }
        else {
          uVar3 = uVar9 == uVar10;
          uVar12 = uVar10;
          if (uVar9 <= uVar10) {
            uVar12 = 0;
            if (uVar9 != 0) {
              uVar12 = uVar10 / uVar9;
            }
            uVar12 = uVar10 - uVar12 * uVar9;
          }
        }
        plVar13 = *(long **)(*(long *)(param_2 + 0x58) + uVar12 * 8);
        if (plVar13 != (long *)0x0) {
          do {
            while( true ) {
              plVar13 = (long *)*plVar13;
              if (plVar13 == (long *)0x0) goto LAB_10776ae48;
              uVar14 = plVar13[1];
              if (uVar14 != uVar10) break;
              uVar3 = plVar13[2] == uVar10;
              if ((bool)uVar3) {
                param_3 = plVar13[3];
                puVar6 = *(undefined1 **)(param_5 + 0x18);
                func_0x00010776dc58();
                unaff_x19 = pdVar5;
                goto LAB_10776ae54;
              }
            }
            if ((uVar9 & uVar11) == 0) {
              uVar14 = uVar14 & uVar11;
            }
            else if (uVar9 <= uVar14) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar14 / uVar9;
              }
              uVar14 = uVar14 - uVar1 * uVar9;
            }
            uVar3 = uVar14 == uVar12;
          } while ((bool)uVar3);
        }
      }
LAB_10776ae48:
      param_3 = *(undefined8 *)(param_2 + 0x80);
      puVar6 = *(undefined1 **)(param_5 + 0x18);
      func_0x00010776dc58();
      unaff_x19 = pdVar5;
    }
    else {
      param_3 = *(undefined8 *)(param_2 + 0x80);
      puVar6 = *(undefined1 **)(param_5 + 0x18);
      func_0x00010776dc58();
      unaff_x19 = pdVar5;
    }
  }
  else {
    puVar6 = auStack_b8;
    func_0x00010756dd74(puVar6);
    func_0x00010756dd30();
  }
LAB_10776ae54:
  func_0x00010776da60();
  func_0x00010776d950(uStack_38);
  if ((bool)uVar3) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  pdVar5 = unaff_x19;
  func_0x00010776da60();
  func_0x00010776da9c();
  puVar2 = auStack_110;
  puStack_c8 = &DAT_10776aeac;
  pdVar4 = extraout_x8_00;
  lStack_e0 = param_5;
  pdStack_d8 = unaff_x19;
  pppppuStack_d0 = (undefined8 *****)&stack0xfffffffffffffff0;
  func_0x00010776d99c(extraout_x8_00,pdVar5,puVar6,param_3);
  func_0x00010776e068();
  FUN_10776ad24();
  func_0x00010776dd18();
  func_0x00010776d950(uStack_e8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010776dd18();
    func_0x00010776da9c();
    puStack_118 = &DAT_10776af0c;
    ppppppuStack_120 = &pppppuStack_d0;
    func_0x00010776dc60();
    if (*(long *)(param_5 + 0x68) == 0) {
      uVar7 = *(undefined8 *)(param_5 + 0x80);
      pppppppuVar15 = (undefined8 *******)ppppppuStack_120;
      puVar16 = puStack_118;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(param_5 + 0x68) + 0x48);
      puVar2 = &stack0xfffffffffffffec0;
      pppppppuVar15 = &ppppppuStack_120;
      puVar16 = &UNK_10776af38;
    }
    pdVar5 = (double *)pdVar4[3];
    if (pdVar5 == (double *)0x0) {
      *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar15;
      *(undefined **)(puVar2 + -8) = puVar16;
      func_0x000104bfeb48(0,uVar7);
      *(long *)(puVar2 + -0x30) = param_5;
      *(double **)(puVar2 + -0x28) = pdVar4;
      *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x18) = &UNK_10745df78;
      pdVar4 = (double *)pdVar5[3];
      if (pdVar4 == pdVar5) {
        lVar8 = 0x20;
      }
      else {
        if (pdVar4 == (double *)0x0) {
          return pdVar5;
        }
        lVar8 = 0x28;
      }
      (**(code **)((long)*pdVar4 + lVar8))();
      return pdVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)*pdVar5 + 0x30))();
    return pdVar5;
  }
  return pdVar4;
}



/* Entry: 10776b648; end: 10776b6a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10776b648(undefined1 *param_1,undefined8 param_2,float param_3,long *param_4,
                  undefined8 param_5)

{
  double dVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  code *pcVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  int iVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  uint5 *puVar13;
  long extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  long extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  ulong uVar14;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar15;
  uint5 *puVar16;
  long *plVar17;
  uint5 *puVar18;
  long lVar19;
  uint5 *puVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  uint5 *puVar24;
  long *unaff_x28;
  uint5 *puVar25;
  float fVar26;
  long lVar27;
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [4];
  undefined1 uStack_49c;
  byte bStack_490;
  undefined1 auStack_480 [8];
  undefined4 uStack_478;
  undefined1 uStack_470;
  undefined1 auStack_468 [24];
  undefined1 auStack_450 [24];
  long *plStack_438;
  long *plStack_430;
  long *plStack_428;
  undefined1 auStack_420 [16];
  byte bStack_410;
  undefined1 auStack_408 [8];
  int iStack_400;
  undefined1 uStack_3f8;
  uint5 auStack_3f0 [3];
  undefined1 auStack_3d8 [24];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [16];
  long *plStack_388;
  uint5 uStack_380;
  uint5 *puStack_378;
  long *plStack_370;
  long lStack_368;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  long lStack_338;
  long alStack_330 [2];
  byte bStack_320;
  long *plStack_310;
  long **pplStack_308;
  long *plStack_300;
  char cStack_2f8;
  undefined7 uStack_2f7;
  byte bStack_2c8;
  long *plStack_2c0;
  undefined4 uStack_2b8;
  byte bStack_2b0;
  undefined8 uStack_2a8;
  long alStack_230 [3];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [16];
  byte bStack_1f0;
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  int aiStack_1a0 [2];
  double adStack_198 [7];
  char cStack_160;
  long alStack_158 [9];
  undefined1 uStack_110;
  undefined1 auStack_108 [8];
  double dStack_100;
  undefined1 uStack_f8;
  char cStack_f0;
  undefined4 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x00010776d99c();
  func_0x00010776e068();
  puVar11 = auStack_48;
  func_0x00010776b4bc();
  func_0x00010776dd18();
  func_0x00010776d950(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010776dd18();
  func_0x00010776da9c();
  plVar12 = alStack_230;
  func_0x00010776d97c();
  alStack_158[0]._0_1_ = 0;
  uStack_110 = 0;
  auStack_200[0] = 0;
  bStack_1f0 = 0;
  uStack_b8 = extraout_x8;
  (**(code **)(*param_4 + 0x70))(aiStack_1a0,param_4 + 1);
  uVar7 = cStack_160 == '\x01';
  if (!(bool)uVar7) {
    func_0x00010002b838(auStack_218,&UNK_10f4268ae);
    func_0x00010776d990();
    puVar9 = auStack_218;
    goto code_r0x00010776b8e4;
  }
  uVar7 = aiStack_1a0[0] + -1 == 6;
  switch(aiStack_1a0[0] + -1) {
  case 0:
    func_0x00010776d9c4();
    func_0x00010776d990();
    break;
  case 1:
    dStack_100 = (double)CONCAT44(dStack_100._4_4_,3);
    uStack_f8 = 1;
    func_0x00010776da78();
    func_0x00010776dc50();
    func_0x000104c2fe00(&dStack_100,adStack_198);
    uStack_c8 = 1;
    uStack_c0 = 1;
    func_0x00010776da6c();
    goto code_r0x00010776b85c;
  case 2:
    if ((ulong)(long)ABS(adStack_198[0]) >> 0x35 != 0) {
      func_0x00010776dbbc();
      func_0x00010776da18();
      func_0x00010776da04();
      func_0x00010776d990();
code_r0x00010776b8d0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
      puVar9 = auStack_1d0;
      goto code_r0x00010776b8e4;
    }
    uVar7 = adStack_198[0] == (double)(long)adStack_198[0];
    if (!(bool)uVar7) {
      func_0x00010002b838(auStack_1e8,&UNK_10f426990);
      func_0x00010776d990();
      puVar9 = auStack_1e8;
      goto code_r0x00010776b8e4;
    }
    dStack_100 = (double)CONCAT44(dStack_100._4_4_,1);
    uStack_f8 = 1;
    func_0x00010776da78();
    func_0x00010776dc50();
    dStack_100 = (double)(long)adStack_198[0];
    uStack_c8 = 0;
    uStack_c0 = 1;
    func_0x00010776da6c();
    goto code_r0x00010776b85c;
  case 3:
    uVar7 = adStack_198[0] == 0.0;
    dVar1 = (double)-(long)adStack_198[0];
    if (-1 < (long)adStack_198[0]) {
      dVar1 = adStack_198[0];
    }
    if ((ulong)dVar1 >> 0x35 != 0) {
      func_0x00010776dbbc();
      func_0x00010776da18();
      func_0x00010776da04();
      func_0x00010776d990();
      goto code_r0x00010776b8d0;
    }
    dStack_100 = (double)CONCAT44(dStack_100._4_4_,1);
    uStack_f8 = 1;
    func_0x00010776da78();
    func_0x00010776dc50();
    dStack_100 = adStack_198[0];
    uStack_c8 = 0;
    uStack_c0 = 1;
    func_0x00010776da6c();
    goto code_r0x00010776b85c;
  case 4:
    if ((ulong)adStack_198[0] >> 0x35 != 0) {
      func_0x00010776dbbc();
      func_0x00010776da18();
      func_0x00010776da04();
      func_0x00010776d990();
      goto code_r0x00010776b8d0;
    }
    dStack_100 = (double)CONCAT44(dStack_100._4_4_,1);
    uStack_f8 = 1;
    func_0x00010776da78();
    func_0x00010776dc50();
    dStack_100 = adStack_198[0];
    uStack_c8 = 0;
    uStack_c0 = 1;
    func_0x00010776da6c();
code_r0x00010776b85c:
    func_0x00010776cc58(auStack_108);
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
  puVar9 = auStack_108;
code_r0x00010776b8e4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar9);
code_r0x00010776b8e8:
  if ((bStack_1f0 & 1) == 0) {
code_r0x00010776b954:
    plVar12 = alStack_158;
    func_0x00010776cb44(param_1);
  }
  else {
    if ((puVar11[0x10] & 1) == 0) {
      func_0x000107570410(puVar11,auStack_200);
      goto code_r0x00010776b954;
    }
    func_0x00010756f724(auStack_108,puVar11,auStack_200);
    uVar7 = cStack_f0 == '\x01';
    if (!(bool)uVar7) {
      func_0x00010776df40();
      goto code_r0x00010776b954;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (alStack_230,auStack_108);
    func_0x00010776d990();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_230);
    *param_1 = 0;
    param_1[0x48] = 0;
    func_0x00010776df40();
  }
  func_0x000107267ed0(aiStack_1a0);
  func_0x0001072c9854(auStack_200);
  func_0x00010776cc58();
  func_0x00010776d950(uStack_b8);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010776cc58(auStack_108);
  func_0x000107267ed0(aiStack_1a0);
  func_0x0001072c9854(auStack_200);
  puVar16 = (uint5 *)alStack_158;
  func_0x00010776cc58();
  func_0x00010776da9c();
  puVar24 = puVar16;
  func_0x00010776d99c();
  puVar18 = puVar24 + 1;
  puVar20 = puVar18;
  uStack_2a8 = extraout_x8_01;
  (**(code **)(*(long *)puVar24 + 0x20))();
  uVar7 = puVar20 == (uint5 *)0x4;
  if (puVar20 < (uint5 *)0x5) {
    func_0x000107878fec(&uStack_380,(long)puVar20 + -1);
    func_0x0001004c3cd0(&plStack_310,&UNK_10f4268d8,&uStack_380);
    func_0x00010048a6c8(auStack_3d8,&plStack_310,&DAT_10f62a9de);
    func_0x00010756a668(plVar12,auStack_3d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d8);
    func_0x00010776dbd0();
    puVar16 = &uStack_380;
code_r0x00010776bb9c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar16);
    func_0x00010776dc7c();
  }
  else {
    if (((ulong)puVar20 & 1) == 0) {
      func_0x00010002b838(auStack_3f0,&UNK_10f42690f);
      func_0x00010756a668(plVar12,auStack_3f0);
      puVar16 = auStack_3f0;
      goto code_r0x00010776bb9c;
    }
    auStack_408[0] = 0;
    uStack_3f8 = 0;
    auStack_420[0] = 0;
    bStack_410 = 0;
    func_0x00010776df38(&plStack_310);
    if ((char)plStack_300 == '\x01') {
      func_0x00010776df38(&uStack_380);
      uStack_2b8 = 6;
      puVar24 = &uStack_380;
      func_0x0001074d1ed0(puVar24,&plStack_2c0);
      func_0x0001072c9884(&plStack_2c0);
      func_0x0001072c9854(&uStack_380);
      func_0x0001072c9854(&plStack_310);
      if ((int)puVar24 != 0) {
        func_0x00010776df38();
        func_0x00010756bb10(auStack_420,&plStack_310);
        goto code_r0x00010776bc1c;
      }
    }
    else {
code_r0x00010776bc1c:
      func_0x0001072c9854();
    }
    plStack_438 = (long *)0x0;
    plStack_430 = (long *)0x0;
    plStack_428 = (long *)0x0;
    if (0xccccccccccccccc < (long)puVar20 - 3U) goto code_r0x00010776c804;
    func_0x00010776cc94();
    func_0x00010776de5c();
    plVar22 = (long *)(extraout_x8_02 + extraout_x9 * 0x28);
    _memcpy(plVar22);
    plVar10 = plStack_438;
    plStack_428 = (long *)CONCAT71(uStack_2f7,cStack_2f8);
    plStack_430 = plStack_300;
    plStack_438 = plVar22;
    func_0x00010776dcd0(plVar10);
    uVar23 = 2;
    while( true ) {
      puVar24 = (uint5 *)(uVar23 | 1);
      uVar7 = puVar24 == puVar20;
      if (puVar20 <= puVar24) break;
      func_0x00010776dfd8();
      (*extraout_x9_00)(alStack_330,puVar18,uVar23);
      _uStack_380 = 0;
      puStack_378 = (uint5 *)0x0;
      plStack_370 = (long *)0x0;
      iVar8 = (int)alStack_330 + 8;
      (**(code **)(alStack_330[0] + 0x18))();
      if (iVar8 == 0) {
        func_0x00010776de04(&plStack_310,alStack_330);
        bVar5 = bStack_2c8;
        if ((bStack_2c8 & 1) == 0) {
          func_0x00010776dbd8();
        }
        else {
          func_0x00010776df50();
        }
        func_0x00010776cc58(&plStack_310);
        if ((bVar5 & 1) == 0) goto code_r0x00010776c0a8;
      }
      else {
        plVar10 = alStack_330 + 1;
        (**(code **)(alStack_330[0] + 0x20))();
        if (plVar10 == (long *)0x0) {
          func_0x00010002b838(auStack_450,&UNK_10f42693d);
          func_0x00010756a69c(plVar12,auStack_450,uVar23);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_450);
          func_0x00010776dc7c();
code_r0x00010776c0a8:
          func_0x00010776df48();
          func_0x0001072f5f6c(alStack_330);
          goto code_r0x00010776c0b4;
        }
        if ((long *)(((long)plStack_370 - _uStack_380) / 0x48) < plVar10) {
          if ((long *)0x38e38e38e38e38e < plVar10) {
            func_0x00010776cd5c();
            goto code_r0x00010776c828;
          }
          func_0x00010776ce24(&plStack_310,plVar10,((long)puStack_378 - _uStack_380) / 0x48,
                              &plStack_370);
          func_0x00010776cd68(&uStack_380,&plStack_310);
          FUN_10776ce80(&plStack_310);
        }
        unaff_x28 = (long *)0x0;
        while (uVar7 = plVar10 == unaff_x28, !(bool)uVar7) {
          (**(code **)(alStack_330[0] + 0x28))(&plStack_2c0,alStack_330 + 1,unaff_x28);
          func_0x00010776de04(&plStack_310,&plStack_2c0);
          func_0x0001072f5f6c(&plStack_2c0);
          bVar5 = bStack_2c8;
          if ((bStack_2c8 & 1) == 0) {
            func_0x00010776dbd8();
          }
          else {
            func_0x00010776df50();
          }
          func_0x00010776cc58(&plStack_310);
          unaff_x28 = (long *)((long)unaff_x28 + 1);
          if ((bVar5 & 1) == 0) goto code_r0x00010776c0a8;
        }
      }
      func_0x00010776dfd8();
      (*extraout_x9_01)(&plStack_310,puVar18,puVar24);
      func_0x00010756f360(auStack_468,auStack_420);
      auStack_4a0[0] = 0;
      uStack_49c = 0;
      FUN_10777067c(&plStack_2c0,plVar12,&plStack_310,puVar24,param_5,auStack_468,auStack_4a0);
      func_0x0001072c9854(auStack_468);
      func_0x00010776ddc0();
      bVar5 = bStack_2b0;
      if ((bStack_2b0 & 1) == 0) {
        func_0x00010776dbd8();
      }
      else {
        if ((bStack_410 & 1) == 0) {
          func_0x00010756f300(auStack_420,plStack_2c0 + 2);
        }
        uVar7 = plStack_430 == plStack_428;
        if (plStack_430 < plStack_428) {
          *plStack_430 = 0;
          plStack_430[1] = 0;
          plStack_430[2] = 0;
          func_0x00010776db58();
          plStack_430 = unaff_x28;
        }
        else {
          lVar19 = ((long)plStack_430 - (long)plStack_438) / 0x28;
          uVar14 = lVar19 + 1;
          if (0x666666666666666 < uVar14) {
            func_0x00010776cc88();
            goto code_r0x00010776c828;
          }
          uVar3 = ((long)plStack_428 - (long)plStack_438) / 0x28;
          uVar15 = uVar3 * 2;
          if (uVar15 < uVar14 || uVar15 - uVar14 == 0) {
            uVar15 = uVar14;
          }
          uVar7 = uVar3 == 0x333333333333333;
          if (0x333333333333332 < uVar3) {
            uVar15 = 0x666666666666666;
          }
          func_0x00010776cc94(&plStack_310,uVar15,lVar19,&plStack_428);
          plStack_300[1] = 0;
          plStack_300[2] = 0;
          *plStack_300 = 0;
          func_0x00010776db58();
          func_0x00010776de5c();
          plVar22 = (long *)(extraout_x8_03 + extraout_x9_02 * 0x28);
          _memcpy(plVar22);
          plVar10 = plStack_438;
          plStack_428 = (long *)CONCAT71(uStack_2f7,cStack_2f8);
          plStack_438 = plVar22;
          plStack_430 = unaff_x28;
          func_0x00010776dcd0(plVar10);
          plStack_430 = unaff_x28;
        }
      }
      func_0x0001072c95d0(&plStack_2c0);
      func_0x00010776df48();
      func_0x0001072f5f6c(alStack_330);
      if (bVar5 == 0) goto code_r0x00010776c0b4;
      uVar23 = uVar23 + 2;
    }
    func_0x00010776dfd8();
    (*extraout_x9_03)(&plStack_310,puVar18,1);
    uStack_478 = 6;
    uStack_470 = 1;
    uVar23 = (ulong)_uStack_380 >> 0x28;
    uStack_380._0_4_ = (uint)_uStack_380 & 0xffffff00;
    uStack_380 = (uint5)(uint)uStack_380;
    _uStack_380 = CONCAT35((int3)uVar23,uStack_380);
    FUN_10777067c(alStack_330,plVar12,&plStack_310,1,param_5,auStack_480,&uStack_380);
    func_0x0001072c9854(auStack_480);
    func_0x00010776ddc0();
    if ((bStack_320 & 1) == 0) {
      func_0x00010776dc7c();
    }
    else {
      func_0x00010776dfd8();
      (*extraout_x9_04)(&plStack_310,puVar18,(long)puVar20 + -1);
      func_0x00010756f360(auStack_4b8,auStack_420);
      uVar23 = (ulong)_uStack_380 >> 0x28;
      uStack_380._0_4_ = (uint)_uStack_380 & 0xffffff00;
      uStack_380 = (uint5)(uint)uStack_380;
      _uStack_380 = CONCAT35((int3)uVar23,uStack_380);
      FUN_10777067c(auStack_4a0,plVar12,&plStack_310,(long)puVar20 + -1,param_5,auStack_4b8,
                    &uStack_380);
      func_0x0001072c9854(auStack_4b8);
      func_0x00010776ddc0();
      if ((bStack_490 & 1) == 0) {
        func_0x00010776dc7c();
      }
      else {
        pplStack_308 = (long **)CONCAT44(pplStack_308._4_4_,6);
        plVar10 = (long *)(alStack_330[0] + 0x10);
        func_0x0001074d1ed0(plVar10,&plStack_310);
        func_0x0001072c9884(&plStack_310);
        if ((int)plVar10 != 0) {
          func_0x00010756f724(&plStack_310,auStack_408,alStack_330[0] + 0x10);
          uVar7 = cStack_2f8 == '\x01';
          if ((bool)uVar7) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_4d0,&plStack_310);
            func_0x00010756a69c(plVar12,auStack_4d0,1);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4d0);
            func_0x00010776dc7c();
            func_0x00010776df68();
            goto code_r0x00010776c700;
          }
          func_0x00010776df68();
        }
        if (iStack_400 == 0) {
          func_0x00010776dbd8();
        }
        else {
          if (iStack_400 == 1) {
            func_0x00010776debc();
            plVar22 = plStack_438;
            alStack_330[0] = 0;
            alStack_330[1] = 0;
            plStack_2c0 = plStack_438;
            func_0x00010776daac();
            func_0x00010776e054((long)plVar10 - (long)plVar22);
            func_0x000107546cd0(&uStack_380);
            lVar19 = 2;
            for (; uVar7 = plVar22 == plVar10, !(bool)uVar7; plVar22 = plVar22 + 5) {
              lStack_338 = plVar22[4];
              lStack_340 = plVar22[3];
              if (plVar22[4] != 0) {
                do {
                  func_0x00010776da3c();
                } while (extraout_w10 != 0);
              }
              lVar2 = plVar22[1];
              for (lVar21 = *plVar22; lVar4 = lStack_338, lVar27 = lStack_340, puVar24 = puStack_378
                  , lVar21 != lVar2; lVar21 = lVar21 + 0x48) {
                if (*(int *)(lVar21 + 0x40) != 0) {
                  func_0x00010563ab98();
                  goto code_r0x00010776c828;
                }
                puVar20 = *(uint5 **)(lVar21 + 8);
                if (puStack_378 != (uint5 *)0x0) {
                  uVar23 = 0;
                  if (puStack_378 != (uint5 *)0x0) {
                    uVar23 = (ulong)puVar20 / (ulong)puStack_378;
                  }
                  if (lStack_368 != 0) {
                    uVar14 = (long)puStack_378 - 1;
                    if (((ulong)puStack_378 & uVar14) == 0) {
                      puVar16 = (uint5 *)(uVar14 & (ulong)puVar20);
                    }
                    else {
                      puVar16 = puVar20;
                      if (puStack_378 <= puVar20) {
                        puVar16 = (uint5 *)((long)puVar20 - uVar23 * (long)puStack_378);
                      }
                    }
                    plVar17 = *(long **)(_uStack_380 + (long)puVar16 * 8);
                    if (plVar17 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar17 = (long *)*plVar17;
                          if (plVar17 == (long *)0x0) goto code_r0x00010776c22c;
                          puVar18 = (uint5 *)plVar17[1];
                          if (puVar18 != puVar20) break;
                          uVar7 = (uint5 *)plVar17[2] == puVar20;
                          if ((bool)uVar7) {
                            func_0x00010776dd38();
                            func_0x00010756a69c(plVar12,&plStack_310,lVar19);
                            func_0x00010776dbd0();
                            func_0x00010776dc7c();
                            func_0x00010776daa4();
                            goto code_r0x00010776c6cc;
                          }
                        }
                        if (((ulong)puStack_378 & uVar14) == 0) {
                          puVar18 = (uint5 *)((ulong)puVar18 & uVar14);
                        }
                        else if (puStack_378 <= puVar18) {
                          uVar15 = 0;
                          if (puStack_378 != (uint5 *)0x0) {
                            uVar15 = (ulong)puVar18 / (ulong)puStack_378;
                          }
                          puVar18 = (uint5 *)((long)puVar18 - uVar15 * (long)puStack_378);
                        }
                      } while (puVar18 == puVar16);
                    }
                  }
code_r0x00010776c22c:
                  uVar14 = (long)puStack_378 - 1;
                  if (((ulong)puStack_378 & uVar14) == 0) {
                    puVar16 = (uint5 *)(uVar14 & (ulong)puVar20);
                  }
                  else {
                    puVar16 = puVar20;
                    if (puStack_378 <= puVar20) {
                      puVar16 = (uint5 *)((long)puVar20 - uVar23 * (long)puStack_378);
                    }
                  }
                  plVar17 = *(long **)(_uStack_380 + (long)puVar16 * 8);
                  if (plVar17 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar17 = (long *)*plVar17;
                        if (plVar17 == (long *)0x0) goto code_r0x00010776c2b0;
                        puVar18 = (uint5 *)plVar17[1];
                        if (puVar18 != puVar20) break;
                        if ((uint5 *)plVar17[2] == puVar20) goto code_r0x00010776c3b0;
                      }
                      if (((ulong)puStack_378 & uVar14) == 0) {
                        puVar18 = (uint5 *)((ulong)puVar18 & uVar14);
                      }
                      else if (puStack_378 <= puVar18) {
                        uVar23 = 0;
                        if (puStack_378 != (uint5 *)0x0) {
                          uVar23 = (ulong)puVar18 / (ulong)puStack_378;
                        }
                        puVar18 = (uint5 *)((long)puVar18 - uVar23 * (long)puStack_378);
                      }
                    } while (puVar18 == puVar16);
                  }
                }
code_r0x00010776c2b0:
                plVar17 = (long *)0x28;
                __Znwm();
                plStack_300 = (long *)0x1;
                *plVar17 = 0;
                plVar17[1] = (long)puVar20;
                plVar17[2] = (long)puVar20;
                plVar17[4] = lVar4;
                plVar17[3] = lVar27;
                plStack_310 = plVar17;
                pplStack_308 = &plStack_370;
                if (lVar4 != 0) {
                  do {
                    func_0x00010776da3c();
                  } while (extraout_w10_00 != 0);
                }
                fVar26 = (float)lVar27;
                func_0x00010776dff8();
                if ((puVar24 == (uint5 *)0x0) || (param_3 * (float)puVar24 < fVar26)) {
                  func_0x00010776dfe4();
                  func_0x00010776de2c();
                  func_0x000107546cd0(&uStack_380);
                  puVar24 = puStack_378;
                  if (((ulong)puStack_378 & (long)puStack_378 - 1U) == 0) {
                    puVar16 = (uint5 *)((long)puStack_378 - 1U & (ulong)puVar20);
                  }
                  else {
                    puVar16 = puVar20;
                    if (puStack_378 <= puVar20) {
                      uVar23 = 0;
                      if (puStack_378 != (uint5 *)0x0) {
                        uVar23 = (ulong)puVar20 / (ulong)puStack_378;
                      }
                      puVar16 = (uint5 *)((long)puVar20 - uVar23 * (long)puStack_378);
                    }
                  }
                }
                plVar17 = *(long **)(_uStack_380 + (long)puVar16 * 8);
                if (plVar17 == (long *)0x0) {
                  *plStack_310 = (long)plStack_370;
                  plStack_370 = plStack_310;
                  *(long ***)(_uStack_380 + (long)puVar16 * 8) = &plStack_370;
                  if (*plStack_310 != 0) {
                    puVar20 = *(uint5 **)(*plStack_310 + 8);
                    if (((ulong)puVar24 & (long)puVar24 - 1U) == 0) {
                      puVar20 = (uint5 *)((ulong)puVar20 & (long)puVar24 - 1U);
                    }
                    else if (puVar24 <= puVar20) {
                      uVar23 = 0;
                      if (puVar24 != (uint5 *)0x0) {
                        uVar23 = (ulong)puVar20 / (ulong)puVar24;
                      }
                      puVar20 = (uint5 *)((long)puVar20 - uVar23 * (long)puVar24);
                    }
                    *(long **)(_uStack_380 + (long)puVar20 * 8) = plStack_310;
                  }
                }
                else {
                  *plStack_310 = *plVar17;
                  *plVar17 = (long)plStack_310;
                }
                func_0x00010776de14();
                func_0x000107546e6c();
code_r0x00010776c3b0:
              }
              func_0x00010776daa4();
              lVar19 = lVar19 + 2;
            }
            __Znwm(0x90);
            func_0x00010776dde8();
            func_0x000107546edc();
            uStack_348 = uStack_3b8;
            uStack_350 = uStack_3c0;
            uStack_3c0 = 0;
            uStack_3b8 = 0;
            func_0x00010776de44();
            func_0x000107546f28();
            plStack_388 = plVar12;
            func_0x00010776dcb4();
            func_0x0001075470f4(&plStack_310);
            func_0x00010776daa4();
            puVar11 = extraout_x8_00;
            func_0x000107547048(extraout_x8_00,&plStack_388);
            puVar11[0x10] = 1;
            func_0x00010776dfcc();
            if (puVar11 != (undefined1 *)0x0) {
              func_0x00010776da84();
            }
code_r0x00010776c6cc:
            func_0x0001075470f4(&uStack_380);
          }
          else {
            uVar7 = true;
            if ((iStack_400 == 2) || (uVar7 = iStack_400 == 3, !(bool)uVar7)) {
              *extraout_x8_00 = 0;
              extraout_x8_00[0x10] = 0;
              goto code_r0x00010776c700;
            }
            func_0x00010776debc();
            plVar22 = plStack_438;
            alStack_330[0] = 0;
            alStack_330[1] = 0;
            plStack_2c0 = plStack_438;
            func_0x00010776daac();
            func_0x00010776e054((long)plVar10 - (long)plVar22);
            puVar16 = &uStack_380;
            func_0x0001075473c0();
            lVar19 = 2;
            for (; uVar7 = plVar22 == plVar10, !(bool)uVar7; plVar22 = plVar22 + 5) {
              lStack_338 = plVar22[4];
              lStack_340 = plVar22[3];
              if (plVar22[4] != 0) {
                do {
                  func_0x00010776da3c();
                } while (extraout_w10_01 != 0);
              }
              lVar2 = plVar22[1];
              for (lVar21 = *plVar22; puVar20 = puStack_378, lVar21 != lVar2; lVar21 = lVar21 + 0x48
                  ) {
                if (*(int *)(lVar21 + 0x40) != 1) {
                  func_0x00010563ab98();
                  goto code_r0x00010776c828;
                }
                puVar18 = puVar16;
                if ((puStack_378 != (uint5 *)0x0) && (lStack_368 != 0)) {
                  func_0x00010776ddd8();
                  puVar24 = (uint5 *)((long)puVar20 + -1);
                  if (((ulong)puVar20 & (ulong)puVar24) == 0) {
                    puVar25 = (uint5 *)((ulong)puVar16 & (ulong)puVar24);
                  }
                  else {
                    puVar25 = puVar16;
                    if (puVar20 <= puVar16) {
                      uVar23 = 0;
                      if (puVar20 != (uint5 *)0x0) {
                        uVar23 = (ulong)puVar16 / (ulong)puVar20;
                      }
                      puVar25 = (uint5 *)((long)puVar16 - uVar23 * (long)puVar20);
                    }
                  }
                  plVar17 = *(long **)(_uStack_380 + (long)puVar25 * 8);
                  puVar18 = puVar16;
                  if (plVar17 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar17 = (long *)*plVar17;
                        if (plVar17 == (long *)0x0) goto code_r0x00010776c4f0;
                        puVar13 = (uint5 *)plVar17[1];
                        uVar7 = puVar13 == puVar16;
                        if (!(bool)uVar7) break;
                        func_0x00010776df5c();
                        if ((int)puVar18 != 0) {
                          func_0x00010776dd38();
                          func_0x00010756a69c(plVar12,&plStack_310,lVar19);
                          func_0x00010776dbd0();
                          func_0x00010776dc7c();
                          func_0x00010776daa4();
                          goto code_r0x00010776c738;
                        }
                      }
                      if (((ulong)puVar20 & (ulong)puVar24) == 0) {
                        puVar13 = (uint5 *)((ulong)puVar13 & (ulong)puVar24);
                      }
                      else if (puVar20 <= puVar13) {
                        uVar23 = 0;
                        if (puVar20 != (uint5 *)0x0) {
                          uVar23 = (ulong)puVar13 / (ulong)puVar20;
                        }
                        puVar13 = (uint5 *)((long)puVar13 - uVar23 * (long)puVar20);
                      }
                    } while (puVar13 == puVar25);
                  }
                }
code_r0x00010776c4f0:
                func_0x00010776ddd8();
                puVar20 = puStack_378;
                if (puStack_378 != (uint5 *)0x0) {
                  uVar23 = (long)puStack_378 - 1;
                  if (((ulong)puStack_378 & uVar23) == 0) {
                    puVar24 = (uint5 *)(uVar23 & (ulong)puVar18);
                  }
                  else {
                    puVar24 = puVar18;
                    if (puStack_378 <= puVar18) {
                      uVar14 = 0;
                      if (puStack_378 != (uint5 *)0x0) {
                        uVar14 = (ulong)puVar18 / (ulong)puStack_378;
                      }
                      puVar24 = (uint5 *)((long)puVar18 - uVar14 * (long)puStack_378);
                    }
                  }
                  plVar17 = *(long **)(_uStack_380 + (long)puVar24 * 8);
                  puVar16 = puVar18;
                  if (plVar17 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar17 = (long *)*plVar17;
                        if (plVar17 == (long *)0x0) goto code_r0x00010776c57c;
                        puVar25 = (uint5 *)plVar17[1];
                        if (puVar25 != puVar18) break;
                        func_0x00010776df5c();
                        if (((ulong)puVar16 & 1) != 0) goto code_r0x00010776c68c;
                      }
                      if (((ulong)puVar20 & uVar23) == 0) {
                        puVar25 = (uint5 *)((ulong)puVar25 & uVar23);
                      }
                      else if (puVar20 <= puVar25) {
                        uVar14 = 0;
                        if (puVar20 != (uint5 *)0x0) {
                          uVar14 = (ulong)puVar25 / (ulong)puVar20;
                        }
                        puVar25 = (uint5 *)((long)puVar25 - uVar14 * (long)puVar20);
                      }
                    } while (puVar25 == puVar24);
                  }
                }
code_r0x00010776c57c:
                plVar17 = (long *)0x58;
                __Znwm();
                plStack_300 = (long *)0x1;
                puVar16 = (uint5 *)(plVar17 + 2);
                *plVar17 = 0;
                plVar17[1] = (long)puVar18;
                plStack_310 = plVar17;
                pplStack_308 = &plStack_370;
                func_0x000104c2fe00(puVar16,lVar21 + 8);
                plVar17[10] = lStack_338;
                plVar17[9] = lStack_340;
                lVar27 = lStack_340;
                if (lStack_338 != 0) {
                  do {
                    func_0x00010776da3c();
                  } while (extraout_w10_02 != 0);
                }
                fVar26 = (float)lVar27;
                func_0x00010776dff8();
                if ((puVar20 == (uint5 *)0x0) || (param_3 * (float)puVar20 < fVar26)) {
                  func_0x00010776dfe4();
                  func_0x00010776de2c();
                  puVar16 = &uStack_380;
                  func_0x0001075473c0();
                  puVar20 = puStack_378;
                  if (((ulong)puStack_378 & (long)puStack_378 - 1U) == 0) {
                    puVar24 = (uint5 *)((long)puStack_378 - 1U & (ulong)puVar18);
                  }
                  else {
                    puVar24 = puVar18;
                    if (puStack_378 <= puVar18) {
                      uVar23 = 0;
                      if (puStack_378 != (uint5 *)0x0) {
                        uVar23 = (ulong)puVar18 / (ulong)puStack_378;
                      }
                      puVar24 = (uint5 *)((long)puVar18 - uVar23 * (long)puStack_378);
                    }
                  }
                }
                plVar17 = *(long **)(_uStack_380 + (long)puVar24 * 8);
                if (plVar17 == (long *)0x0) {
                  *plStack_310 = (long)plStack_370;
                  plStack_370 = plStack_310;
                  *(long ***)(_uStack_380 + (long)puVar24 * 8) = &plStack_370;
                  if (*plStack_310 != 0) {
                    puVar18 = *(uint5 **)(*plStack_310 + 8);
                    if (((ulong)puVar20 & (long)puVar20 - 1U) == 0) {
                      puVar18 = (uint5 *)((ulong)puVar18 & (long)puVar20 - 1U);
                    }
                    else if (puVar20 <= puVar18) {
                      uVar23 = 0;
                      if (puVar20 != (uint5 *)0x0) {
                        uVar23 = (ulong)puVar18 / (ulong)puVar20;
                      }
                      puVar18 = (uint5 *)((long)puVar18 - uVar23 * (long)puVar20);
                    }
                    *(long **)(_uStack_380 + (long)puVar18 * 8) = plStack_310;
                  }
                }
                else {
                  *plStack_310 = *plVar17;
                  *plVar17 = (long)plStack_310;
                }
                func_0x00010776de14();
                func_0x00010754755c();
code_r0x00010776c68c:
              }
              func_0x00010776daa4();
              lVar19 = lVar19 + 2;
            }
            __Znwm(0x90);
            func_0x00010776dde8();
            func_0x0001075475cc();
            uStack_348 = uStack_3b8;
            uStack_350 = uStack_3c0;
            uStack_3c0 = 0;
            uStack_3b8 = 0;
            func_0x00010776de44();
            func_0x000107547618();
            plStack_388 = plVar12;
            func_0x00010776dcb4();
            func_0x0001075477d8(&plStack_310);
            func_0x00010776daa4();
            puVar11 = extraout_x8_00;
            func_0x00010754772c(extraout_x8_00,&plStack_388);
            extraout_x8_00[0x10] = 1;
            func_0x00010776dfcc();
            if (puVar11 != (undefined1 *)0x0) {
              func_0x00010776da84();
            }
code_r0x00010776c738:
            func_0x0001075477d8(&uStack_380);
          }
          func_0x0001072c9b9c(&uStack_3c0);
          func_0x00010776d06c(&plStack_2c0);
          func_0x0001072c9b9c(auStack_3b0);
          func_0x0001072c9884(auStack_398);
        }
      }
code_r0x00010776c700:
      func_0x0001072c95d0(auStack_4a0);
    }
    func_0x0001072c95d0(alStack_330);
code_r0x00010776c0b4:
    func_0x00010776d06c(&plStack_438);
    func_0x0001072c9854(auStack_420);
    func_0x0001072c9854(auStack_408);
  }
  func_0x00010776d950(uStack_2a8);
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



/* Entry: 10776cc40; end: 10776cc57;  */

void FUN_10776cc40(void)

{
  return;
}



/* Entry: 10776ce80; end: 10776cecb;  */

long * FUN_10776ce80(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -0x48;
    func_0x00010776cbf4(lVar1 + -0x40);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10776d1d8; end: 10776d20f;  */

void FUN_10776d1d8(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10776d1d8(*param_1);
    FUN_10776d1d8(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10776d3f4; end: 10776d3ff;  */

undefined ** FUN_10776d3f4(void)

{
  return &PTR_DAT_1109d5ec0;
}



/* Entry: 10776d4f8; end: 10776d517;  */

void FUN_10776d4f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d5f60;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10776d6f0; end: 10776d703;  */

undefined ** FUN_10776d6f0(void)

{
  return &PTR_DAT_1109d6040;
}



/* Entry: 10776d7f8; end: 10776d803;  */

undefined ** FUN_10776d7f8(void)

{
  return &PTR_DAT_1109d6140;
}



/* Entry: 10776e418; end: 10776e567;  */

long * FUN_10776e418(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = param_1;
  func_0x00010776f4dc(param_1,param_1[9]);
  if (param_1[0xb] != 0) {
    func_0x00010776f4dc();
  }
  if (param_1[0xd] != 0) {
    func_0x00010776f4dc();
  }
  if (param_1[0xf] != 0) {
    func_0x00010776f4dc();
  }
  if (param_1[0x11] != 0) {
    plVar1 = *(long **)(param_2 + 0x18);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))();
      return plVar1;
    }
    func_0x000104bfeb48();
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
  return plVar1;
}



/* Entry: 10776f390; end: 10776f397;  */

void FUN_10776f390(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010776e07c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10776faa0; end: 10776fbcf;  */

undefined *** FUN_10776faa0(undefined ***param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  char *pcVar7;
  int iVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  long unaff_x21;
  undefined ***unaff_x22;
  undefined ***pppuVar9;
  long lVar10;
  undefined1 auStack_110 [16];
  undefined **ppuStack_100;
  undefined1 *puStack_f8;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 uStack_81;
  undefined **ppuStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  undefined ***pppuStack_68;
  
  pppuVar4 = param_1;
  func_0x00010777006c();
  iVar8 = *(int *)(pppuVar4 + 1);
  pppuVar9 = unaff_x22;
  if (iVar8 == 1) {
    lVar10 = 0x30;
    uVar2 = 1;
    unaff_x21 = param_2;
    do {
      if (lVar10 == 0) {
        iVar8 = *(int *)(param_1 + 1);
        pppuVar9 = unaff_x22;
        goto LAB_10776fb14;
      }
      func_0x00010777013c();
      unaff_x22 = &ppuStack_80;
      func_0x000107283140(unaff_x22,unaff_x21);
      pppuVar4 = unaff_x22;
      func_0x0001077700b8();
      unaff_x21 = unaff_x21 + 0x18;
      lVar10 = lVar10 + -0x18;
    } while (((ulong)unaff_x22 & 1) == 0);
LAB_10776fb40:
    pppuVar9 = unaff_x22;
    uVar3 = 0;
  }
  else {
LAB_10776fb14:
    uVar2 = iVar8 == 0x25;
    if ((bool)uVar2) {
      unaff_x22 = (undefined ***)0x30;
      unaff_x21 = param_2;
      do {
        pppuVar9 = (undefined ***)0x0;
        if (unaff_x22 == (undefined ***)0x0) goto LAB_10776fb48;
        pppuVar4 = param_1;
        func_0x0001077230d0(param_1,unaff_x21);
        unaff_x21 = unaff_x21 + 0x18;
        unaff_x22 = unaff_x22 + -3;
      } while (((ulong)pppuVar4 & 1) == 0);
      goto LAB_10776fb40;
    }
LAB_10776fb48:
    uStack_81 = 1;
    puStack_78 = &uStack_81;
    ppuStack_80 = &PTR_DAT_1109d6358;
    pppuStack_68 = &ppuStack_80;
    lStack_70 = param_2;
    func_0x0001077700d8((*param_1)[2]);
    func_0x0001077700c0();
    uVar3 = uStack_81;
  }
  func_0x000107770090(uVar3);
  if ((bool)uVar2) {
    return (undefined ***)(ulong)(extraout_w8 & 1);
  }
  ___stack_chk_fail();
  pppuVar5 = pppuVar4;
  func_0x0001077700c0();
  func_0x0001077700b0();
  puStack_98 = &UNK_10776fbd0;
  pppuVar6 = pppuVar5;
  pppuStack_c0 = pppuVar9;
  lStack_b8 = unaff_x21;
  lStack_b0 = param_2;
  pppuStack_a8 = pppuVar4;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010777006c();
  uVar1 = *(int *)(pppuVar6 + 1) - 1U >> 2 | (*(int *)(pppuVar6 + 1) - 1U) * 0x40000000;
  uVar3 = uVar1 == 9;
  uVar2 = 0;
  switch(uVar1) {
  case 0:
    func_0x00010777013c();
    pcVar7 = "error";
    pppuVar6 = &ppuStack_100;
    func_0x000107278484(pppuVar6,"error");
    if (((ulong)pppuVar6 & 1) != 0) {
code_r0x00010776fc40:
      func_0x0001077700b8();
      uVar2 = 0;
      goto code_r0x00010776fcc0;
    }
    pppuVar6 = pppuVar5;
    FUN_10776fdfc();
    if (((ulong)pppuVar6 & 1) == 0) {
      pppuVar6 = &ppuStack_100;
      func_0x000107264c5c();
      func_0x00010772cf1c(pppuVar5);
      func_0x00010772cd44(pppuVar6,pcVar7,auStack_110);
      if (((ulong)pppuVar6 & 1) == 0) goto code_r0x00010776fc40;
    }
    func_0x0001077700b8();
    break;
  case 2:
  case 5:
  case 9:
    goto code_r0x00010776fcc0;
  }
  auStack_110[0] = 1;
  ppuStack_100 = &PTR_DAT_1109d6258;
  pppuStack_e8 = &ppuStack_100;
  puStack_f8 = auStack_110;
  func_0x0001077700d8((*pppuVar5)[2]);
  func_0x0001077700c0();
  uVar2 = auStack_110[0];
code_r0x00010776fcc0:
  func_0x000107770090(uVar2);
  if ((bool)uVar3) {
    return (undefined ***)(ulong)(extraout_w8_00 & 1);
  }
  ___stack_chk_fail();
  func_0x0001077700b8();
  func_0x0001077700b0();
  return pppuVar6;
}



/* Entry: 10776fdfc; end: 10776fea3;  */

long * FUN_10776fdfc(long *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long *plVar3;
  long alStack_60 [7];
  undefined8 uStack_28;
  
  plVar2 = alStack_60;
  func_0x00010777006c();
  uVar1 = (int)param_1[1] == 1;
  uStack_28 = extraout_x8;
  if ((bool)uVar1) {
    (**(code **)(*param_1 + 0x40))(alStack_60);
    func_0x00010777010c();
    if (((ulong)param_1 & 1) == 0) {
      func_0x00010777010c();
      plVar3 = param_1;
    }
    else {
      plVar3 = (long *)0x1;
    }
    func_0x000104c2f714(alStack_60);
    param_1 = plVar2;
  }
  else {
    plVar3 = (long *)0x0;
  }
  func_0x000107770158(uStack_28);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x0001077700b0();
  return param_1;
}



/* Entry: 10776ffac; end: 10776ffd3;  */

void FUN_10776ffac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001077700e0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109d62d8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10777067c; end: 1077707e7;  */

void FUN_10777067c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [81];
  undefined1 uStack_57;
  
  func_0x000100456794(auStack_f0,param_1,&UNK_10f426c98);
  func_0x000107878fec(auStack_108,param_3);
  func_0x00010533a9c0(auStack_d8,auStack_f0,auStack_108);
  func_0x00010048a6c8(auStack_c0,auStack_d8,&UNK_10f426c9a);
  uStack_118 = *(undefined8 *)(param_1 + 0x48);
  uStack_120 = *(undefined8 *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10 != 0);
  }
  func_0x000107771650(auStack_138,param_5);
  uStack_148 = *(undefined8 *)(param_1 + 0x38);
  uStack_150 = *(undefined8 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107771c28(auStack_a8,auStack_c0,&uStack_120,auStack_138,&uStack_150);
  func_0x0001072c9830(&uStack_150);
  func_0x000107771c44();
  func_0x000107771c14();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  uStack_57 = 0;
  func_0x000107771b68(auStack_a8);
  func_0x000107771bbc();
  return;
}



/* Entry: 107771558; end: 10777164f;  */

void FUN_107771558(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = (*(long **)(param_2 + 0x40))[1];
  lVar3 = **(long **)(param_2 + 0x40) + 0x18;
  do {
    if (lVar3 + -0x18 == lVar2) {
      return;
    }
    uVar1 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    if (uVar1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&UNK_10f426dca);
    }
    if (*(char *)(lVar3 + 0x17) < '\0') {
      if (*(long *)(lVar3 + 8) != 0) goto LAB_1077715e0;
    }
    else if (*(char *)(lVar3 + 0x17) != '\0') {
LAB_1077715e0:
      func_0x000100456794(auStack_58,lVar3,&UNK_10f426dcc);
      func_0x0001004c3ca0(param_1,auStack_58);
      func_0x000107771c4c();
    }
    func_0x0001004c3ca0(param_1,lVar3 + -0x18);
    lVar3 = lVar3 + 0x30;
  } while( true );
}



/* Entry: 107771838; end: 10777186b;  */

void FUN_107771838(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_1109d67f8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107771a50; end: 107771a93;  */

undefined8 * FUN_107771a50(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d6878;
  func_0x000107771ab8(param_1 + 3);
  return param_1;
}



/* Entry: 107771fd8; end: 107772033;  */

void FUN_107771fd8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  func_0x00010745df58(param_2,*(undefined8 *)(param_1 + 0x48));
  lVar2 = *(long *)(param_1 + 0x58);
  while (lVar2 != param_1 + 0x60) {
    puVar1 = (undefined8 *)(lVar2 + 0x28);
    lVar2 = param_2;
    func_0x00010745df58(param_2,*puVar1);
    func_0x000107772c20();
  }
  return;
}



/* Entry: 107772b2c; end: 107772b2f;  */

undefined8 * FUN_107772b2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d68c8;
  func_0x000107545fd8(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107773278; end: 1077733af;  */

void FUN_107773278(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 uVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x9;
  code *extraout_x9_00;
  long *plVar10;
  long lVar11;
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [16];
  undefined1 uStack_478;
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [16];
  undefined1 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  byte bStack_400;
  undefined1 auStack_3f8 [24];
  long lStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3b7;
  byte bStack_3b6;
  byte bStack_3b5;
  byte bStack_3b4;
  byte bStack_3b3;
  byte bStack_3b2;
  undefined1 uStack_3b1;
  undefined1 auStack_3b0 [16];
  undefined1 auStack_3a0 [4];
  undefined1 uStack_39c;
  long lStack_390;
  undefined8 uStack_388;
  byte bStack_380;
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  long lStack_340;
  undefined1 auStack_338 [136];
  char cStack_2b0;
  undefined1 auStack_2a8 [56];
  byte bStack_270;
  undefined1 auStack_268 [4];
  undefined1 uStack_264;
  byte bStack_230;
  undefined8 uStack_228;
  long alStack_1d0 [14];
  undefined1 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [24];
  undefined8 *puStack_118;
  undefined1 auStack_110 [56];
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [120];
  undefined8 uStack_48;
  
  lVar11 = param_1;
  func_0x0001077740c4();
  uStack_48 = extraout_x8;
  (**(code **)(**(long **)(lVar11 + 0x48) + 0x48))();
  uVar2 = *(char *)(param_3 + 400) == '\x01';
  if ((bool)uVar2) {
    lVar11 = param_3;
    func_0x00010756ec34();
    auStack_110[0] = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puVar3 = (undefined8 *)0x28;
    __Znwm();
    *puVar3 = &PTR_DAT_1109d6a58;
    puVar3[1] = param_1;
    puVar3[2] = param_2;
    puVar3[3] = param_3;
    puVar3[4] = param_4;
    param_4 = auStack_c8;
    puStack_118 = puVar3;
    func_0x000107772ce8(auStack_c8,param_1,lVar11,auStack_110,auStack_130);
    func_0x00010727f7f8(auStack_c0);
    func_0x000107758f48(auStack_130);
    func_0x00010724b3d8(auStack_110);
    func_0x0001077740b0(uStack_48);
    if ((bool)uVar2) {
      return;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 200) + 0x48);
    func_0x0001077740b0(uStack_48);
    if ((bool)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010777338c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  uVar2 = 0;
  ___stack_chk_fail();
  func_0x000107774138();
  func_0x000107758f48();
  func_0x00010724b3d8(auStack_110);
  func_0x0001077740e0();
  plVar7 = alStack_1d0;
  plVar4 = alStack_1d0;
  puStack_138 = &DAT_1077733b0;
  lStack_150 = param_1;
  puStack_148 = param_4;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x0001077740c4(extraout_x8_00);
  alStack_1d0[0]._0_1_ = 0;
  uStack_160 = 0;
  plVar8 = (long *)0x1;
  uStack_158 = extraout_x8_01;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x0001077740b0(uStack_158);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107774138();
  func_0x000107296ad0();
  func_0x0001077740e0();
  func_0x0001077740c4();
  plVar10 = plVar4 + 1;
  plVar5 = plVar10;
  uStack_228 = extraout_x8_03;
  (**(code **)(*plVar4 + 0x20))();
  uVar2 = plVar5 == (long *)0x5;
  if ((bool)uVar2) {
    func_0x000107774124();
    (*extraout_x9)(&lStack_340,plVar10,1);
    auStack_428[0] = 0;
    uStack_418 = 0;
    auStack_268[0] = 0;
    uStack_264 = 0;
    FUN_10777067c(&lStack_410,plVar7,&lStack_340,1,plVar8,auStack_428,auStack_268);
    func_0x0001072c9854(auStack_428);
    func_0x000107774104();
    if ((bStack_400 & 1) == 0) {
      func_0x0001077741cc();
    }
    else {
      func_0x000107774124();
      func_0x000107774170(&lStack_340);
      (**(code **)(lStack_340 + 0x68))(auStack_268,auStack_338);
      func_0x000107774104();
      if ((bStack_230 & 1) == 0) {
        func_0x000107774124();
        func_0x000107774170(auStack_370);
        func_0x00010754c3ec(auStack_2a8,auStack_370);
        func_0x0001004c3cd0(&lStack_340,&UNK_10f4257d9,auStack_2a8);
        func_0x00010048a6c8(auStack_440,&lStack_340,&UNK_10f417b93);
        func_0x00010756a69c(plVar7,auStack_440,2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_440);
        func_0x0001077740e8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
        func_0x000107774198();
        func_0x0001077741cc();
      }
      else {
        func_0x000107774124();
        func_0x000107774164(&lStack_340);
        (**(code **)(lStack_340 + 0x68))(auStack_2a8,auStack_338);
        func_0x000107774104();
        if ((bStack_270 & 1) == 0) {
          func_0x000107774124();
          func_0x000107774164(&lStack_390);
          func_0x00010754c3ec(auStack_370,&lStack_390);
          func_0x0001004c3cd0(&lStack_340,&UNK_10f4270d7,auStack_370);
          func_0x00010048a6c8(auStack_458,&lStack_340,&UNK_10f417b93);
          func_0x00010756a69c(plVar7,auStack_458,3);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_458);
          func_0x0001077740e8();
          func_0x0001077741a0();
          func_0x0001072f5f6c(&lStack_390);
          func_0x0001077741cc();
        }
        else {
          func_0x00010724ef84(auStack_370,auStack_268);
          func_0x00010724ef84(auStack_358,auStack_2a8);
          func_0x0001000e3098(auStack_470,auStack_370,2);
          func_0x000107754984(&lStack_340,plVar8,auStack_470);
          func_0x0001000e30f4(auStack_470);
          lVar11 = 0x18;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      (auStack_370 + lVar11);
            lVar11 = lVar11 + -0x18;
          } while (lVar11 != -0x18);
          func_0x000107774124();
          (*extraout_x9_00)(auStack_370,plVar10,4);
          uVar2 = cStack_2b0 == '\0';
          plVar4 = &lStack_340;
          if ((bool)uVar2) {
            plVar4 = plVar8;
          }
          auStack_488[0] = 0;
          uStack_478 = 0;
          auStack_3a0[0] = 0;
          uStack_39c = 0;
          FUN_10777067c(&lStack_390,plVar7,auStack_370,4,plVar4,auStack_488,auStack_3a0);
          func_0x0001072c9854(auStack_488);
          func_0x000107774198();
          if ((bStack_380 & 1) == 0) {
            func_0x00010002b838(auStack_4a0,&UNK_10f4258f4);
            func_0x00010756a69c(plVar7,auStack_4a0,4);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4a0);
            uVar9 = 0;
            *(undefined1 *)extraout_x8_02 = 0;
          }
          else {
            if ((bStack_230 != 1) || ((bStack_270 & 1) == 0)) goto code_r0x000107773980;
            puVar3 = (undefined8 *)0xf0;
            __Znwm();
            lVar11 = lStack_390;
            uStack_3c8 = uStack_408;
            lStack_3d0 = lStack_410;
            puVar3[1] = 0;
            puVar3[2] = 0;
            *puVar3 = &PTR_DAT_1109d6ad8;
            lStack_410 = 0;
            uStack_408 = 0;
            uStack_3d8 = uStack_388;
            lStack_3e0 = lStack_390;
            lStack_390 = 0;
            uStack_388 = 0;
            iVar1 = *(int *)(lStack_3d0 + 0x18);
            if (iVar1 == 7) {
              func_0x0001072c9ff4(auStack_3b0,lVar11 + 0x10);
              func_0x0001072f5dec(auStack_370,auStack_3b0);
              puVar6 = auStack_3a0;
              func_0x0001072f6ad4(puVar6,auStack_370);
            }
            else {
              puVar6 = auStack_3a0;
              func_0x0001072c9ff4(puVar6,lStack_3d0 + 0x10);
            }
            func_0x00010785f1f4();
            uStack_3b7 = 0;
            puVar6 = puVar6 + 0x2e0;
            func_0x00010724e2c8(puVar6,&uStack_3b7);
            if ((((ulong)puVar6 & 1) == 0) && (*(char *)(lStack_3d0 + 0x20) == '\x01')) {
              bStack_3b6 = *(byte *)(lStack_3e0 + 0x20);
            }
            else {
              bStack_3b6 = 0;
            }
            bStack_3b6 = bStack_3b6 & 1;
            if (*(char *)(lStack_3d0 + 0x21) == '\x01') {
              bStack_3b5 = *(byte *)(lStack_3e0 + 0x21);
            }
            else {
              bStack_3b5 = 0;
            }
            bStack_3b5 = bStack_3b5 & 1;
            if (*(char *)(lStack_3d0 + 0x22) == '\x01') {
              bStack_3b4 = *(byte *)(lStack_3e0 + 0x22);
            }
            else {
              bStack_3b4 = 0;
            }
            bStack_3b4 = bStack_3b4 & 1;
            if (*(char *)(lStack_3d0 + 0x23) == '\x01') {
              bStack_3b3 = *(byte *)(lStack_3e0 + 0x23);
            }
            else {
              bStack_3b3 = 0;
            }
            bStack_3b3 = bStack_3b3 & 1;
            if (*(char *)(lStack_3d0 + 0x24) == '\x01') {
              bStack_3b2 = *(byte *)(lStack_3e0 + 0x24);
            }
            else {
              bStack_3b2 = 0;
            }
            bStack_3b2 = bStack_3b2 & 1;
            uStack_3b1 = 0;
            func_0x0001072c9f9c(puVar3 + 3,0x1b,auStack_3a0,&bStack_3b6);
            func_0x0001072c9884(auStack_3a0);
            uVar2 = iVar1 == 7;
            if ((bool)uVar2) {
              func_0x0001072c9884(auStack_370);
              func_0x0001072c9884(auStack_3b0);
            }
            puVar3[3] = &PTR_DAT_1109d6950;
            puVar3[0xd] = uStack_3c8;
            puVar3[0xc] = lStack_3d0;
            lStack_3d0 = 0;
            uStack_3c8 = 0;
            func_0x000104c2fe00(puVar3 + 0xe,auStack_268);
            func_0x000104c2fe00(puVar3 + 0x15,auStack_2a8);
            puVar3[0x1d] = uStack_3d8;
            puVar3[0x1c] = lStack_3e0;
            lStack_3e0 = 0;
            uStack_3d8 = 0;
            func_0x0001072c9b9c(&lStack_3e0);
            func_0x0001072c9b9c(&lStack_3d0);
            *extraout_x8_02 = (long)(puVar3 + 3);
            extraout_x8_02[1] = (long)puVar3;
            uVar9 = 1;
          }
          *(undefined1 *)(extraout_x8_02 + 2) = uVar9;
          func_0x0001072c95d0(&lStack_390);
          func_0x00010752b5b8(&lStack_340);
        }
        func_0x00010724b3d8(auStack_2a8);
      }
      func_0x00010724b3d8(auStack_268);
    }
    func_0x0001072c95d0(&lStack_410);
  }
  else {
    func_0x000107878fec(&lStack_340,(undefined1 *)((long)plVar5 + -1));
    func_0x0001004c3cd0(auStack_3f8,&UNK_10f42707b,&lStack_340);
    func_0x00010756a668(plVar7,auStack_3f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f8);
    func_0x0001077740e8();
    func_0x0001077741cc();
  }
  func_0x0001077740b0(uStack_228);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
code_r0x000107773980:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x107773988);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 107773dac; end: 107773dbb;  */

long FUN_107773dac(long param_1)

{
  func_0x000100060934(param_1,"transform");
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 107773f1c; end: 107773f4b;  */

void FUN_107773f1c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_DAT_1109d6a58;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107774780; end: 107774883;  */

long * FUN_107774780(long *param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 auStack_48 [4];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_1;
  lVar5 = param_2;
  func_0x000100061de0();
  lVar6 = *param_1;
  if ((*(long *)(lVar6 + -8) == 0) && (*(char *)(lVar6 + (long)plVar4) != -2)) {
    uVar7 = param_1[2];
    if ((uVar7 < 9) || (uVar7 * 0x19 < (ulong)(param_1[3] << 5))) {
      func_0x000107774898(param_1,uVar7 << 1 | 1);
    }
    else {
      param_3 = auStack_48;
      func_0x00010ae6c914(param_1,&UNK_1109d6b18);
    }
    plVar4 = param_1;
    lVar5 = param_2;
    func_0x000100061de0();
    lVar6 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  bVar3 = *(char *)(lVar6 + (long)plVar4) == -0x80;
  *(ulong *)(lVar6 + -8) = *(long *)(lVar6 + -8) - (ulong)bVar3;
  bVar1 = (byte)param_2 & 0x7f;
  uVar7 = param_1[2];
  *(byte *)(lVar6 + (long)plVar4) = bVar1;
  *(byte *)(lVar6 + (uVar7 & (long)plVar4 - 7U) + (uVar7 & 7)) = bVar1;
  func_0x0001077749b4(uStack_28);
  if (bVar3) {
    return plVar4;
  }
  ___stack_chk_fail();
  uStack_70 = *param_3;
  lStack_68 = param_3[1];
  iVar2 = (int)&uStack_70;
  puStack_58 = &UNK_107774884;
  if (lStack_68 == lVar5) {
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000100067218(&uStack_70,plVar4,lVar5);
    plVar4 = (long *)(ulong)(iVar2 == 0);
  }
  else {
    plVar4 = (long *)0x0;
  }
  return plVar4;
}



/* Entry: 107774da0; end: 107774dcb;  */

long FUN_107774da0(long param_1)

{
  func_0x000104c318bc(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}



/* Entry: 107775204; end: 10777523f;  */

void FUN_107775204(undefined8 param_1,undefined8 param_2)

{
  func_0x00010777d5d0();
  func_0x00010777d700();
  func_0x000107777824(param_1,param_2,2);
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 1077753dc; end: 10777542f;  */

void FUN_1077753dc(void)

{
  func_0x00010777d3b8(1);
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 107775704; end: 10777573b;  */

void FUN_107775704(void)

{
  func_0x00010777d428();
  func_0x000107775720();
  return;
}



/* Entry: 107775b9c; end: 107775e37;  */

void FUN_107775b9c(void)

{
  func_0x00010777d428();
  func_0x000107775bb8();
  return;
}



/* Entry: 10777630c; end: 1077764ff;  */

/* WARNING: Possible PIC construction at 0x0001077764a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077764a4) */

ulong * FUN_10777630c(ulong *param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  undefined8 *******pppppppuVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 *******pppppppuVar11;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  ulong extraout_x8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x9_03;
  long extraout_x9_04;
  undefined1 *extraout_x9_05;
  long extraout_x9_06;
  undefined1 *extraout_x9_07;
  undefined1 uVar12;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  byte *pbVar13;
  undefined1 *puVar14;
  char *pcVar15;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  long lVar16;
  ulong uVar17;
  undefined8 *******unaff_x21;
  undefined8 unaff_x22;
  undefined *puVar18;
  double dVar19;
  ulong *puStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  ulong auStack_d0 [13];
  ulong uStack_68;
  undefined8 ******ppppppuStack_60;
  ulong *puStack_58;
  undefined1 *puStack_50;
  undefined8 ******appppppuStack_48 [2];
  char cStack_31;
  
  pppppppuVar5 = &ppppppuStack_60;
  pppppppuVar11 = &ppppppuStack_60;
  uVar6 = *(int *)(param_2 + 0x68) == 8;
  switch(*(int *)(param_2 + 0x68)) {
  case 0:
    func_0x000107349544(param_1,0);
    func_0x00010734ac10(param_1);
    func_0x000107349658();
    func_0x00010734aa78();
    *extraout_x9 = 0x6e;
    func_0x00010734aa78();
    *extraout_x9_00 = 0x75;
    func_0x00010734aa78();
    *extraout_x9_01 = 0x6c;
    func_0x00010734ab28();
    *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
    *extraout_x10 = extraout_w8;
    return (ulong *)0x1;
  case 1:
    func_0x00010734ab1c(param_1);
    func_0x000107349544();
    puVar8 = unaff_x19;
    func_0x00010734ac10(unaff_x20);
    if ((int)puVar8 == 0) {
      func_0x000107349658();
      func_0x00010734aa78();
      *extraout_x9_03 = 0x66;
      uVar7 = 0x73;
      uVar6 = 0x6c;
      uVar12 = 0x61;
    }
    else {
      func_0x000107349658();
      uVar7 = 0x75;
      uVar6 = 0x72;
      uVar12 = 0x74;
    }
    puVar14 = *(undefined1 **)(*unaff_x19 + 0x18);
    *(undefined1 **)(*unaff_x19 + 0x18) = puVar14 + 1;
    *puVar14 = uVar12;
    puVar14 = *(undefined1 **)(*unaff_x19 + 0x18);
    *(undefined1 **)(*unaff_x19 + 0x18) = puVar14 + 1;
    *puVar14 = uVar6;
    func_0x00010734ab28(uVar7);
    *(undefined8 *)(extraout_x9_04 + 0x18) = extraout_x11_00;
    *extraout_x10_00 = extraout_w8_00;
    func_0x00010734aa78();
    *extraout_x9_05 = 0x65;
    return (ulong *)0x1;
  case 2:
    dVar19 = *(double *)(param_2 + 8);
    if (dVar19 == (double)(long)dVar19) {
      func_0x00010734aad8(param_1);
      func_0x00010734ab1c(unaff_x20,(int)dVar19);
      uVar7 = *unaff_x20;
      func_0x0001073499a4(uVar7,0xb);
      func_0x00010734a2c4(unaff_x19,uVar7);
      func_0x00010734aac4();
      func_0x00010734ac1c();
      return unaff_x19;
    }
    func_0x000107349544(param_1,6);
    if ((ulong)ABS(dVar19) < 0x7ff0000000000000) {
      func_0x00010734ac10();
      func_0x0001073499a4();
      puVar8 = param_1;
      func_0x0001073499e8(dVar19);
      *(undefined1 **)(*unaff_x19 + 0x18) =
           (undefined1 *)((long)puVar8 + (*(long *)(*unaff_x19 + 0x18) - (long)param_1) + -0x19);
    }
    return (ulong *)(ulong)((ulong)ABS(dVar19) < 0x7ff0000000000000);
  case 3:
    param_1 = (ulong *)(param_2 + 8);
    func_0x00010724ef84(appppppuStack_48,param_1);
    func_0x00010777dd24();
    break;
  case 4:
    param_1 = (ulong *)(param_2 + 8);
    func_0x00010785de1c(appppppuStack_48,param_1);
    func_0x00010777dd24();
    break;
  case 5:
    goto code_r0x0001077764c8;
  case 6:
    func_0x00010777d298(param_1,param_2 + 8);
    puVar8 = auStack_d0;
    func_0x000107348eb0();
    func_0x00010777dbc0();
    puVar9 = &uStack_68;
    func_0x00010777dd7c();
    func_0x00010777dbb0();
    func_0x00010777d648();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return puVar8;
    }
    ___stack_chk_fail();
    func_0x00010777dbb0();
    func_0x00010777d648();
    func_0x00010777d638();
    puStack_e8 = &SUB_1077778dc;
    puStack_f8 = puVar8;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x000107777904(puVar9,&puStack_f8);
    return puVar9;
  case 7:
    pppppppuVar5 = (undefined8 *******)auStack_e0;
    func_0x00010777d298(param_1,param_2 + 8);
    puVar14 = auStack_d8;
    puVar8 = auStack_d0;
    func_0x000107348ecc();
    func_0x00010777dbc0();
    pppppppuVar11 = (undefined8 *******)&uStack_68;
    func_0x00010777dd7c();
    func_0x00010777dbb0();
    func_0x00010777d648();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return puVar8;
    }
    ___stack_chk_fail();
    param_1 = puVar8;
    func_0x00010777dbb0();
    func_0x00010777d648();
    puVar18 = &SUB_107777bdc;
    func_0x00010777d638();
    goto LAB_107349430;
  case 8:
    func_0x0001073493cc(param_1);
    lVar2 = (*(long **)(param_2 + 8))[1];
    for (lVar16 = **(long **)(param_2 + 8); lVar16 != lVar2; lVar16 = lVar16 + 0x70) {
      FUN_10777630c(param_1,lVar16);
    }
    param_1[4] = param_1[4] - 0x10;
    func_0x000107349610(*param_1,0x5d);
    return (ulong *)0x1;
  default:
    puVar14 = param_2;
    func_0x00010734936c(param_1);
    puVar8 = (ulong *)(param_2 + 8);
    func_0x000107348ee8();
    unaff_x21 = appppppuStack_48;
    puStack_58 = puVar8;
    puStack_50 = puVar14;
    if (puVar8 == (ulong *)0x0) {
      func_0x00010777dd84();
      return puVar8;
    }
    func_0x00010724ef84(appppppuStack_48,puVar14);
    if (-1 < cStack_31) {
      appppppuStack_48[0] = unaff_x21;
    }
    ppppppuStack_60 = appppppuStack_48[0];
    puVar18 = (undefined *)0x1077764a4;
    puVar8 = param_1;
LAB_107349430:
    *(undefined1 **)((long)pppppppuVar5 + -0x20) = puVar14;
    *(ulong **)((long)pppppppuVar5 + -0x18) = puVar8;
    *(undefined1 **)((long)pppppppuVar5 + -0x10) = &stack0xfffffffffffffff0;
    *(undefined **)((long)pppppppuVar5 + -8) = puVar18;
    uVar17 = (ulong)*pppppppuVar11;
    uVar10 = uVar17;
    _strlen();
    lVar16 = *(long *)((long)pppppppuVar5 + -0x20);
    *(undefined8 *)((long)pppppppuVar5 + -0x30) = unaff_x22;
    *(undefined8 ********)((long)pppppppuVar5 + -0x28) = unaff_x21;
    *(long *)((long)pppppppuVar5 + -0x20) = lVar16;
    *(undefined8 *)((long)pppppppuVar5 + -0x18) = *(undefined8 *)((long)pppppppuVar5 + -0x18);
    *(undefined8 *)((long)pppppppuVar5 + -0x10) = *(undefined8 *)((long)pppppppuVar5 + -0x10);
    *(undefined8 *)((long)pppppppuVar5 + -8) = *(undefined8 *)((long)pppppppuVar5 + -8);
    func_0x00010734ac28(param_1,uVar17,uVar10,0);
    func_0x000107349544();
    plVar1 = *(long **)((long)pppppppuVar5 + -0x18);
    *(undefined8 *)((long)pppppppuVar5 + -0x30) = *(undefined8 *)((long)pppppppuVar5 + -0x30);
    *(undefined8 *)((long)pppppppuVar5 + -0x28) = *(undefined8 *)((long)pppppppuVar5 + -0x28);
    *(undefined8 *)((long)pppppppuVar5 + -0x20) = *(undefined8 *)((long)pppppppuVar5 + -0x20);
    *(long **)((long)pppppppuVar5 + -0x18) = plVar1;
    *(undefined8 *)((long)pppppppuVar5 + -0x10) = *(undefined8 *)((long)pppppppuVar5 + -0x10);
    *(undefined8 *)((long)pppppppuVar5 + -8) = *(undefined8 *)((long)pppppppuVar5 + -8);
    func_0x00010734ac10(unaff_x21);
    func_0x000107349658();
    func_0x00010734ab28(0);
    *(undefined8 *)(extraout_x9_06 + 0x18) = extraout_x11_01;
    *extraout_x10_01 = 0x22;
    for (uVar17 = extraout_x8; uVar17 < (uVar10 & 0xffffffff); uVar17 = uVar17 + 1) {
      bVar3 = *(byte *)(lVar16 + uVar17);
      cVar4 = (&UNK_10de4e441)[bVar3];
      pbVar13 = *(byte **)(*plVar1 + 0x18);
      *(byte **)(*plVar1 + 0x18) = pbVar13 + 1;
      if (cVar4 == '\0') {
        *pbVar13 = bVar3;
      }
      else {
        *pbVar13 = 0x5c;
        pcVar15 = *(char **)(*plVar1 + 0x18);
        *(char **)(*plVar1 + 0x18) = pcVar15 + 1;
        *pcVar15 = cVar4;
        if (cVar4 == 'u') {
          puVar14 = *(undefined1 **)(*plVar1 + 0x18);
          *(undefined1 **)(*plVar1 + 0x18) = puVar14 + 1;
          *puVar14 = 0x30;
          puVar14 = *(undefined1 **)(*plVar1 + 0x18);
          *(undefined1 **)(*plVar1 + 0x18) = puVar14 + 1;
          *puVar14 = 0x30;
          uVar6 = (&UNK_10de4e431)[bVar3 >> 4];
          puVar14 = *(undefined1 **)(*plVar1 + 0x18);
          *(undefined1 **)(*plVar1 + 0x18) = puVar14 + 1;
          *puVar14 = uVar6;
          uVar6 = (&UNK_10de4e431)[(ulong)bVar3 & 0xf];
          puVar14 = *(undefined1 **)(*plVar1 + 0x18);
          *(undefined1 **)(*plVar1 + 0x18) = puVar14 + 1;
          *puVar14 = uVar6;
        }
      }
    }
    func_0x00010734aa78();
    *extraout_x9_07 = 0x22;
    return (ulong *)0x1;
  }
  func_0x00010777dbb8();
code_r0x0001077764c8:
  return param_1;
}



/* Entry: 1077772a8; end: 10777737f;  */

void FUN_1077772a8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  undefined1 in_ZR;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined1 extraout_w8;
  undefined1 uVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x21;
  undefined1 auStack_238 [24];
  undefined8 *puStack_220;
  undefined4 uStack_218;
  undefined1 uStack_214;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined1 **ppuStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined8 auStack_1e0 [4];
  undefined8 auStack_1c0 [8];
  undefined8 uStack_180;
  undefined8 uStack_178;
  byte bStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [15];
  
  ppuVar8 = &puStack_e0;
  ppuVar5 = &puStack_e0;
  ppuVar6 = &puStack_e0;
  func_0x00010777d1f4();
  puStack_e0 = &UNK_10e52b660;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  func_0x000104c2db28();
  lStack_c0 = param_1;
  while (lVar2 = param_2, lStack_b8 = lVar2, lStack_c0 != 0) {
    func_0x00010777db48(&uStack_b0);
    func_0x0001077765a4();
    ppuVar4 = &puStack_e0;
    func_0x0001072baf4c(&puStack_e0,lVar2);
    func_0x00010726cda0((undefined1 *)((long)ppuVar4 + 8),auStack_a8);
    func_0x00010777d660();
    func_0x000104c2de10(&lStack_c0);
    param_2 = lStack_b8;
    unaff_x21 = lVar2;
  }
  func_0x000107278fec(&uStack_b0);
  *(undefined8 *)(unaff_x19 + 0x10) = auStack_a8[0];
  *(undefined8 *)(unaff_x19 + 8) = uStack_b0;
  uStack_b0 = 0;
  auStack_a8[0] = 0;
  *(undefined4 *)(unaff_x19 + 0x68) = 9;
  func_0x00010726b264(&uStack_b0);
  func_0x00010726ae88();
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726ae88();
  func_0x00010777d638();
  puStack_e8 = &UNK_107777380;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010777d250();
  iVar1 = *(int *)(ppuVar6 + 0xd);
  uStack_138 = extraout_x8;
  if ((((((iVar1 == 0) || (in_ZR = 1, iVar1 == 1)) || (in_ZR = 1, iVar1 == 2)) ||
       ((in_ZR = 1, iVar1 == 3 || (in_ZR = 1, iVar1 == 4)))) ||
      ((in_ZR = 1, iVar1 == 5 || ((in_ZR = 1, iVar1 == 6 || (in_ZR = 1, iVar1 == 7)))))) ||
     (in_ZR = iVar1 == 8, (bool)in_ZR)) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777da84();
    func_0x000104c32780(auStack_1e0);
    func_0x000107348ee8();
    func_0x00010777dc10();
    while (unaff_x21 != 0) {
      func_0x00010777da30(auStack_1c0);
      ppuVar8 = (undefined **)auStack_1c0;
      func_0x00010729d394(&uStack_180);
      func_0x000104c3323c(auStack_1c0);
      bVar3 = bStack_140;
      if ((bStack_140 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        func_0x00010777de30();
        func_0x000107269164();
        ppuVar8 = (undefined **)&uStack_180;
        func_0x0001072d80fc();
      }
      func_0x000107267ed0(&uStack_180);
      if (bVar3 == 0) {
        func_0x00010777d890();
        goto code_r0x0001077774b4;
      }
      func_0x00010777db40();
      unaff_x21 = lStack_1f0;
    }
    ppuVar8 = (undefined **)auStack_1e0;
    func_0x000104c33260(&uStack_180);
    ppuVar5[1] = (undefined *)uStack_178;
    *ppuVar5 = (undefined *)uStack_180;
    uStack_180 = 0;
    uStack_178 = 0;
    func_0x00010777d960();
    func_0x000104c335c0(&uStack_180);
code_r0x0001077774b4:
    ppuVar6 = (undefined **)auStack_1e0;
    func_0x000104c33548();
  }
  func_0x00010777d23c(uStack_138);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar7 = auStack_1e0;
    func_0x000104c33548();
    func_0x00010777d9d0();
    puStack_1f8 = &UNK_1077774f4;
    puStack_210 = ppuVar6;
    puStack_208 = ppuVar5;
    ppuStack_200 = &puStack_f0;
    func_0x0001077752bc();
    uStack_218 = SUB84(ppuVar8,0);
    uStack_214 = (undefined1)((ulong)ppuVar8 >> 0x20);
    puStack_220 = puVar7;
    if (((ulong)ppuVar8 >> 0x20 & 1) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8;
    }
    else {
      func_0x0001074e8e04(auStack_238,&puStack_220);
      func_0x00010777ddf0();
      uVar9 = 1;
    }
    *(undefined1 *)(extraout_x8_00 + 0x18) = uVar9;
    return;
  }
  return;
}



/* Entry: 10777784c; end: 10777786b;  */

undefined8 FUN_10777784c(undefined8 param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  long *plVar5;
  ulong extraout_x8;
  ulong uVar6;
  long extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  byte *pbVar7;
  undefined1 *puVar8;
  char *pcVar9;
  long *unaff_x19;
  long unaff_x20;
  
  uVar1 = *(uint *)(param_2 + 1);
  plVar5 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    uVar1 = (int)*(char *)((long)param_2 + 0x17);
    plVar5 = param_2;
  }
  func_0x00010734ac28(param_1,plVar5,(ulong)uVar1,0);
  func_0x000107349544();
  func_0x00010734ac10();
  func_0x000107349658();
  func_0x00010734ab28(0);
  *(undefined8 *)(extraout_x9 + 0x18) = extraout_x11;
  *extraout_x10 = 0x22;
  for (uVar6 = extraout_x8; uVar6 < uVar1; uVar6 = uVar6 + 1) {
    bVar2 = *(byte *)(unaff_x20 + uVar6);
    cVar3 = (&UNK_10de4e441)[bVar2];
    pbVar7 = *(byte **)(*unaff_x19 + 0x18);
    *(byte **)(*unaff_x19 + 0x18) = pbVar7 + 1;
    if (cVar3 == '\0') {
      *pbVar7 = bVar2;
    }
    else {
      *pbVar7 = 0x5c;
      pcVar9 = *(char **)(*unaff_x19 + 0x18);
      *(char **)(*unaff_x19 + 0x18) = pcVar9 + 1;
      *pcVar9 = cVar3;
      if (cVar3 == 'u') {
        puVar8 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar8 + 1;
        *puVar8 = 0x30;
        puVar8 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar8 + 1;
        *puVar8 = 0x30;
        uVar4 = (&UNK_10de4e431)[bVar2 >> 4];
        puVar8 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar8 + 1;
        *puVar8 = uVar4;
        uVar4 = (&UNK_10de4e431)[(ulong)bVar2 & 0xf];
        puVar8 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar8 + 1;
        *puVar8 = uVar4;
      }
    }
  }
  func_0x00010734aa78();
  *extraout_x9_00 = 0x22;
  return 1;
}



/* Entry: 107777b14; end: 107777b6b;  */

undefined8 FUN_107777b14(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x0001073493cc();
  lVar1 = ((long *)*param_2)[1];
  for (lVar2 = *(long *)*param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    func_0x0001077778dc(param_1,lVar2);
  }
  param_1[4] = param_1[4] + -0x10;
  func_0x000107349610(*param_1,0x5d);
  return 1;
}



/* Entry: 107777e78; end: 107777e97;  */

void FUN_107777e78(long *param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 in_ZR;
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
  undefined1 *unaff_x21;
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
  byte abStack_520 [1152];
  long alStack_a0 [13];
  undefined4 uStack_38;
  
  if ((int)param_1[0xd] == 0) {
    plVar4 = param_2 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224(plVar4,param_1 + 1);
    uStack_38 = 0;
    param_2 = (long *)*plVar4;
    unaff_x20 = alStack_a0;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((abStack_520[0x468] & 1) == 0) {
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
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    unaff_x30 = &LAB_107777f14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_520 + 0x450);
  }
  uVar3 = (int)param_1[0xd] == 1;
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
    func_0x00010777dc20((char)*param_1);
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
    unaff_x30 = &UNK_10777832c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
  }
  uVar3 = (int)param_1[0xd] == 2;
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
    *(long *)((long)register0x00000008 + -0x98) = *param_1;
    *(undefined4 *)((long)register0x00000008 + -0x38) = 2;
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
    unaff_x30 = &UNK_1077783d8;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
  }
  uVar3 = (int)param_1[0xd] == 3;
  if ((bool)uVar3) {
    plVar4 = param_2 + 1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(plVar4,param_1 + 1);
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    param_1 = (long *)((long)register0x00000008 + -0xb0);
    func_0x0001072ddd58();
    param_2 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -200) & 1) == 0) {
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
    unaff_x30 = &UNK_107778484;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    unaff_x20 = plVar4;
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
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
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
    if ((*(byte *)((long)register0x00000008 + -0x100) & 1) == 0) goto code_r0x0001077787a0;
    func_0x00010777d818();
    func_0x00010777d550();
code_r0x000107778790:
    func_0x00010777d2ec();
    func_0x0001072dbd40((undefined1 *)((long)register0x00000008 + -0xf8));
code_r0x0001077787a4:
    func_0x0001072dbe34((undefined1 *)((long)register0x00000008 + -0x110));
  }
  else {
    uVar3 = extraout_w8 == 6;
    if ((bool)uVar3) {
      func_0x000107348eb0((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
code_r0x0001077787a0:
      func_0x00010777d724();
      goto code_r0x0001077787a4;
    }
    uVar3 = extraout_w8 == 7;
    if ((bool)uVar3) {
      func_0x000107348ecc((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
      goto code_r0x0001077787a0;
    }
    uVar3 = extraout_w8 == 8;
    if (!(bool)uVar3) {
      func_0x0001074fd134((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
      goto code_r0x0001077787a0;
    }
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    lVar7 = *(long *)param_1[1];
    lVar11 = ((long *)param_1[1])[1];
    if (lVar11 - lVar7 != 0) {
      uVar5 = (lVar11 - lVar7) / 0x70;
      if (uVar5 >> 0x3c != 0) {
        FUN_107778164();
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
  FUN_107778164();
code_r0x00010777880c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107778810);
  (*pcVar2)();
}



/* Entry: 107778164; end: 107778177;  */

undefined1  [16] FUN_107778164(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((ulong)puVar1 >> 0x3c == 0) {
    lVar2 = (long)puVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104bd35f4();
  if ((puVar1[0x18] & 1) == 0) {
    lVar3 = **(long **)(puVar1 + 8);
    lVar2 = **(long **)(puVar1 + 0x10);
    while (lVar2 != lVar3) {
      lVar2 = lVar2 + -0x10;
      func_0x0001072dbd40();
    }
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 1077783fc; end: 107778483;  */

void FUN_1077783fc(long *param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int extraout_w8;
  undefined8 extraout_x8;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int extraout_w10;
  undefined8 unaff_x19;
  undefined8 unaff_x22;
  long lVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar14;
  undefined *puVar15;
  long lVar16;
  byte abStack_2b0 [256];
  undefined1 auStack_1b0 [24];
  byte bStack_198;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined4 uStack_118;
  long *plStack_100;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [24];
  byte bStack_c8;
  long alStack_b0 [16];
  
  puVar3 = auStack_e0;
  ppppuVar14 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  plVar5 = alStack_b0;
  func_0x0001072ddd58();
  plVar8 = (long *)*param_1;
  func_0x00010777d68c();
  func_0x00010777d640();
  if ((bStack_c8 & 1) == 0) {
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
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d6ec();
  func_0x00010777d8a4();
  puVar15 = &UNK_107778484;
  func_0x00010777d638();
  uVar4 = (int)plVar5[0xd] == 4;
  if ((bool)uVar4) {
    plVar6 = plVar8 + 1;
    plVar5 = plVar5 + 1;
    puVar3 = auStack_1b0;
    puStack_e8 = &UNK_107778484;
    plStack_100 = param_1;
    pppuStack_f0 = ppppuVar14;
    func_0x00010777d224();
    param_1 = &lStack_180;
    lStack_170 = plVar5[1];
    lStack_178 = *plVar5;
    uStack_118 = 4;
    plVar8 = (long *)*plVar6;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((bStack_198 & 1) == 0) {
      func_0x00010777d724();
      plVar5 = plVar6;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      plVar5 = plVar6;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    puVar15 = &UNK_107778530;
    func_0x00010777d638();
    ppppuVar14 = &pppuStack_f0;
  }
  *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = alStack_b0;
  *(long **)(puVar3 + -0x20) = param_1;
  *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
  *(undefined8 *****)(puVar3 + -0x10) = ppppuVar14;
  *(undefined **)(puVar3 + -8) = puVar15;
  plVar6 = plVar8;
  func_0x00010777d250();
  *(undefined8 *)(puVar3 + -0x70) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar4) {
    lVar10 = plVar5[2];
    lVar16 = plVar5[1];
    *(long *)(puVar3 + -0xd0) = plVar5[2];
    *(long *)(puVar3 + -0xd8) = lVar16;
    if (lVar10 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc30();
    func_0x00010777d7a0();
    func_0x00010777d640();
    if ((puVar3[-0x100] & 1) != 0) {
      func_0x00010777d818();
      func_0x00010777d550();
      goto code_r0x000107778790;
    }
code_r0x0001077787a0:
    func_0x00010777d724();
code_r0x0001077787a4:
    func_0x0001072dbe34(puVar3 + -0x110);
  }
  else {
    uVar4 = extraout_w8 == 6;
    if ((bool)uVar4) {
      func_0x000107348eb0(puVar3 + -0xd8,plVar5 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((puVar3[-0x100] & 1) == 0) goto code_r0x0001077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
code_r0x000107778790:
      func_0x00010777d2ec();
      func_0x0001072dbd40(puVar3 + -0xf8);
      goto code_r0x0001077787a4;
    }
    uVar4 = extraout_w8 == 7;
    if ((bool)uVar4) {
      func_0x000107348ecc(puVar3 + -0xd8,plVar5 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((puVar3[-0x100] & 1) == 0) goto code_r0x0001077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
      goto code_r0x000107778790;
    }
    uVar4 = extraout_w8 == 8;
    if (!(bool)uVar4) {
      func_0x0001074fd134(puVar3 + -0xd8,plVar5 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((puVar3[-0x100] & 1) == 0) goto code_r0x0001077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
      goto code_r0x000107778790;
    }
    *(undefined8 *)(puVar3 + -0x108) = 0;
    *(undefined8 *)(puVar3 + -0x100) = 0;
    *(undefined8 *)(puVar3 + -0x110) = 0;
    lVar10 = *(long *)plVar5[1];
    lVar16 = ((long *)plVar5[1])[1];
    if (lVar16 - lVar10 != 0) {
      uVar7 = (lVar16 - lVar10) / 0x70;
      if (uVar7 >> 0x3c != 0) {
        FUN_107778164();
        goto code_r0x00010777880c;
      }
      *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x100;
      func_0x000107778178();
      *(ulong *)(puVar3 + -0xe0) = uVar7;
      *(ulong *)(puVar3 + -0xd8) = uVar7;
      *(ulong *)(puVar3 + -0xd0) = uVar7;
      *(ulong *)(puVar3 + -200) = uVar7 + (long)plVar6 * 0x10;
      func_0x00010777dd9c();
      func_0x00010777dd68();
      lVar10 = *(long *)plVar5[1];
      lVar16 = ((long *)plVar5[1])[1];
    }
    do {
      uVar4 = lVar10 == lVar16;
      if ((bool)uVar4) {
        func_0x000107778054(puVar3 + -0xe0,puVar3 + -0x110);
        func_0x00010777d58c();
        func_0x00010777d960();
        func_0x00010773b158(puVar3 + -0xe0);
        goto code_r0x0001077787f0;
      }
      lVar9 = *plVar8;
      func_0x0001077754c8(puVar3 + -0xf8,lVar10);
      bVar1 = puVar3[-0xe8];
      if ((bVar1 & 1) != 0) {
        uVar7 = *(ulong *)(puVar3 + -0x108);
        uVar11 = *(ulong *)(puVar3 + -0x100);
        uVar4 = uVar7 == uVar11;
        if (uVar7 < uVar11) {
          func_0x0001072f64f4(uVar7,puVar3 + -0xf8);
          lVar9 = uVar7 + 0x10;
        }
        else {
          lVar13 = uVar7 - *(long *)(puVar3 + -0x110);
          uVar7 = (lVar13 >> 4) + 1;
          if (uVar7 >> 0x3c != 0) goto code_r0x000107778800;
          uVar11 = uVar11 - *(long *)(puVar3 + -0x110);
          uVar12 = (long)uVar11 >> 3;
          if ((ulong)((long)uVar11 >> 3) <= uVar7) {
            uVar12 = uVar7;
          }
          uVar4 = uVar11 == 0x7ffffffffffffff0;
          if (0x7fffffffffffffef < uVar11) {
            uVar12 = 0xfffffffffffffff;
          }
          *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x100;
          if (uVar12 == 0) {
            uVar12 = 0;
            lVar9 = 0;
          }
          else {
            func_0x000107778178();
          }
          lVar13 = uVar12 + lVar13;
          *(ulong *)(puVar3 + -0xe0) = uVar12;
          *(long *)(puVar3 + -0xd8) = lVar13;
          *(long *)(puVar3 + -0xd0) = lVar13;
          *(ulong *)(puVar3 + -200) = uVar12 + lVar9 * 0x10;
          func_0x0001072f64f4(lVar13,puVar3 + -0xf8);
          *(long *)(puVar3 + -0xd0) = lVar13 + 0x10;
          func_0x00010777dd9c();
          lVar9 = *(long *)(puVar3 + -0x108);
          func_0x00010777dd68();
        }
        *(long *)(puVar3 + -0x108) = lVar9;
      }
      func_0x0001072dbe34(puVar3 + -0xf8);
      lVar10 = lVar10 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777db54();
code_r0x0001077787f0:
    func_0x000107778278(puVar3 + -0x110);
  }
  func_0x00010777d23c(*(undefined8 *)(puVar3 + -0x70));
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
code_r0x000107778800:
  FUN_107778164();
code_r0x00010777880c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107778810);
  (*pcVar2)();
}



/* Entry: 107778b78; end: 107778c3b;  */

void FUN_107778b78(void)

{
  func_0x000107778b90();
  return;
}



/* Entry: 107778fa0; end: 107778fc3;  */

void FUN_107778fa0(long *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 uVar19;
  undefined1 extraout_w8;
  undefined1 uVar20;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  long lVar21;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *unaff_x19;
  undefined4 uVar22;
  ulong unaff_x20;
  long *unaff_x21;
  undefined1 *puVar23;
  undefined1 *unaff_x22;
  undefined1 *puVar24;
  undefined8 unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar25;
  code *pcVar26;
  long lVar27;
  undefined8 uVar28;
  byte abStack_14d0 [5148];
  undefined4 uStack_b4;
  long alStack_b0 [16];
  
  uVar9 = (int)param_1[0xd] == 1;
  uVar22 = (undefined4)unaff_x20;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4();
    unaff_x21 = alStack_b0;
    func_0x00010777dae0();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      uStack_b4 = uVar22;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&LAB_107779038;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_14d0 + 0x1410);
    unaff_x19 = plVar14;
  }
  uVar9 = (int)param_1[0xd] == 2;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
    func_0x00010777dacc();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)((long)register0x00000008 + -0xb4) = uVar22;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&UNK_1077790d0;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar14;
  }
  uVar9 = (int)param_1[0xd] == 3;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    func_0x00010777dd10();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)((long)register0x00000008 + -0xb4) = uVar22;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&UNK_107779164;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar14;
  }
  uVar9 = (int)param_1[0xd] == 4;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)((long)register0x00000008 + -0xb4) = uVar22;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = FUN_1077791fc;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar14;
  }
  puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0x10);
  plVar14 = param_1;
  func_0x00010777d1f4();
  func_0x00010777da78();
  uVar22 = SUB84(param_1,0);
  if ((bool)uVar9) {
    lVar21 = param_1[2];
    lVar27 = param_1[1];
    *(long *)((long)register0x00000008 + -0xa0) = param_1[2];
    *(long *)((long)register0x00000008 + -0xa8) = lVar27;
    if (lVar21 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d958();
    func_0x00010777d478();
    if ((ulong)param_1 >> 0x20 != 0) {
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto LAB_10777935c;
    }
LAB_107779334:
    uVar19 = (undefined1)((ulong)param_1 >> 0x20);
    *(undefined1 *)unaff_x19 = 0;
LAB_107779368:
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
  }
  else {
    uVar9 = extraout_w8_05 == 6;
    if ((bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto LAB_107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
LAB_10777935c:
      func_0x00010777d2c0();
      func_0x0001072dbd40();
      uVar19 = 1;
      goto LAB_107779368;
    }
    uVar9 = extraout_w8_05 == 7;
    if ((bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto LAB_107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto LAB_10777935c;
    }
    uVar9 = extraout_w8_05 == 8;
    if (!(bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto LAB_107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto LAB_10777935c;
    }
    func_0x00010777dce0();
    func_0x00010777d398(param_1[1]);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x0001073b504c();
    unaff_x21 = (long *)((undefined8 *)param_1[1])[1];
    for (param_1 = *(long **)param_1[1]; uVar9 = param_1 == unaff_x21, !(bool)uVar9;
        param_1 = param_1 + 0xe) {
      func_0x00010777ddc4();
      *(int *)((long)register0x00000008 + -0xc0) = (int)puVar3;
      *(char *)((long)register0x00000008 + -0xbc) = (char)((ulong)puVar3 >> 0x20);
      if ((ulong)puVar3 >> 0x20 == 0) {
        func_0x00010777d724();
        goto LAB_107779380;
      }
      func_0x00010777d700();
      func_0x0001073b50ac();
    }
    func_0x00010777dac0();
    func_0x000107535bd0();
    func_0x00010777d338();
    func_0x0001072dbd40();
LAB_107779380:
    plVar14 = (long *)((long)register0x00000008 + -0xb0);
    func_0x0001056d1ce4();
  }
  func_0x00010777d1dc();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar25 = &UNK_1077793bc;
  func_0x00010777d638();
  if ((int)plVar14[0xd] == 0) {
    plVar15 = param_2 + 1;
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x1b0);
    *(long **)((long)register0x00000008 + -0xe0) = param_1;
    *(long **)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar23;
    *(undefined **)((long)register0x00000008 + -200) = &UNK_1077793bc;
    puVar23 = (undefined1 *)((long)register0x00000008 + -0xd0);
    func_0x00010777d224(plVar15,plVar14 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x130) = 0;
    param_2 = (long *)*plVar15;
    param_1 = (long *)((long)register0x00000008 + -0x198);
    func_0x00010777d824();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xf0) & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779450;
    func_0x00010777d638();
  }
  uVar9 = (int)plVar14[0xd] == 1;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15,plVar14 + 1);
    func_0x00010777d8d4();
    param_2 = (long *)*plVar15;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_1077794e4;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  uVar9 = (int)plVar14[0xd] == 2;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15,plVar14 + 1);
    func_0x00010777d904();
    param_2 = (long *)*plVar15;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779578;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  uVar9 = (int)plVar14[0xd] == 3;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    param_2 = plVar14 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15);
    unaff_x19 = (long *)(puVar8 + -0x60);
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    plVar14 = unaff_x19;
    func_0x00010777dbd0();
    puVar25 = &UNK_1077795e4;
    func_0x00010777d638();
    puVar8 = puVar8 + -0x70;
  }
  uVar9 = (int)plVar14[0xd] == 4;
  if ((bool)uVar9) {
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(param_2 + 1,plVar14 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
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
    puVar25 = &UNK_107779678;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  puVar3 = puVar8 + -0x120;
  *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
  *(ulong *)(puVar8 + -0x48) = unaff_x25;
  *(long **)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar8 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
  *(long **)(puVar8 + -0x28) = unaff_x21;
  *(long **)(puVar8 + -0x20) = param_1;
  *(long **)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = puVar23;
  *(undefined **)(puVar8 + -8) = puVar25;
  puVar23 = puVar8 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar8 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar9) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    puVar17 = (undefined1 *)param_1[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((puVar8[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar11 = (undefined8 *)(puVar8 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar9 = extraout_w8_06 == 6;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6c8();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar9 = extraout_w8_06 == 7;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6bc();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar9 = extraout_w8_06 == 8;
    if (!(bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6d4();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(puVar8 + -0x90) = 0;
    *(undefined8 *)(puVar8 + -0x88) = 0;
    *(undefined8 *)(puVar8 + -0x98) = 0;
    func_0x00010777d398(unaff_x21[1]);
    func_0x0001072dd514(puVar8 + -0x98);
    func_0x00010777de3c();
    do {
      uVar9 = unaff_x21 == unaff_x24;
      if ((bool)uVar9) {
        puVar17 = puVar8 + -0x98;
        func_0x0001073fb2d4(puVar8 + -0x110);
        lVar21 = *(long *)(puVar8 + -0x110);
        unaff_x19[1] = *(long *)(puVar8 + -0x108);
        *unaff_x19 = lVar21;
        *(undefined8 *)(puVar8 + -0x110) = 0;
        *(undefined8 *)(puVar8 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(puVar8 + -0x110);
        goto code_r0x000107779838;
      }
      puVar17 = (undefined1 *)*param_1;
      func_0x000107323900(puVar8 + -0x110,unaff_x21);
      bVar2 = puVar8[-0xd8];
      unaff_x25 = (ulong)bVar2;
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar17 = puVar8 + -0x110;
        func_0x0001072d17f4(puVar8 + -0x98);
      }
      func_0x00010724b3d8(puVar8 + -0x110);
      unaff_x21 = unaff_x21 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar11 = (undefined8 *)(puVar8 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar8 + -0x58));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar12 = (undefined8 *)(puVar8 + -0x98);
  func_0x00010724b3d8();
  pcVar26 = (code *)&SUB_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar12 + 0xd) == 0) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar3 = puVar8 + -0x250;
    *(undefined8 *)(puVar8 + -0x150) = unaff_x28;
    *(undefined8 *)(puVar8 + -0x148) = unaff_x27;
    *(undefined8 **)(puVar8 + -0x140) = puVar11;
    *(long **)(puVar8 + -0x138) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x130) = puVar23;
    *(undefined **)(puVar8 + -0x128) = &SUB_1077798bc;
    puVar23 = puVar8 + -0x130;
    func_0x00010777d1f4(puVar13,puVar12 + 1);
    *(undefined4 *)(puVar8 + -0x1e8) = 0;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar8[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&UNK_107779964;
    func_0x00010777d638();
    puVar11 = (undefined8 *)(puVar8 + -0x250);
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 1;
  if ((bool)uVar9) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar12 = puVar12 + 1;
    puVar4 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    puVar3[-0x128] = *(undefined1 *)puVar12;
    *(undefined4 *)(puVar3 + -200) = 1;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = FUN_107779a1c;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar4;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 2;
  if ((bool)uVar9) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar12 = puVar12 + 1;
    puVar5 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar3 + -0x128) = *puVar12;
    *(undefined4 *)(puVar3 + -200) = 2;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&LAB_107779ad4;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar5;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 3;
  if ((bool)uVar9) {
    puVar13 = puVar12 + 1;
    puVar12 = (undefined8 *)(puVar3 + -0x130);
    plVar6 = (long *)(puVar3 + -0x130);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(long **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4(puVar17 + 8,puVar13);
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
    pcVar26 = (code *)&UNK_107779b94;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = (undefined8 *)(puVar17 + 8);
    unaff_x21 = plVar6;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 4;
  if ((bool)uVar9) {
    puVar12 = puVar12 + 1;
    puVar7 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    uVar28 = *puVar12;
    *(undefined8 *)(puVar3 + -0x120) = puVar12[1];
    *(undefined8 *)(puVar3 + -0x128) = uVar28;
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
    pcVar26 = (code *)&UNK_107779c4c;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar7;
  }
  puVar8 = puVar3 + -0x150;
  puVar24 = puVar3 + -0x150;
  puVar17 = puVar3 + -0x150;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(ulong *)(puVar3 + -0x48) = unaff_x25;
  *(long **)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x20) = puVar11;
  *(long **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar23;
  *(code **)(puVar3 + -8) = pcVar26;
  puVar23 = puVar3 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar3 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar9) {
    lVar21 = unaff_x21[2];
    lVar27 = unaff_x21[1];
    *(long *)(puVar3 + -0x140) = unaff_x21[2];
    *(long *)(puVar3 + -0x148) = lVar27;
    if (lVar21 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar3 + -0xe8) = 5;
    puVar18 = (undefined1 *)puVar11[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (long *)(puVar3 + -0x150);
    puVar17 = unaff_x22;
    if ((puVar3[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (long *)(puVar3 + -0x150);
      puVar24 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    plVar14 = (long *)(puVar3 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar17;
  }
  else {
    uVar9 = extraout_w8_07 == 6;
    if ((bool)uVar9) {
      func_0x00010777d6c8();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar17 = puVar3 + -0x150;
      if ((puVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar24 = puVar3 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar17 = puVar24;
      goto code_r0x000107779dfc;
    }
    uVar9 = extraout_w8_07 == 7;
    if ((bool)uVar9) {
      func_0x00010777d6bc();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar17 = puVar3 + -0x150;
      if ((puVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar24 = puVar3 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar9 = extraout_w8_07 == 8;
    if (!(bool)uVar9) {
      func_0x00010777d6d4();
      puVar18 = (undefined1 *)puVar11[1];
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
    func_0x00010777d398(unaff_x21[1]);
    func_0x0001072ac134(puVar3 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar9 = unaff_x21 == unaff_x24;
      if ((bool)uVar9) {
        puVar18 = puVar3 + -0xe0;
        func_0x000107327958(puVar3 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(puVar3 + -0xa0,unaff_x21,*puVar11);
      puVar18 = puVar3 + -0xa0;
      func_0x00010729d394(puVar3 + -0x150);
      func_0x000104c3323c(puVar3 + -0xa0);
      bVar2 = puVar3[-0x110];
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar18 = puVar3 + -0x150;
        func_0x0001072d7f34(puVar3 + -0xe0);
      }
      func_0x000107267ed0(puVar3 + -0x150);
      unaff_x21 = unaff_x21 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    plVar14 = (long *)(puVar3 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar3 + -0x58));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  plVar15 = (long *)(puVar3 + -0xa0);
  func_0x000107267ed0();
  puVar25 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar10 = (uint)plVar14;
  uVar19 = SUB81(plVar14,0);
  if ((int)plVar15[0xd] == 0) {
    plVar16 = (long *)(puVar18 + 8);
    puVar8 = puVar3 + -0x210;
    *(undefined1 **)(puVar3 + -0x180) = unaff_x22;
    *(long **)(puVar3 + -0x178) = unaff_x21;
    *(long **)(puVar3 + -0x170) = plVar14;
    *(long **)(puVar3 + -0x168) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x160) = puVar23;
    *(undefined **)(puVar3 + -0x158) = &UNK_107779ed8;
    puVar23 = puVar3 + -0x160;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    *(undefined4 *)(puVar3 + -0x198) = 0;
    puVar18 = (undefined1 *)*plVar16;
    unaff_x21 = (long *)(puVar3 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8;
    }
    else {
      puVar3[-0x201] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_107779f6c;
    plVar15 = plVar16;
    func_0x00010777d638();
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 1;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777dae0();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_00;
    }
    else {
      puVar8[-0xb1] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a170;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 2;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777dacc();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_01;
    }
    else {
      puVar8[-0xb1] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a208;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 3;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    plVar14 = plVar16;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    func_0x00010777dd10();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar16 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_02;
    }
    else {
      puVar8[-0xb1] = (char)plVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a2a0;
    plVar15 = plVar14;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar14;
    plVar14 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 4;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar14 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_03;
    }
    else {
      puVar8[-0xb1] = (char)plVar14;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a338;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar10 = (uint)plVar15;
  *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
  *(long **)(puVar8 + -0x28) = unaff_x21;
  *(long **)(puVar8 + -0x20) = plVar14;
  *(long **)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = puVar23;
  *(undefined **)(puVar8 + -8) = puVar25;
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
    if (((uint)plVar14 >> 8 & 1) != 0) {
      puVar8[-0xc0] = (char)plVar14;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar19 = extraout_w8_04;
  }
  else {
    uVar9 = extraout_w8_08 == 6;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar8[-0xc0] = (char)uVar10;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar9 = extraout_w8_08 == 7;
      if ((bool)uVar9) {
        unaff_x22 = puVar8 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar8[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar9 = extraout_w8_08 == 8;
        if ((bool)uVar9) {
          func_0x00010777dce0();
          func_0x00010777d398(unaff_x21[1]);
          func_0x0001075356bc(puVar8 + -0xb0);
          unaff_x22 = (undefined1 *)((undefined8 *)unaff_x21[1])[1];
          for (puVar23 = *(undefined1 **)unaff_x21[1]; uVar9 = puVar23 == unaff_x22, !(bool)uVar9;
              puVar23 = puVar23 + 0x70) {
            puVar3 = puVar23;
            func_0x000107775a54(puVar23,*plVar14);
            *(short *)(puVar8 + -0xc0) = (short)puVar3;
            if (((uint)puVar3 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar8 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar8 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar8[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar19 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar19;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar8 + -0xd0) = puVar8 + -0x10;
  *(undefined8 *)(puVar8 + -200) = 0x10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 1077791fc; end: 1077793bb;  */

void FUN_1077791fc(byte *param_1,byte *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  byte bVar17;
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
  long lVar18;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  byte *unaff_x19;
  undefined4 uVar19;
  byte *unaff_x21;
  undefined1 *puVar20;
  undefined1 *unaff_x22;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined8 unaff_x23;
  byte *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar23;
  undefined *puVar24;
  code *pcVar25;
  undefined8 uVar26;
  long lVar27;
  byte abStack_11d0 [4336];
  byte *pbStack_e0;
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  byte abStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  
  pbVar14 = (byte *)&uStack_c0;
  pppppppuVar23 = (undefined8 *******)&stack0xfffffffffffffff0;
  pbVar13 = param_1;
  func_0x00010777d1f4();
  func_0x00010777da78();
  uVar19 = SUB84(param_1,0);
  if ((bool)in_ZR) {
    lStack_a0 = *(long *)(param_1 + 0x10);
    lStack_a8 = *(long *)(param_1 + 8);
    if (*(long *)(param_1 + 0x10) != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d958();
    func_0x00010777d478();
    if ((ulong)param_1 >> 0x20 != 0) {
      uStack_c0 = uVar19;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto LAB_10777935c;
    }
LAB_107779334:
    bVar17 = (byte)((ulong)param_1 >> 0x20);
    *unaff_x19 = 0;
LAB_107779368:
    unaff_x19[0x10] = bVar17;
  }
  else {
    in_ZR = extraout_w8_05 == 6;
    if ((bool)in_ZR) {
      unaff_x21 = abStack_b0;
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto LAB_107779334;
      uStack_c0 = uVar19;
      func_0x00010777d400();
      func_0x0001072f8d90();
LAB_10777935c:
      func_0x00010777d2c0();
      func_0x0001072dbd40();
      bVar17 = 1;
      goto LAB_107779368;
    }
    in_ZR = extraout_w8_05 == 7;
    if ((bool)in_ZR) {
      unaff_x21 = abStack_b0;
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto LAB_107779334;
      uStack_c0 = uVar19;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto LAB_10777935c;
    }
    in_ZR = extraout_w8_05 == 8;
    if (!(bool)in_ZR) {
      unaff_x21 = abStack_b0;
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto LAB_107779334;
      uStack_c0 = uVar19;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto LAB_10777935c;
    }
    func_0x00010777dce0();
    func_0x00010777d398(*(long *)(param_1 + 8));
    pbVar13 = abStack_b0;
    func_0x0001073b504c();
    unaff_x21 = (byte *)(*(undefined8 **)(param_1 + 8))[1];
    for (param_1 = (byte *)**(undefined8 **)(param_1 + 8); in_ZR = param_1 == unaff_x21,
        !(bool)in_ZR; param_1 = param_1 + 0x70) {
      func_0x00010777ddc4();
      uStack_c0 = SUB84(pbVar13,0);
      uStack_bc = (undefined1)((ulong)pbVar13 >> 0x20);
      if ((ulong)pbVar13 >> 0x20 == 0) {
        func_0x00010777d724();
        goto LAB_107779380;
      }
      func_0x00010777d700();
      func_0x0001073b50ac();
    }
    func_0x00010777dac0();
    func_0x000107535bd0();
    func_0x00010777d338();
    func_0x0001072dbd40();
LAB_107779380:
    pbVar13 = abStack_b0;
    func_0x0001056d1ce4();
  }
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar24 = &UNK_1077793bc;
  func_0x00010777d638();
  if (*(int *)(pbVar13 + 0x68) == 0) {
    pbVar9 = param_2 + 8;
    pbVar14 = abStack_11d0 + 0x1020;
    puStack_c8 = &UNK_1077793bc;
    pbStack_e0 = param_1;
    ppppppuStack_d0 = pppppppuVar23;
    func_0x00010777d224(pbVar9,pbVar13 + 8);
    abStack_11d0[0x10a0] = 0;
    abStack_11d0[0x10a1] = 0;
    abStack_11d0[0x10a2] = 0;
    abStack_11d0[0x10a3] = 0;
    param_2 = *(byte **)pbVar9;
    param_1 = abStack_11d0 + 0x1038;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((abStack_11d0[0x10e0] & 1) == 0) {
      func_0x00010777d724();
      pbVar13 = pbVar9;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      pbVar13 = pbVar9;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar24 = &UNK_107779450;
    func_0x00010777d638();
    pppppppuVar23 = &ppppppuStack_d0;
  }
  uVar7 = *(int *)(pbVar13 + 0x68) == 1;
  if ((bool)uVar7) {
    pbVar9 = param_2 + 8;
    *(byte **)(pbVar14 + -0x20) = param_1;
    *(byte **)(pbVar14 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar14 + -0x10) = pppppppuVar23;
    *(undefined **)(pbVar14 + -8) = puVar24;
    pppppppuVar23 = (undefined8 *******)(pbVar14 + -0x10);
    func_0x00010777d224(pbVar9,pbVar13 + 8);
    func_0x00010777d8d4();
    param_2 = *(byte **)pbVar9;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar14[-0x30] & 1) == 0) {
      func_0x00010777d724();
      pbVar13 = pbVar9;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      pbVar13 = pbVar9;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar24 = &UNK_1077794e4;
    func_0x00010777d638();
    pbVar14 = pbVar14 + -0xf0;
  }
  uVar7 = *(int *)(pbVar13 + 0x68) == 2;
  if ((bool)uVar7) {
    pbVar9 = param_2 + 8;
    *(byte **)(pbVar14 + -0x20) = param_1;
    *(byte **)(pbVar14 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar14 + -0x10) = pppppppuVar23;
    *(undefined **)(pbVar14 + -8) = puVar24;
    pppppppuVar23 = (undefined8 *******)(pbVar14 + -0x10);
    func_0x00010777d224(pbVar9,pbVar13 + 8);
    func_0x00010777d904();
    param_2 = *(byte **)pbVar9;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar14[-0x30] & 1) == 0) {
      func_0x00010777d724();
      pbVar13 = pbVar9;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      pbVar13 = pbVar9;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar24 = &UNK_107779578;
    func_0x00010777d638();
    pbVar14 = pbVar14 + -0xf0;
  }
  uVar7 = *(int *)(pbVar13 + 0x68) == 3;
  if ((bool)uVar7) {
    pbVar9 = param_2 + 8;
    param_2 = pbVar13 + 8;
    *(byte **)(pbVar14 + -0x20) = param_1;
    *(byte **)(pbVar14 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar14 + -0x10) = pppppppuVar23;
    *(undefined **)(pbVar14 + -8) = puVar24;
    pppppppuVar23 = (undefined8 *******)(pbVar14 + -0x10);
    func_0x00010777d224(pbVar9);
    unaff_x19 = pbVar14 + -0x60;
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pbVar13 = unaff_x19;
    func_0x00010777dbd0();
    puVar24 = &UNK_1077795e4;
    func_0x00010777d638();
    pbVar14 = pbVar14 + -0x70;
  }
  uVar7 = *(int *)(pbVar13 + 0x68) == 4;
  if ((bool)uVar7) {
    *(byte **)(pbVar14 + -0x20) = param_1;
    *(byte **)(pbVar14 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar14 + -0x10) = pppppppuVar23;
    *(undefined **)(pbVar14 + -8) = puVar24;
    pppppppuVar23 = (undefined8 *******)(pbVar14 + -0x10);
    func_0x00010777d224(param_2 + 8,pbVar13 + 8);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar14[-0x30] & 1) == 0) {
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
    puVar24 = &UNK_107779678;
    func_0x00010777d638();
    pbVar14 = pbVar14 + -0xf0;
  }
  puVar2 = pbVar14 + -0x120;
  *(undefined8 *)(pbVar14 + -0x50) = unaff_x26;
  *(ulong *)(pbVar14 + -0x48) = unaff_x25;
  *(byte **)(pbVar14 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar14 + -0x38) = unaff_x23;
  *(undefined1 **)(pbVar14 + -0x30) = unaff_x22;
  *(byte **)(pbVar14 + -0x28) = unaff_x21;
  *(byte **)(pbVar14 + -0x20) = param_1;
  *(byte **)(pbVar14 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar14 + -0x10) = pppppppuVar23;
  *(undefined **)(pbVar14 + -8) = puVar24;
  puVar20 = pbVar14 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(pbVar14 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar7) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    puVar15 = *(undefined1 **)(param_1 + 8);
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((pbVar14[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar10 = (undefined8 *)(pbVar14 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar7 = extraout_w8_06 == 6;
    if ((bool)uVar7) {
      unaff_x22 = pbVar14 + -0x110;
      func_0x00010777d6c8();
      puVar15 = *(undefined1 **)(param_1 + 8);
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar14[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar7 = extraout_w8_06 == 7;
    if ((bool)uVar7) {
      unaff_x22 = pbVar14 + -0x110;
      func_0x00010777d6bc();
      puVar15 = *(undefined1 **)(param_1 + 8);
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar14[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar7 = extraout_w8_06 == 8;
    if (!(bool)uVar7) {
      unaff_x22 = pbVar14 + -0x110;
      func_0x00010777d6d4();
      puVar15 = *(undefined1 **)(param_1 + 8);
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar14[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(pbVar14 + -0x90) = 0;
    *(undefined8 *)(pbVar14 + -0x88) = 0;
    *(undefined8 *)(pbVar14 + -0x98) = 0;
    func_0x00010777d398(*(long *)(unaff_x21 + 8));
    func_0x0001072dd514(pbVar14 + -0x98);
    func_0x00010777de3c();
    do {
      uVar7 = unaff_x21 == unaff_x24;
      if ((bool)uVar7) {
        puVar15 = pbVar14 + -0x98;
        func_0x0001073fb2d4(pbVar14 + -0x110);
        lVar18 = *(long *)(pbVar14 + -0x110);
        *(long *)(unaff_x19 + 8) = *(long *)(pbVar14 + -0x108);
        *(long *)unaff_x19 = lVar18;
        *(undefined8 *)(pbVar14 + -0x110) = 0;
        *(undefined8 *)(pbVar14 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(pbVar14 + -0x110);
        goto code_r0x000107779838;
      }
      puVar15 = *(undefined1 **)param_1;
      func_0x000107323900(pbVar14 + -0x110,unaff_x21);
      bVar17 = pbVar14[-0xd8];
      unaff_x25 = (ulong)bVar17;
      if ((bVar17 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar15 = pbVar14 + -0x110;
        func_0x0001072d17f4(pbVar14 + -0x98);
      }
      func_0x00010724b3d8(pbVar14 + -0x110);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar17 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar10 = (undefined8 *)(pbVar14 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar14 + -0x58));
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar11 = (undefined8 *)(pbVar14 + -0x98);
  func_0x00010724b3d8();
  pcVar25 = (code *)&SUB_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar11 + 0xd) == 0) {
    puVar12 = (undefined8 *)(puVar15 + 8);
    puVar2 = pbVar14 + -0x250;
    *(undefined8 *)(pbVar14 + -0x150) = unaff_x28;
    *(undefined8 *)(pbVar14 + -0x148) = unaff_x27;
    *(undefined8 **)(pbVar14 + -0x140) = puVar10;
    *(byte **)(pbVar14 + -0x138) = unaff_x19;
    *(undefined1 **)(pbVar14 + -0x130) = puVar20;
    *(undefined **)(pbVar14 + -0x128) = &SUB_1077798bc;
    puVar20 = pbVar14 + -0x130;
    func_0x00010777d1f4(puVar12,puVar11 + 1);
    *(undefined4 *)(pbVar14 + -0x1e8) = 0;
    puVar15 = (undefined1 *)*puVar12;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar14[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar12;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar12;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar25 = (code *)&UNK_107779964;
    func_0x00010777d638();
    puVar10 = (undefined8 *)(pbVar14 + -0x250);
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 1;
  if ((bool)uVar7) {
    puVar12 = (undefined8 *)(puVar15 + 8);
    puVar11 = puVar11 + 1;
    puVar3 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar10;
    *(byte **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar20;
    *(code **)(puVar2 + -8) = pcVar25;
    puVar20 = puVar2 + -0x10;
    func_0x00010777d1f4();
    puVar2[-0x128] = *(undefined1 *)puVar11;
    *(undefined4 *)(puVar2 + -200) = 1;
    puVar15 = (undefined1 *)*puVar12;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar12;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar12;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar25 = FUN_107779a1c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar10 = puVar3;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 2;
  if ((bool)uVar7) {
    puVar12 = (undefined8 *)(puVar15 + 8);
    puVar11 = puVar11 + 1;
    puVar4 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar10;
    *(byte **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar20;
    *(code **)(puVar2 + -8) = pcVar25;
    puVar20 = puVar2 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar2 + -0x128) = *puVar11;
    *(undefined4 *)(puVar2 + -200) = 2;
    puVar15 = (undefined1 *)*puVar12;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar12;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar12;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar25 = (code *)&LAB_107779ad4;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar10 = puVar4;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 3;
  if ((bool)uVar7) {
    puVar12 = puVar11 + 1;
    puVar11 = (undefined8 *)(puVar2 + -0x130);
    pbVar5 = puVar2 + -0x130;
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(byte **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = puVar10;
    *(byte **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar20;
    *(code **)(puVar2 + -8) = pcVar25;
    puVar20 = puVar2 + -0x10;
    func_0x00010777d1f4(puVar15 + 8,puVar12);
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
    pcVar25 = (code *)&UNK_107779b94;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar10 = (undefined8 *)(puVar15 + 8);
    unaff_x21 = pbVar5;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 4;
  if ((bool)uVar7) {
    puVar11 = puVar11 + 1;
    puVar6 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar10;
    *(byte **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar20;
    *(code **)(puVar2 + -8) = pcVar25;
    puVar20 = puVar2 + -0x10;
    func_0x00010777d1f4();
    uVar26 = *puVar11;
    *(undefined8 *)(puVar2 + -0x120) = puVar11[1];
    *(undefined8 *)(puVar2 + -0x128) = uVar26;
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
    pcVar25 = (code *)&UNK_107779c4c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar10 = puVar6;
  }
  puVar15 = puVar2 + -0x150;
  puVar21 = puVar2 + -0x150;
  puVar22 = puVar2 + -0x150;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(ulong *)(puVar2 + -0x48) = unaff_x25;
  *(byte **)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
  *(byte **)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar2 + -0x20) = puVar10;
  *(byte **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar20;
  *(code **)(puVar2 + -8) = pcVar25;
  puVar20 = puVar2 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar2 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar7) {
    lVar18 = *(long *)(unaff_x21 + 0x10);
    lVar27 = *(long *)(unaff_x21 + 8);
    *(long *)(puVar2 + -0x140) = *(long *)(unaff_x21 + 0x10);
    *(long *)(puVar2 + -0x148) = lVar27;
    if (lVar18 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar2 + -0xe8) = 5;
    puVar16 = (undefined1 *)puVar10[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = puVar2 + -0x150;
    puVar22 = unaff_x22;
    if ((puVar2[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = puVar2 + -0x150;
      puVar21 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    pbVar13 = puVar2 + -0xa0;
    func_0x000107267ed0();
    unaff_x22 = puVar22;
  }
  else {
    uVar7 = extraout_w8_07 == 6;
    if ((bool)uVar7) {
      func_0x00010777d6c8();
      puVar16 = (undefined1 *)puVar10[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar22 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar21 = puVar2 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar22 = puVar21;
      goto code_r0x000107779dfc;
    }
    uVar7 = extraout_w8_07 == 7;
    if ((bool)uVar7) {
      func_0x00010777d6bc();
      puVar16 = (undefined1 *)puVar10[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar22 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar21 = puVar2 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar7 = extraout_w8_07 == 8;
    if (!(bool)uVar7) {
      func_0x00010777d6d4();
      puVar16 = (undefined1 *)puVar10[1];
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
    func_0x00010777d398(*(long *)(unaff_x21 + 8));
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
      func_0x000107776804(puVar2 + -0xa0,unaff_x21,*puVar10);
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
    pbVar13 = puVar2 + -0xe0;
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar2 + -0x58));
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  pbVar14 = puVar2 + -0xa0;
  func_0x000107267ed0();
  puVar24 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar8 = (uint)pbVar13;
  uVar1 = SUB81(pbVar13,0);
  if (*(int *)(pbVar14 + 0x68) == 0) {
    pbVar9 = puVar16 + 8;
    puVar15 = puVar2 + -0x210;
    *(undefined1 **)(puVar2 + -0x180) = unaff_x22;
    *(byte **)(puVar2 + -0x178) = unaff_x21;
    *(byte **)(puVar2 + -0x170) = pbVar13;
    *(byte **)(puVar2 + -0x168) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x160) = puVar20;
    *(undefined **)(puVar2 + -0x158) = &UNK_107779ed8;
    puVar20 = puVar2 + -0x160;
    func_0x00010777d1f4(pbVar9,pbVar14 + 8);
    *(undefined4 *)(puVar2 + -0x198) = 0;
    puVar16 = *(undefined1 **)pbVar9;
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
    puVar24 = &UNK_107779f6c;
    pbVar14 = pbVar9;
    func_0x00010777d638();
    unaff_x19 = pbVar9;
  }
  uVar7 = *(int *)(pbVar14 + 0x68) == 1;
  if ((bool)uVar7) {
    pbVar9 = puVar16 + 8;
    *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
    *(byte **)(puVar15 + -0x28) = unaff_x21;
    *(byte **)(puVar15 + -0x20) = pbVar13;
    *(byte **)(puVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x10) = puVar20;
    *(undefined **)(puVar15 + -8) = puVar24;
    puVar20 = puVar15 + -0x10;
    func_0x00010777d1f4(pbVar9,pbVar14 + 8);
    unaff_x21 = puVar15 + -0xb0;
    func_0x00010777dae0();
    puVar16 = *(undefined1 **)pbVar9;
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
    puVar24 = &UNK_10777a170;
    pbVar14 = pbVar9;
    func_0x00010777d638();
    puVar15 = puVar15 + -0xc0;
    unaff_x19 = pbVar9;
  }
  uVar7 = *(int *)(pbVar14 + 0x68) == 2;
  if ((bool)uVar7) {
    pbVar9 = puVar16 + 8;
    *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
    *(byte **)(puVar15 + -0x28) = unaff_x21;
    *(byte **)(puVar15 + -0x20) = pbVar13;
    *(byte **)(puVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x10) = puVar20;
    *(undefined **)(puVar15 + -8) = puVar24;
    puVar20 = puVar15 + -0x10;
    func_0x00010777d1f4(pbVar9,pbVar14 + 8);
    unaff_x21 = puVar15 + -0xb0;
    func_0x00010777dacc();
    puVar16 = *(undefined1 **)pbVar9;
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
    puVar24 = &UNK_10777a208;
    pbVar14 = pbVar9;
    func_0x00010777d638();
    puVar15 = puVar15 + -0xc0;
    unaff_x19 = pbVar9;
  }
  uVar7 = *(int *)(pbVar14 + 0x68) == 3;
  if ((bool)uVar7) {
    pbVar9 = puVar16 + 8;
    *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
    *(byte **)(puVar15 + -0x28) = unaff_x21;
    *(byte **)(puVar15 + -0x20) = pbVar13;
    *(byte **)(puVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x10) = puVar20;
    *(undefined **)(puVar15 + -8) = puVar24;
    puVar20 = puVar15 + -0x10;
    pbVar13 = pbVar9;
    func_0x00010777d1f4(pbVar9,pbVar14 + 8);
    func_0x00010777dd10();
    puVar16 = *(undefined1 **)pbVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)pbVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar17 = extraout_w8_02;
    }
    else {
      puVar15[-0xb1] = (char)pbVar9;
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
    puVar24 = &UNK_10777a2a0;
    pbVar14 = pbVar13;
    func_0x00010777d638();
    puVar15 = puVar15 + -0xc0;
    unaff_x19 = pbVar13;
    pbVar13 = pbVar9;
  }
  uVar7 = *(int *)(pbVar14 + 0x68) == 4;
  if ((bool)uVar7) {
    pbVar9 = puVar16 + 8;
    *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
    *(byte **)(puVar15 + -0x28) = unaff_x21;
    *(byte **)(puVar15 + -0x20) = pbVar13;
    *(byte **)(puVar15 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x10) = puVar20;
    *(undefined **)(puVar15 + -8) = puVar24;
    puVar20 = puVar15 + -0x10;
    func_0x00010777d1f4(pbVar9,pbVar14 + 8);
    unaff_x21 = puVar15 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)pbVar13 >> 8 & 1) == 0) {
      func_0x00010777d748();
      bVar17 = extraout_w8_03;
    }
    else {
      puVar15[-0xb1] = (char)pbVar13;
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
    puVar24 = &UNK_10777a338;
    pbVar14 = pbVar9;
    func_0x00010777d638();
    puVar15 = puVar15 + -0xc0;
    unaff_x19 = pbVar9;
  }
  uVar8 = (uint)pbVar14;
  *(undefined1 **)(puVar15 + -0x30) = unaff_x22;
  *(byte **)(puVar15 + -0x28) = unaff_x21;
  *(byte **)(puVar15 + -0x20) = pbVar13;
  *(byte **)(puVar15 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar15 + -0x10) = puVar20;
  *(undefined **)(puVar15 + -8) = puVar24;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar7) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)pbVar13 >> 8 & 1) != 0) {
      puVar15[-0xc0] = (char)pbVar13;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    bVar17 = extraout_w8_04;
  }
  else {
    uVar7 = extraout_w8_08 == 6;
    if ((bool)uVar7) {
      unaff_x22 = puVar15 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar15[-0xc0] = (char)uVar8;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar7 = extraout_w8_08 == 7;
      if ((bool)uVar7) {
        unaff_x22 = puVar15 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar15[-0xc0] = (char)uVar8;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar7 = extraout_w8_08 == 8;
        if ((bool)uVar7) {
          func_0x00010777dce0();
          func_0x00010777d398(*(long *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar15 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar20 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar7 = puVar20 == unaff_x22, !(bool)uVar7; puVar20 = puVar20 + 0x70) {
            puVar2 = puVar20;
            func_0x000107775a54(puVar20,*(long *)pbVar13);
            *(short *)(puVar15 + -0xc0) = (short)puVar2;
            if (((uint)puVar2 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar15 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar15 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar15[-0xc0] = (char)uVar8;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    bVar17 = 1;
  }
  unaff_x19[0x10] = bVar17;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar15 + -0xd0) = puVar15 + -0x10;
  *(undefined8 *)(puVar15 + -200) = 0x10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 10777959c; end: 1077795e3;  */

void FUN_10777959c(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 extraout_w8;
  undefined1 uVar16;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar17;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
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
  undefined8 *******pppppppuVar22;
  undefined *puVar23;
  code *pcVar24;
  undefined8 uVar25;
  byte abStack_e40 [3488];
  byte bStack_a0;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 auStack_60 [8];
  byte *pbVar3;
  
  pbVar3 = auStack_70;
  pppppppuVar22 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  puVar10 = auStack_60;
  func_0x000104c2fe00();
  func_0x00010777d454();
  func_0x00010777d304();
  func_0x00010777dbd0();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = puVar10;
  func_0x00010777dbd0();
  puVar23 = &UNK_1077795e4;
  func_0x00010777d638();
  uVar8 = *(int *)(puVar12 + 0xd) == 4;
  if ((bool)uVar8) {
    pbVar3 = abStack_e40 + 0xce0;
    puStack_78 = &UNK_1077795e4;
    ppppppuStack_80 = pppppppuVar22;
    func_0x00010777d224(param_2 + 8,puVar12 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((bStack_a0 & 1) == 0) {
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
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar23 = &UNK_107779678;
    func_0x00010777d638();
    pppppppuVar22 = &ppppppuStack_80;
  }
  puVar2 = pbVar3 + -0x120;
  *(undefined8 *)(pbVar3 + -0x50) = unaff_x26;
  *(ulong *)(pbVar3 + -0x48) = unaff_x25;
  *(undefined1 **)(pbVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar3 + -0x38) = unaff_x23;
  *(undefined1 **)(pbVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(pbVar3 + -0x28) = unaff_x21;
  *(long **)(pbVar3 + -0x20) = unaff_x20;
  *(undefined8 **)(pbVar3 + -0x18) = puVar10;
  *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar22;
  *(undefined **)(pbVar3 + -8) = puVar23;
  puVar19 = pbVar3 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(pbVar3 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar8) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    puVar14 = (undefined1 *)unaff_x20[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((pbVar3[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar12 = (undefined8 *)(pbVar3 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar8 = extraout_w8_05 == 6;
    if ((bool)uVar8) {
      unaff_x22 = pbVar3 + -0x110;
      func_0x00010777d6c8();
      puVar14 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar3[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar8 = extraout_w8_05 == 7;
    if ((bool)uVar8) {
      unaff_x22 = pbVar3 + -0x110;
      func_0x00010777d6bc();
      puVar14 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar3[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar8 = extraout_w8_05 == 8;
    if (!(bool)uVar8) {
      unaff_x22 = pbVar3 + -0x110;
      func_0x00010777d6d4();
      puVar14 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar3[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(pbVar3 + -0x90) = 0;
    *(undefined8 *)(pbVar3 + -0x88) = 0;
    *(undefined8 *)(pbVar3 + -0x98) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072dd514(pbVar3 + -0x98);
    func_0x00010777de3c();
    do {
      uVar8 = unaff_x21 == unaff_x24;
      if ((bool)uVar8) {
        puVar14 = pbVar3 + -0x98;
        func_0x0001073fb2d4(pbVar3 + -0x110);
        uVar25 = *(undefined8 *)(pbVar3 + -0x110);
        puVar10[1] = *(undefined8 *)(pbVar3 + -0x108);
        *puVar10 = uVar25;
        *(undefined8 *)(pbVar3 + -0x110) = 0;
        *(undefined8 *)(pbVar3 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(pbVar3 + -0x110);
        goto code_r0x000107779838;
      }
      puVar14 = (undefined1 *)*unaff_x20;
      func_0x000107323900(pbVar3 + -0x110,unaff_x21);
      bVar1 = pbVar3[-0xd8];
      unaff_x25 = (ulong)bVar1;
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar14 = pbVar3 + -0x110;
        func_0x0001072d17f4(pbVar3 + -0x98);
      }
      func_0x00010724b3d8(pbVar3 + -0x110);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar12 = (undefined8 *)(pbVar3 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar3 + -0x58));
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar13 = (undefined8 *)(pbVar3 + -0x98);
  func_0x00010724b3d8();
  pcVar24 = (code *)&SUB_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar13 + 0xd) == 0) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    puVar2 = pbVar3 + -0x250;
    *(undefined8 *)(pbVar3 + -0x150) = unaff_x28;
    *(undefined8 *)(pbVar3 + -0x148) = unaff_x27;
    *(undefined8 **)(pbVar3 + -0x140) = puVar12;
    *(undefined8 **)(pbVar3 + -0x138) = puVar10;
    *(undefined1 **)(pbVar3 + -0x130) = puVar19;
    *(undefined **)(pbVar3 + -0x128) = &SUB_1077798bc;
    puVar19 = pbVar3 + -0x130;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    *(undefined4 *)(pbVar3 + -0x1e8) = 0;
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar3[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar13 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar13 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar24 = (code *)&UNK_107779964;
    func_0x00010777d638();
    puVar12 = (undefined8 *)(pbVar3 + -0x250);
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 1;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    puVar13 = puVar13 + 1;
    puVar4 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar12;
    *(undefined8 **)(puVar2 + -0x18) = puVar10;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(code **)(puVar2 + -8) = pcVar24;
    puVar19 = puVar2 + -0x10;
    func_0x00010777d1f4();
    puVar2[-0x128] = *(undefined1 *)puVar13;
    *(undefined4 *)(puVar2 + -200) = 1;
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar13 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar13 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar24 = FUN_107779a1c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar12 = puVar4;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 2;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    puVar13 = puVar13 + 1;
    puVar5 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar12;
    *(undefined8 **)(puVar2 + -0x18) = puVar10;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(code **)(puVar2 + -8) = pcVar24;
    puVar19 = puVar2 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar2 + -0x128) = *puVar13;
    *(undefined4 *)(puVar2 + -200) = 2;
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar13 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar13 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar24 = (code *)&LAB_107779ad4;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar12 = puVar5;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 3;
  if ((bool)uVar8) {
    puVar11 = puVar13 + 1;
    puVar13 = (undefined8 *)(puVar2 + -0x130);
    puVar6 = puVar2 + -0x130;
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = puVar12;
    *(undefined8 **)(puVar2 + -0x18) = puVar10;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(code **)(puVar2 + -8) = pcVar24;
    puVar19 = puVar2 + -0x10;
    func_0x00010777d1f4(puVar14 + 8,puVar11);
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
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar24 = (code *)&UNK_107779b94;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar12 = (undefined8 *)(puVar14 + 8);
    unaff_x21 = puVar6;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 4;
  if ((bool)uVar8) {
    puVar13 = puVar13 + 1;
    puVar7 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar12;
    *(undefined8 **)(puVar2 + -0x18) = puVar10;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(code **)(puVar2 + -8) = pcVar24;
    puVar19 = puVar2 + -0x10;
    func_0x00010777d1f4();
    uVar25 = *puVar13;
    *(undefined8 *)(puVar2 + -0x120) = puVar13[1];
    *(undefined8 *)(puVar2 + -0x128) = uVar25;
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
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar24 = (code *)&UNK_107779c4c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar12 = puVar7;
  }
  puVar14 = puVar2 + -0x150;
  puVar20 = puVar2 + -0x150;
  puVar21 = puVar2 + -0x150;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(ulong *)(puVar2 + -0x48) = unaff_x25;
  *(undefined1 **)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar2 + -0x20) = puVar12;
  *(undefined8 **)(puVar2 + -0x18) = puVar10;
  *(undefined1 **)(puVar2 + -0x10) = puVar19;
  *(code **)(puVar2 + -8) = pcVar24;
  puVar19 = puVar2 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar2 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar8) {
    lVar18 = *(long *)(unaff_x21 + 0x10);
    uVar25 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)(puVar2 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)(puVar2 + -0x148) = uVar25;
    if (lVar18 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    *(undefined4 *)(puVar2 + -0xe8) = 5;
    puVar15 = (undefined1 *)puVar12[1];
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
    puVar12 = (undefined8 *)(puVar2 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar21;
  }
  else {
    uVar8 = extraout_w8_06 == 6;
    if ((bool)uVar8) {
      func_0x00010777d6c8();
      puVar15 = (undefined1 *)puVar12[1];
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
    uVar8 = extraout_w8_06 == 7;
    if ((bool)uVar8) {
      func_0x00010777d6bc();
      puVar15 = (undefined1 *)puVar12[1];
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
    uVar8 = extraout_w8_06 == 8;
    if (!(bool)uVar8) {
      func_0x00010777d6d4();
      puVar15 = (undefined1 *)puVar12[1];
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
      uVar8 = unaff_x21 == unaff_x24;
      if ((bool)uVar8) {
        puVar15 = puVar2 + -0xe0;
        func_0x000107327958(puVar2 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(puVar2 + -0xa0,unaff_x21,*puVar12);
      puVar15 = puVar2 + -0xa0;
      func_0x00010729d394(puVar2 + -0x150);
      func_0x000104c3323c(puVar2 + -0xa0);
      bVar1 = puVar2[-0x110];
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar15 = puVar2 + -0x150;
        func_0x0001072d7f34(puVar2 + -0xe0);
      }
      func_0x000107267ed0(puVar2 + -0x150);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar12 = (undefined8 *)(puVar2 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar2 + -0x58));
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar13 = (undefined8 *)(puVar2 + -0xa0);
  func_0x000107267ed0();
  puVar23 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar9 = (uint)puVar12;
  uVar17 = SUB81(puVar12,0);
  if (*(int *)(puVar13 + 0xd) == 0) {
    puVar11 = (undefined8 *)(puVar15 + 8);
    puVar14 = puVar2 + -0x210;
    *(undefined1 **)(puVar2 + -0x180) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x178) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x170) = puVar12;
    *(undefined8 **)(puVar2 + -0x168) = puVar10;
    *(undefined1 **)(puVar2 + -0x160) = puVar19;
    *(undefined **)(puVar2 + -0x158) = &UNK_107779ed8;
    puVar19 = puVar2 + -0x160;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    *(undefined4 *)(puVar2 + -0x198) = 0;
    puVar15 = (undefined1 *)*puVar11;
    unaff_x21 = puVar2 + -0x200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8;
    }
    else {
      puVar2[-0x201] = uVar17;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(puVar10 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar23 = &UNK_107779f6c;
    puVar13 = puVar11;
    func_0x00010777d638();
    puVar10 = puVar11;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 1;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar15 + 8);
    *(undefined1 **)(puVar14 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar14 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar14 + -0x20) = puVar12;
    *(undefined8 **)(puVar14 + -0x18) = puVar10;
    *(undefined1 **)(puVar14 + -0x10) = puVar19;
    *(undefined **)(puVar14 + -8) = puVar23;
    puVar19 = puVar14 + -0x10;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    unaff_x21 = puVar14 + -0xb0;
    func_0x00010777dae0();
    puVar15 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_00;
    }
    else {
      puVar14[-0xb1] = uVar17;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(puVar10 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar23 = &UNK_10777a170;
    puVar13 = puVar11;
    func_0x00010777d638();
    puVar14 = puVar14 + -0xc0;
    puVar10 = puVar11;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 2;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar15 + 8);
    *(undefined1 **)(puVar14 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar14 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar14 + -0x20) = puVar12;
    *(undefined8 **)(puVar14 + -0x18) = puVar10;
    *(undefined1 **)(puVar14 + -0x10) = puVar19;
    *(undefined **)(puVar14 + -8) = puVar23;
    puVar19 = puVar14 + -0x10;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    unaff_x21 = puVar14 + -0xb0;
    func_0x00010777dacc();
    puVar15 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar17 = extraout_w8_01;
    }
    else {
      puVar14[-0xb1] = uVar17;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar17 = 1;
    }
    *(undefined1 *)(puVar10 + 2) = uVar17;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar23 = &UNK_10777a208;
    puVar13 = puVar11;
    func_0x00010777d638();
    puVar14 = puVar14 + -0xc0;
    puVar10 = puVar11;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 3;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar15 + 8);
    *(undefined1 **)(puVar14 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar14 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar14 + -0x20) = puVar12;
    *(undefined8 **)(puVar14 + -0x18) = puVar10;
    *(undefined1 **)(puVar14 + -0x10) = puVar19;
    *(undefined **)(puVar14 + -8) = puVar23;
    puVar19 = puVar14 + -0x10;
    puVar12 = puVar11;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    func_0x00010777dd10();
    puVar15 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar17 = extraout_w8_02;
    }
    else {
      puVar14[-0xb1] = (char)puVar11;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar17 = 1;
    }
    *(undefined1 *)(puVar10 + 2) = uVar17;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar23 = &UNK_10777a2a0;
    puVar13 = puVar12;
    func_0x00010777d638();
    puVar14 = puVar14 + -0xc0;
    puVar10 = puVar12;
    puVar12 = puVar11;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 4;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar15 + 8);
    *(undefined1 **)(puVar14 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar14 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar14 + -0x20) = puVar12;
    *(undefined8 **)(puVar14 + -0x18) = puVar10;
    *(undefined1 **)(puVar14 + -0x10) = puVar19;
    *(undefined **)(puVar14 + -8) = puVar23;
    puVar19 = puVar14 + -0x10;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    unaff_x21 = puVar14 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar12 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar17 = extraout_w8_03;
    }
    else {
      puVar14[-0xb1] = (char)puVar12;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar17 = 1;
    }
    *(undefined1 *)(puVar10 + 2) = uVar17;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar23 = &UNK_10777a338;
    puVar13 = puVar11;
    func_0x00010777d638();
    puVar14 = puVar14 + -0xc0;
    puVar10 = puVar11;
  }
  uVar9 = (uint)puVar13;
  *(undefined1 **)(puVar14 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar14 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar14 + -0x20) = puVar12;
  *(undefined8 **)(puVar14 + -0x18) = puVar10;
  *(undefined1 **)(puVar14 + -0x10) = puVar19;
  *(undefined **)(puVar14 + -8) = puVar23;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar8) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar12 >> 8 & 1) != 0) {
      puVar14[-0xc0] = (char)puVar12;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar17 = extraout_w8_04;
  }
  else {
    uVar8 = extraout_w8_07 == 6;
    if ((bool)uVar8) {
      unaff_x22 = puVar14 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar14[-0xc0] = (char)uVar9;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar8 = extraout_w8_07 == 7;
      if ((bool)uVar8) {
        unaff_x22 = puVar14 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar14[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar8 = extraout_w8_07 == 8;
        if ((bool)uVar8) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar14 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar19 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar8 = puVar19 == unaff_x22, !(bool)uVar8; puVar19 = puVar19 + 0x70) {
            puVar2 = puVar19;
            func_0x000107775a54(puVar19,*puVar12);
            *(short *)(puVar14 + -0xc0) = (short)puVar2;
            if (((uint)puVar2 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar14 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar14 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar14[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar17 = 1;
  }
  *(undefined1 *)(puVar10 + 2) = uVar17;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar14 + -0xd0) = puVar14 + -0x10;
  *(undefined8 *)(puVar14 + -200) = 0x10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779a1c; end: 107779a3f;  */

void FUN_107779a1c(long *param_1,long param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 extraout_w8;
  undefined1 uVar13;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar14;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  undefined8 extraout_x8;
  long lVar15;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar16;
  undefined1 *unaff_x22;
  undefined1 *puVar17;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar18;
  undefined8 uVar19;
  byte abStack_960 [2104];
  long lStack_128;
  undefined4 uStack_c8;
  byte bStack_40;
  
  uVar5 = (int)param_1[0xd] == 2;
  if ((bool)uVar5) {
    plVar7 = (long *)(param_2 + 8);
    param_1 = param_1 + 1;
    unaff_x20 = abStack_960 + 0x830;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4();
    lStack_128 = *param_1;
    uStack_c8 = 2;
    param_2 = *plVar7;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((bStack_40 & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar7;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      param_1 = plVar7;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = &LAB_107779ad4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_960 + 0x830);
  }
  uVar5 = (int)param_1[0xd] == 3;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    param_1 = (long *)((long)register0x00000008 + -0x130);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x130);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4((undefined8 *)(param_2 + 8),plVar7);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0x40) & 1) == 0) {
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
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = &UNK_107779b94;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
    unaff_x20 = (byte *)(param_2 + 8);
    unaff_x21 = puVar2;
  }
  uVar5 = (int)param_1[0xd] == 4;
  if ((bool)uVar5) {
    param_1 = param_1 + 1;
    puVar3 = (undefined8 *)((long)register0x00000008 + -0x130);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x27;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    lVar15 = *param_1;
    *(long *)((long)register0x00000008 + -0x120) = param_1[1];
    *(long *)((long)register0x00000008 + -0x128) = lVar15;
    *(undefined4 *)((long)register0x00000008 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x40) & 1) == 0) {
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
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = &UNK_107779c4c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
    unaff_x20 = (byte *)puVar3;
  }
  puVar4 = (undefined1 *)((long)register0x00000008 + -0x150);
  puVar17 = (undefined1 *)((long)register0x00000008 + -0x150);
  puVar11 = (undefined1 *)((long)register0x00000008 + -0x150);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar16 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar5) {
    lVar15 = *(long *)(unaff_x21 + 0x10);
    uVar19 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)((long)register0x00000008 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x148) = uVar19;
    if (lVar15 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    *(undefined4 *)((long)register0x00000008 + -0xe8) = 5;
    puVar12 = *(undefined1 **)((long)unaff_x20 + 8);
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x150);
    puVar11 = unaff_x22;
    if ((*(byte *)((long)register0x00000008 + -0x60) & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x150);
      puVar17 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar8 = (undefined8 *)((long)register0x00000008 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar11;
  }
  else {
    uVar5 = extraout_w8_05 == 6;
    if ((bool)uVar5) {
      func_0x00010777d6c8();
      puVar12 = *(undefined1 **)((long)unaff_x20 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar11 = (undefined1 *)((long)register0x00000008 + -0x150);
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar17 = (undefined1 *)((long)register0x00000008 + -0x150);
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar17;
      goto code_r0x000107779dfc;
    }
    uVar5 = extraout_w8_05 == 7;
    if ((bool)uVar5) {
      func_0x00010777d6bc();
      puVar12 = *(undefined1 **)((long)unaff_x20 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar11 = (undefined1 *)((long)register0x00000008 + -0x150);
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar17 = (undefined1 *)((long)register0x00000008 + -0x150);
      goto code_r0x000107779dec;
    }
    uVar5 = extraout_w8_05 == 8;
    if (!(bool)uVar5) {
      func_0x00010777d6d4();
      puVar12 = *(undefined1 **)((long)unaff_x20 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x00010777de3c();
    do {
      uVar5 = unaff_x21 == unaff_x24;
      if ((bool)uVar5) {
        puVar12 = (undefined1 *)((long)register0x00000008 + -0xe0);
        func_0x000107327958((undefined1 *)((long)register0x00000008 + -0x150));
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804((undefined1 *)((long)register0x00000008 + -0xa0),unaff_x21,
                          *(undefined8 *)unaff_x20);
      puVar12 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x00010729d394((undefined1 *)((long)register0x00000008 + -0x150));
      func_0x000104c3323c((undefined1 *)((long)register0x00000008 + -0xa0));
      bVar1 = *(byte *)((long)register0x00000008 + -0x110);
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x150);
        func_0x0001072d7f34((undefined1 *)((long)register0x00000008 + -0xe0));
      }
      func_0x000107267ed0((undefined1 *)((long)register0x00000008 + -0x150));
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar8 = (undefined8 *)((long)register0x00000008 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)((long)register0x00000008 + -0x58));
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar9 = (undefined8 *)((long)register0x00000008 + -0xa0);
  func_0x000107267ed0();
  puVar18 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar6 = (uint)puVar8;
  uVar14 = SUB81(puVar8,0);
  if (*(int *)(puVar9 + 0xd) == 0) {
    puVar10 = (undefined8 *)(puVar12 + 8);
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x210);
    *(undefined1 **)((long)register0x00000008 + -0x180) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x178) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x170) = puVar8;
    *(undefined8 **)((long)register0x00000008 + -0x168) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x160) = puVar16;
    *(undefined **)((long)register0x00000008 + -0x158) = &UNK_107779ed8;
    puVar16 = (undefined1 *)((long)register0x00000008 + -0x160);
    func_0x00010777d1f4(puVar10,puVar9 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x198) = 0;
    puVar12 = (undefined1 *)*puVar10;
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar6 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar13 = extraout_w8;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0x201) = uVar14;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar13 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar13;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    puVar18 = &UNK_107779f6c;
    puVar9 = puVar10;
    func_0x00010777d638();
    unaff_x19 = puVar10;
  }
  uVar5 = *(int *)(puVar9 + 0xd) == 1;
  if ((bool)uVar5) {
    puVar10 = (undefined8 *)(puVar12 + 8);
    *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar4 + -0x20) = puVar8;
    *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar16;
    *(undefined **)(puVar4 + -8) = puVar18;
    puVar16 = puVar4 + -0x10;
    func_0x00010777d1f4(puVar10,puVar9 + 1);
    unaff_x21 = puVar4 + -0xb0;
    func_0x00010777dae0();
    puVar12 = (undefined1 *)*puVar10;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar6 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar13 = extraout_w8_00;
    }
    else {
      puVar4[-0xb1] = uVar14;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar13 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar13;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    puVar18 = &UNK_10777a170;
    puVar9 = puVar10;
    func_0x00010777d638();
    puVar4 = puVar4 + -0xc0;
    unaff_x19 = puVar10;
  }
  uVar5 = *(int *)(puVar9 + 0xd) == 2;
  if ((bool)uVar5) {
    puVar10 = (undefined8 *)(puVar12 + 8);
    *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar4 + -0x20) = puVar8;
    *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar16;
    *(undefined **)(puVar4 + -8) = puVar18;
    puVar16 = puVar4 + -0x10;
    func_0x00010777d1f4(puVar10,puVar9 + 1);
    unaff_x21 = puVar4 + -0xb0;
    func_0x00010777dacc();
    puVar12 = (undefined1 *)*puVar10;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar6 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8_01;
    }
    else {
      puVar4[-0xb1] = uVar14;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar14 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar14;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    puVar18 = &UNK_10777a208;
    puVar9 = puVar10;
    func_0x00010777d638();
    puVar4 = puVar4 + -0xc0;
    unaff_x19 = puVar10;
  }
  uVar5 = *(int *)(puVar9 + 0xd) == 3;
  if ((bool)uVar5) {
    puVar10 = (undefined8 *)(puVar12 + 8);
    *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar4 + -0x20) = puVar8;
    *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar16;
    *(undefined **)(puVar4 + -8) = puVar18;
    puVar16 = puVar4 + -0x10;
    puVar8 = puVar10;
    func_0x00010777d1f4(puVar10,puVar9 + 1);
    func_0x00010777dd10();
    puVar12 = (undefined1 *)*puVar10;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8_02;
    }
    else {
      puVar4[-0xb1] = (char)puVar10;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar14 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar14;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    puVar18 = &UNK_10777a2a0;
    puVar9 = puVar8;
    func_0x00010777d638();
    puVar4 = puVar4 + -0xc0;
    unaff_x19 = puVar8;
    puVar8 = puVar10;
  }
  uVar5 = *(int *)(puVar9 + 0xd) == 4;
  if ((bool)uVar5) {
    puVar10 = (undefined8 *)(puVar12 + 8);
    *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar4 + -0x20) = puVar8;
    *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar16;
    *(undefined **)(puVar4 + -8) = puVar18;
    puVar16 = puVar4 + -0x10;
    func_0x00010777d1f4(puVar10,puVar9 + 1);
    unaff_x21 = puVar4 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8_03;
    }
    else {
      puVar4[-0xb1] = (char)puVar8;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar14 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar14;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    puVar18 = &UNK_10777a338;
    puVar9 = puVar10;
    func_0x00010777d638();
    puVar4 = puVar4 + -0xc0;
    unaff_x19 = puVar10;
  }
  uVar6 = (uint)puVar9;
  *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar4 + -0x20) = puVar8;
  *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar16;
  *(undefined **)(puVar4 + -8) = puVar18;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar5) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar8 >> 8 & 1) != 0) {
      puVar4[-0xc0] = (char)puVar8;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar14 = extraout_w8_04;
  }
  else {
    uVar5 = extraout_w8_06 == 6;
    if ((bool)uVar5) {
      unaff_x22 = puVar4 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar6 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar4[-0xc0] = (char)uVar6;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar5 = extraout_w8_06 == 7;
      if ((bool)uVar5) {
        unaff_x22 = puVar4 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar6 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar4[-0xc0] = (char)uVar6;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar5 = extraout_w8_06 == 8;
        if ((bool)uVar5) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar4 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar16 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar5 = puVar16 == unaff_x22, !(bool)uVar5; puVar16 = puVar16 + 0x70) {
            puVar11 = puVar16;
            func_0x000107775a54(puVar16,*puVar8);
            *(short *)(puVar4 + -0xc0) = (short)puVar11;
            if (((uint)puVar11 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar4 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar4 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar6 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar4[-0xc0] = (char)uVar6;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar14 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar14;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0x10;
  *(undefined8 *)(puVar4 + -200) = 0x10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779ef8; end: 107779f6b;  */

void FUN_107779ef8(long *param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar9;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  uint uVar10;
  long *unaff_x20;
  undefined1 *puVar11;
  undefined1 *unaff_x22;
  undefined8 *******pppppppuVar12;
  undefined *puVar13;
  undefined1 auStack_480 [784];
  undefined1 auStack_170 [128];
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [15];
  undefined1 uStack_b1;
  undefined1 auStack_b0 [104];
  undefined4 uStack_48;
  
  puVar1 = auStack_c0;
  pppppppuVar12 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  uStack_48 = 0;
  lVar8 = *param_1;
  puVar11 = auStack_b0;
  func_0x00010777d948();
  func_0x00010777d5ec();
  uVar10 = (uint)unaff_x20;
  uVar3 = SUB81(unaff_x20,0);
  if ((uVar10 >> 8 & 1) == 0) {
    func_0x00010777d748();
    uVar2 = extraout_w8;
  }
  else {
    uStack_b1 = uVar3;
    func_0x00010777d530();
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar2 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar2;
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = &UNK_107779f6c;
  plVar4 = param_1;
  func_0x00010777d638();
  uVar2 = (int)plVar4[0xd] == 1;
  if ((bool)uVar2) {
    plVar5 = (long *)(lVar8 + 8);
    puVar1 = auStack_480 + 0x300;
    puStack_c8 = &UNK_107779f6c;
    ppppppuStack_d0 = pppppppuVar12;
    func_0x00010777d1f4(plVar5,plVar4 + 1);
    puVar11 = auStack_170;
    func_0x00010777dae0();
    lVar8 = *plVar5;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8_00;
    }
    else {
      auStack_480[0x30f] = uVar3;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    puVar13 = &UNK_10777a170;
    plVar4 = plVar5;
    func_0x00010777d638();
    param_1 = plVar5;
    pppppppuVar12 = &ppppppuStack_d0;
  }
  uVar2 = (int)plVar4[0xd] == 2;
  if ((bool)uVar2) {
    plVar5 = (long *)(lVar8 + 8);
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = puVar11;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar12;
    *(undefined **)(puVar1 + -8) = puVar13;
    pppppppuVar12 = (undefined8 *******)(puVar1 + -0x10);
    func_0x00010777d1f4(plVar5,plVar4 + 1);
    puVar11 = puVar1 + -0xb0;
    func_0x00010777dacc();
    lVar8 = *plVar5;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar3 = extraout_w8_01;
    }
    else {
      puVar1[-0xb1] = uVar3;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar3;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    puVar13 = &UNK_10777a208;
    plVar4 = plVar5;
    func_0x00010777d638();
    puVar1 = puVar1 + -0xc0;
    param_1 = plVar5;
  }
  uVar3 = (int)plVar4[0xd] == 3;
  if ((bool)uVar3) {
    plVar5 = (long *)(lVar8 + 8);
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = puVar11;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar12;
    *(undefined **)(puVar1 + -8) = puVar13;
    pppppppuVar12 = (undefined8 *******)(puVar1 + -0x10);
    plVar6 = plVar5;
    func_0x00010777d1f4(plVar5,plVar4 + 1);
    func_0x00010777dd10();
    lVar8 = *plVar5;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar2 = extraout_w8_02;
    }
    else {
      puVar1[-0xb1] = (char)plVar5;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar2;
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    puVar13 = &UNK_10777a2a0;
    plVar4 = plVar6;
    func_0x00010777d638();
    puVar1 = puVar1 + -0xc0;
    param_1 = plVar6;
    unaff_x20 = plVar5;
  }
  uVar3 = (int)plVar4[0xd] == 4;
  if ((bool)uVar3) {
    plVar5 = (long *)(lVar8 + 8);
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = puVar11;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar12;
    *(undefined **)(puVar1 + -8) = puVar13;
    pppppppuVar12 = (undefined8 *******)(puVar1 + -0x10);
    func_0x00010777d1f4(plVar5,plVar4 + 1);
    puVar11 = puVar1 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar2 = extraout_w8_03;
    }
    else {
      puVar1[-0xb1] = (char)unaff_x20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar2;
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    puVar13 = &UNK_10777a338;
    plVar4 = plVar5;
    func_0x00010777d638();
    puVar1 = puVar1 + -0xc0;
    param_1 = plVar5;
  }
  uVar10 = (uint)plVar4;
  *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar1 + -0x28) = puVar11;
  *(long **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar12;
  *(undefined **)(puVar1 + -8) = puVar13;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar3) {
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
      puVar1[-0xc0] = (char)unaff_x20;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar2 = extraout_w8_04;
  }
  else {
    uVar3 = extraout_w8_05 == 6;
    if ((bool)uVar3) {
      unaff_x22 = puVar1 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar1[-0xc0] = (char)uVar10;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar3 = extraout_w8_05 == 7;
      if ((bool)uVar3) {
        unaff_x22 = puVar1 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar1[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar3 = extraout_w8_05 == 8;
        if ((bool)uVar3) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(puVar11 + 8));
          func_0x0001075356bc(puVar1 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(puVar11 + 8))[1];
          for (puVar11 = (undefined1 *)**(undefined8 **)(puVar11 + 8); uVar3 = puVar11 == unaff_x22,
              !(bool)uVar3; puVar11 = puVar11 + 0x70) {
            puVar7 = puVar11;
            func_0x000107775a54(puVar11,*unaff_x20);
            *(short *)(puVar1 + -0xc0) = (short)puVar7;
            if (((uint)puVar7 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar1 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar1 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar1[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar2;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0x10;
  *(undefined8 *)(puVar1 + -200) = 0x10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 10777a0fc; end: 10777a16f;  */

void FUN_10777a0fc(long *param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar9;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  int extraout_w8_04;
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long *unaff_x20;
  undefined1 *puVar10;
  undefined1 *unaff_x22;
  undefined8 *******pppppppuVar11;
  undefined *puVar12;
  undefined1 auStack_3c0 [592];
  undefined1 auStack_170 [128];
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [15];
  undefined1 uStack_b1;
  undefined1 auStack_b0 [128];
  
  puVar1 = auStack_c0;
  pppppppuVar11 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  puVar10 = auStack_b0;
  func_0x00010777dae0();
  lVar8 = *param_1;
  func_0x00010777d948();
  func_0x00010777d5ec();
  if (((uint)unaff_x20 >> 8 & 1) == 0) {
    func_0x00010777d748();
    uVar2 = extraout_w8;
  }
  else {
    uStack_b1 = (char)unaff_x20;
    func_0x00010777d530();
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar2 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar2;
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = &UNK_10777a170;
  plVar4 = param_1;
  func_0x00010777d638();
  uVar2 = (int)plVar4[0xd] == 2;
  if ((bool)uVar2) {
    plVar5 = (long *)(lVar8 + 8);
    puVar1 = auStack_3c0 + 0x240;
    puStack_c8 = &UNK_10777a170;
    ppppppuStack_d0 = pppppppuVar11;
    func_0x00010777d1f4(plVar5,plVar4 + 1);
    puVar10 = auStack_170;
    func_0x00010777dacc();
    lVar8 = *plVar5;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8_00;
    }
    else {
      auStack_3c0[0x24f] = (char)unaff_x20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    puVar12 = &UNK_10777a208;
    plVar4 = plVar5;
    func_0x00010777d638();
    param_1 = plVar5;
    pppppppuVar11 = &ppppppuStack_d0;
  }
  uVar2 = (int)plVar4[0xd] == 3;
  if ((bool)uVar2) {
    plVar5 = (long *)(lVar8 + 8);
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = puVar10;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar11;
    *(undefined **)(puVar1 + -8) = puVar12;
    pppppppuVar11 = (undefined8 *******)(puVar1 + -0x10);
    plVar6 = plVar5;
    func_0x00010777d1f4(plVar5,plVar4 + 1);
    func_0x00010777dd10();
    lVar8 = *plVar5;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8_01;
    }
    else {
      puVar1[-0xb1] = (char)plVar5;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    puVar12 = &UNK_10777a2a0;
    plVar4 = plVar6;
    func_0x00010777d638();
    puVar1 = puVar1 + -0xc0;
    param_1 = plVar6;
    unaff_x20 = plVar5;
  }
  uVar2 = (int)plVar4[0xd] == 4;
  if ((bool)uVar2) {
    plVar5 = (long *)(lVar8 + 8);
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = puVar10;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar11;
    *(undefined **)(puVar1 + -8) = puVar12;
    pppppppuVar11 = (undefined8 *******)(puVar1 + -0x10);
    func_0x00010777d1f4(plVar5,plVar4 + 1);
    puVar10 = puVar1 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8_02;
    }
    else {
      puVar1[-0xb1] = (char)unaff_x20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar9;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    puVar12 = &UNK_10777a338;
    plVar4 = plVar5;
    func_0x00010777d638();
    puVar1 = puVar1 + -0xc0;
    param_1 = plVar5;
  }
  uVar3 = (uint)plVar4;
  *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar1 + -0x28) = puVar10;
  *(long **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar11;
  *(undefined **)(puVar1 + -8) = puVar12;
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
      puVar1[-0xc0] = (char)unaff_x20;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar9 = extraout_w8_03;
  }
  else {
    uVar2 = extraout_w8_04 == 6;
    if ((bool)uVar2) {
      unaff_x22 = puVar1 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar3 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar1[-0xc0] = (char)uVar3;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar2 = extraout_w8_04 == 7;
      if ((bool)uVar2) {
        unaff_x22 = puVar1 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar3 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar1[-0xc0] = (char)uVar3;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar2 = extraout_w8_04 == 8;
        if ((bool)uVar2) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(puVar10 + 8));
          func_0x0001075356bc(puVar1 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(puVar10 + 8))[1];
          for (puVar10 = (undefined1 *)**(undefined8 **)(puVar10 + 8); uVar2 = puVar10 == unaff_x22,
              !(bool)uVar2; puVar10 = puVar10 + 0x70) {
            puVar7 = puVar10;
            func_0x000107775a54(puVar10,*unaff_x20);
            *(short *)(puVar1 + -0xc0) = (short)puVar7;
            if (((uint)puVar7 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar1 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar1 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar3 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar1[-0xc0] = (char)uVar3;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar9 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar9;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0x10;
  *(undefined8 *)(puVar1 + -200) = 0x10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 10777a500; end: 10777a577;  */

void FUN_10777a500(void)

{
  func_0x00010777a518();
  return;
}



/* Entry: 10777a8d0; end: 10777a92f;  */

undefined1  [16] FUN_10777a8d0(long *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  undefined1 *puVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined1 extraout_w8_05;
  undefined1 extraout_w8_06;
  undefined1 extraout_w8_07;
  undefined1 extraout_w8_08;
  undefined1 extraout_w8_09;
  undefined1 extraout_w8_10;
  undefined1 extraout_w8_11;
  undefined1 uVar17;
  undefined1 *extraout_x8;
  long lVar18;
  undefined1 *extraout_x8_00;
  undefined4 *extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 extraout_x11;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar19;
  undefined1 *puVar20;
  code *pcVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  char acStack_b2c [2476];
  long *plStack_180;
  long *plStack_178;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [104];
  undefined4 uStack_f0;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  char *pcVar5;
  
  func_0x00010777d274();
  func_0x00010777de10();
  puVar12 = (undefined8 *)*param_1;
  func_0x00010777d938();
  puVar13 = puVar12;
  func_0x00010777d640();
  bVar9 = ((ulong)puVar12 & 1) == 0;
  if (bVar9) {
    param_1 = (long *)0x0;
  }
  func_0x00010777d1dc();
  if (bVar9) {
    uVar1 = (ulong)puVar12 & 0xff | ((ulong)puVar12 & 1) << 0x20;
    plVar11 = param_1;
LAB_10777d7ac:
    auVar31._8_8_ = uVar1;
    auVar31._0_8_ = plVar11;
    return auVar31;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  pcVar5 = auStack_160;
  puStack_b8 = &UNK_10777a930;
  ppppuVar19 = (undefined8 ****)&ppuStack_c0;
  ppuStack_c0 = (undefined8 **)&stack0xfffffffffffffff0;
  func_0x00010777d31c(param_1);
  switch((int)param_1[0xd]) {
  case 3:
    func_0x00010777dd90();
    plVar14 = (long *)*puVar13;
    func_0x00010777d938();
    break;
  case 4:
    plVar14 = (long *)*puVar13;
    func_0x00010777ddd8();
    uStack_f0 = 4;
    func_0x00010777d938();
    break;
  case 5:
    func_0x00010777ddd8();
    if (extraout_x9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    uStack_f0 = 5;
    plVar14 = (long *)*puVar13;
    func_0x00010777d938();
    break;
  case 6:
    func_0x00010777dde4();
    func_0x000107348eb0();
    plVar14 = (long *)*puVar13;
    func_0x00010777d938();
    break;
  case 7:
    func_0x00010777dde4();
    func_0x000107348ecc();
    plVar14 = (long *)*puVar13;
    func_0x00010777d938();
    break;
  default:
    if ((int)param_1[0xd] == 8) {
      func_0x00010777dde4();
      func_0x0001075726b8();
      plVar14 = (long *)*puVar13;
      func_0x00010777d938();
    }
    else {
      func_0x00010777dde4();
      func_0x0001074fd134();
      plVar14 = (long *)*puVar13;
      func_0x00010777d938();
    }
  }
  plVar16 = plVar14;
  func_0x00010777d640();
  bVar9 = ((ulong)plVar14 & 1) == 0;
  plVar11 = param_1;
  if (bVar9) {
    plVar11 = (long *)0x0;
  }
  func_0x00010777d1dc();
  if (bVar9) {
    uVar1 = (ulong)plVar14 & 0xff | ((ulong)plVar14 & 1) << 0x20;
    goto LAB_10777d7ac;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  pcVar21 = (code *)&UNK_10777aa94;
  func_0x00010777d638();
  if ((int)plVar11[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x14] = 0;
    auVar25._8_8_ = plVar16;
    auVar25._0_8_ = plVar11;
    return auVar25;
  }
  uVar10 = (int)plVar11[0xd] == 1;
  if ((bool)uVar10) {
    pcVar5 = acStack_b2c + 0x91c;
    puStack_168 = &UNK_10777aa94;
    plStack_180 = param_1;
    plStack_178 = plVar14;
    pppuStack_170 = ppppuVar19;
    func_0x00010777d224(plVar16,plVar11 + 1);
    func_0x00010777d8d4();
    plVar15 = (long *)*plVar16;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((acStack_b2c[0x930] & 1U) == 0) {
      func_0x00010777d748();
      plVar11 = plVar16;
      uVar17 = extraout_w8_00;
    }
    else {
      func_0x00010777d410();
      plVar11 = plVar16;
      uVar17 = extraout_w8;
    }
    *(undefined1 *)((long)plVar14 + 0x14) = uVar17;
    func_0x00010777d20c();
    if ((bool)uVar10) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d380();
    pcVar21 = (code *)&UNK_10777ab28;
    func_0x00010777d638();
    plVar16 = plVar15;
    ppppuVar19 = &pppuStack_170;
  }
  uVar10 = (int)plVar11[0xd] == 2;
  if ((bool)uVar10) {
    *(long **)(pcVar5 + -0x20) = param_1;
    *(long **)(pcVar5 + -0x18) = plVar14;
    *(undefined8 *****)(pcVar5 + -0x10) = ppppuVar19;
    *(code **)(pcVar5 + -8) = pcVar21;
    ppppuVar19 = (undefined8 ****)(pcVar5 + -0x10);
    func_0x00010777d224(plVar16,plVar11 + 1);
    func_0x00010777d904();
    plVar15 = (long *)*plVar16;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((pcVar5[-0x9c] & 1U) == 0) {
      func_0x00010777d748();
      plVar11 = plVar16;
      uVar17 = extraout_w8_02;
    }
    else {
      func_0x00010777d410();
      plVar11 = plVar16;
      uVar17 = extraout_w8_01;
    }
    *(undefined1 *)((long)plVar14 + 0x14) = uVar17;
    func_0x00010777d20c();
    if ((bool)uVar10) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d380();
    pcVar21 = (code *)&UNK_10777aba4;
    func_0x00010777d638();
    pcVar5 = pcVar5 + -0xb0;
    plVar16 = plVar15;
  }
  uVar10 = (int)plVar11[0xd] == 3;
  plVar15 = plVar16;
  if ((bool)uVar10) {
    plVar15 = plVar11 + 1;
    *(undefined8 *)(pcVar5 + -0x30) = unaff_x22;
    *(undefined1 **)(pcVar5 + -0x28) = auStack_158;
    *(long **)(pcVar5 + -0x20) = param_1;
    *(long **)(pcVar5 + -0x18) = plVar14;
    *(undefined8 *****)(pcVar5 + -0x10) = ppppuVar19;
    *(code **)(pcVar5 + -8) = pcVar21;
    ppppuVar19 = (undefined8 ****)(pcVar5 + -0x10);
    plVar11 = plVar16;
    func_0x00010777d1f4(plVar16,plVar15);
    func_0x00010777dd3c();
    plVar15 = (long *)*plVar16;
    func_0x00010777d484();
    func_0x00010777d640();
    if ((pcVar5[-0xac] & 1U) == 0) {
      func_0x00010777d748();
      uVar17 = extraout_w8_04;
    }
    else {
      func_0x00010777d410();
      uVar17 = extraout_w8_03;
    }
    *(undefined1 *)((long)plVar14 + 0x14) = uVar17;
    func_0x00010777d1dc();
    if ((bool)uVar10) goto LAB_10777d288;
    ___stack_chk_fail();
    func_0x00010777d38c();
    pcVar21 = FUN_10777ac28;
    func_0x00010777d638();
    pcVar5 = pcVar5 + -0xc0;
    param_1 = plVar16;
  }
  uVar10 = (int)plVar11[0xd] == 4;
  if ((bool)uVar10) {
    *(long **)(pcVar5 + -0x20) = param_1;
    *(long **)(pcVar5 + -0x18) = plVar14;
    *(undefined8 *****)(pcVar5 + -0x10) = ppppuVar19;
    *(code **)(pcVar5 + -8) = pcVar21;
    ppppuVar19 = (undefined8 ****)(pcVar5 + -0x10);
    func_0x00010777d224(plVar15,plVar11 + 1);
    func_0x00010777d8ec();
    plVar16 = (long *)*plVar15;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((pcVar5[-0x9c] & 1U) == 0) {
      func_0x00010777d748();
      plVar11 = plVar15;
      plVar15 = plVar16;
      uVar17 = extraout_w8_06;
    }
    else {
      func_0x00010777d410();
      plVar11 = plVar15;
      plVar15 = plVar16;
      uVar17 = extraout_w8_05;
    }
    *(undefined1 *)((long)plVar14 + 0x14) = uVar17;
    func_0x00010777d20c();
    if ((bool)uVar10) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d380();
    pcVar21 = (code *)&LAB_10777aca4;
    func_0x00010777d638();
    pcVar5 = pcVar5 + -0xb0;
  }
  uVar10 = (int)plVar11[0xd] == 5;
  if ((bool)uVar10) {
    plVar11 = plVar11 + 1;
    *(long **)(pcVar5 + -0x20) = param_1;
    *(long **)(pcVar5 + -0x18) = plVar14;
    *(undefined8 *****)(pcVar5 + -0x10) = ppppuVar19;
    *(code **)(pcVar5 + -8) = pcVar21;
    ppppuVar19 = (undefined8 ****)(pcVar5 + -0x10);
    func_0x00010777d224();
    lVar18 = plVar11[1];
    lVar23 = *plVar11;
    *(long *)(pcVar5 + -0x88) = plVar11[1];
    *(long *)(pcVar5 + -0x90) = lVar23;
    plVar11 = plVar15;
    if (lVar18 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dc70();
    plVar15 = (long *)*plVar11;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((pcVar5[-0x9c] & 1U) == 0) {
      func_0x00010777d748();
      uVar17 = extraout_w8_08;
    }
    else {
      func_0x00010777d410();
      uVar17 = extraout_w8_07;
    }
    *(undefined1 *)((long)plVar14 + 0x14) = uVar17;
    func_0x00010777d20c();
    if ((bool)uVar10) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d380();
    pcVar21 = (code *)&UNK_10777ad3c;
    func_0x00010777d638();
    pcVar5 = pcVar5 + -0xb0;
  }
  puVar4 = pcVar5 + -0xc0;
  *(undefined8 *)(pcVar5 + -0x30) = unaff_x22;
  *(undefined1 **)(pcVar5 + -0x28) = auStack_158;
  *(long **)(pcVar5 + -0x20) = param_1;
  *(long **)(pcVar5 + -0x18) = plVar14;
  *(undefined8 *****)(pcVar5 + -0x10) = ppppuVar19;
  *(code **)(pcVar5 + -8) = pcVar21;
  puVar20 = pcVar5 + -0x10;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)plVar11[0xd];
  uVar10 = iVar2 == 6;
  if ((bool)uVar10) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    plVar15 = (long *)*param_1;
    func_0x00010777d484();
  }
  else {
    uVar10 = iVar2 == 7;
    if ((bool)uVar10) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      plVar15 = (long *)*param_1;
      func_0x00010777d484();
    }
    else {
      uVar10 = iVar2 == 8;
      if ((bool)uVar10) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        plVar15 = (long *)*param_1;
        func_0x00010777d484();
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        plVar15 = (long *)*param_1;
        func_0x00010777d484();
      }
    }
  }
  func_0x00010777d640();
  if ((pcVar5[-0xac] & 1U) == 0) {
    func_0x00010777d748();
    uVar17 = extraout_w8_10;
  }
  else {
    func_0x00010777d410();
    uVar17 = extraout_w8_09;
  }
  *(undefined1 *)((long)plVar14 + 0x14) = uVar17;
  func_0x00010777d1dc();
  if ((bool)uVar10) goto LAB_10777d288;
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar22 = &UNK_10777ae10;
  func_0x00010777d638();
  if ((int)plVar11[0xd] == 0) {
    *extraout_x8_00 = 0;
    extraout_x8_00[0x18] = 0;
    auVar26._8_8_ = plVar15;
    auVar26._0_8_ = plVar11;
    return auVar26;
  }
  uVar10 = (int)plVar11[0xd] == 1;
  plVar16 = plVar15;
  if ((bool)uVar10) {
    plVar16 = plVar11 + 1;
    puVar4 = pcVar5 + -0x170;
    *(long **)(pcVar5 + -0xe0) = param_1;
    *(long **)(pcVar5 + -0xd8) = plVar14;
    *(undefined1 **)(pcVar5 + -0xd0) = puVar20;
    *(undefined **)(pcVar5 + -200) = &UNK_10777ae10;
    puVar20 = pcVar5 + -0xd0;
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar5[-0x160] & 1U) == 0) {
      func_0x00010777db94();
      plVar11 = plVar15;
      plVar15 = plVar16;
    }
    else {
      func_0x00010777d4d8();
      plVar11 = plVar15;
      plVar15 = plVar16;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar10) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar22 = &UNK_10777aeac;
    func_0x00010777d638();
    plVar16 = plVar15;
  }
  uVar10 = (int)plVar11[0xd] == 2;
  if ((bool)uVar10) {
    plVar15 = plVar11 + 1;
    *(long **)(puVar4 + -0x20) = param_1;
    *(long **)(puVar4 + -0x18) = plVar14;
    *(undefined1 **)(puVar4 + -0x10) = puVar20;
    *(undefined **)(puVar4 + -8) = puVar22;
    puVar20 = puVar4 + -0x10;
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar4[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      plVar11 = plVar16;
    }
    else {
      func_0x00010777d4d8();
      plVar11 = plVar16;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar10) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar22 = &UNK_10777af30;
    func_0x00010777d638();
    puVar4 = puVar4 + -0xb0;
    plVar16 = plVar15;
  }
  uVar10 = (int)plVar11[0xd] == 3;
  plVar15 = plVar16;
  if ((bool)uVar10) {
    plVar15 = plVar11 + 1;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(char **)(puVar4 + -0x28) = pcVar5 + -0xa8;
    *(long **)(puVar4 + -0x20) = param_1;
    *(long **)(puVar4 + -0x18) = plVar14;
    *(undefined1 **)(puVar4 + -0x10) = puVar20;
    *(undefined **)(puVar4 + -8) = puVar22;
    puVar20 = puVar4 + -0x10;
    plVar11 = plVar16;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar4[-0xb0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar10) goto LAB_10777d288;
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar22 = &UNK_10777afbc;
    func_0x00010777d638();
    puVar4 = puVar4 + -0xc0;
    param_1 = plVar16;
  }
  uVar10 = (int)plVar11[0xd] == 4;
  if ((bool)uVar10) {
    plVar16 = plVar11 + 1;
    *(long **)(puVar4 + -0x20) = param_1;
    *(long **)(puVar4 + -0x18) = plVar14;
    *(undefined1 **)(puVar4 + -0x10) = puVar20;
    *(undefined **)(puVar4 + -8) = puVar22;
    puVar20 = puVar4 + -0x10;
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar4[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      plVar11 = plVar15;
      plVar15 = plVar16;
    }
    else {
      func_0x00010777d4d8();
      plVar11 = plVar15;
      plVar15 = plVar16;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar10) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar22 = &UNK_10777b040;
    func_0x00010777d638();
    puVar4 = puVar4 + -0xb0;
  }
  uVar10 = (int)plVar11[0xd] == 5;
  if ((bool)uVar10) {
    plVar16 = plVar11 + 1;
    *(long **)(puVar4 + -0x20) = param_1;
    *(long **)(puVar4 + -0x18) = plVar14;
    *(undefined1 **)(puVar4 + -0x10) = puVar20;
    *(undefined **)(puVar4 + -8) = puVar22;
    puVar20 = puVar4 + -0x10;
    func_0x00010777d224();
    lVar18 = plVar16[1];
    lVar23 = *plVar16;
    *(long *)(puVar4 + -0x88) = plVar16[1];
    *(long *)(puVar4 + -0x90) = lVar23;
    plVar11 = plVar15;
    plVar15 = plVar16;
    if (lVar18 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar4[-0xa0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar10) {
LAB_10777d4b4:
      auVar30._8_8_ = plVar15;
      auVar30._0_8_ = plVar11;
      return auVar30;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar22 = &UNK_10777b0e0;
    func_0x00010777d638();
    puVar4 = puVar4 + -0xb0;
  }
  puVar6 = puVar4 + -0xc0;
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(char **)(puVar4 + -0x28) = pcVar5 + -0xa8;
  *(long **)(puVar4 + -0x20) = param_1;
  *(long **)(puVar4 + -0x18) = plVar14;
  *(undefined1 **)(puVar4 + -0x10) = puVar20;
  *(undefined **)(puVar4 + -8) = puVar22;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)plVar11[0xd];
  uVar10 = iVar2 == 6;
  if ((bool)uVar10) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar4[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar10 = iVar2 == 7;
    if ((bool)uVar10) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((puVar4[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar10 = iVar2 == 8;
      if ((bool)uVar10) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar4[-0xb0] & 1) == 0) {
code_r0x00010777b1ac:
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
        if ((puVar4[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar10) goto LAB_10777d288;
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(long **)(puVar4 + -0xe0) = param_1;
  *(long **)(puVar4 + -0xd8) = plVar14;
  *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0x10;
  *(code **)(puVar4 + -200) = FUN_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(puVar4 + -0xe8) = extraout_x9_00;
  if ((int)plVar11[0xd] == 0) {
    *(undefined4 *)(puVar4 + -0xf0) = 0;
    plVar14 = (long *)(puVar4 + -0x158);
    func_0x00010777dd30();
    plVar11 = (long *)(puVar4 + -0x150);
    func_0x00010726af18(plVar11);
    func_0x00010777d20c();
    if ((bool)uVar10) {
LAB_10777ddcc:
      auVar32._8_8_ = plVar15;
      auVar32._0_8_ = plVar11;
      return auVar32;
    }
LAB_10777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(long **)(puVar4 + -0x180) = param_1;
    *(long **)(puVar4 + -0x178) = plVar14;
    *(undefined1 **)(puVar4 + -0x170) = puVar4 + -0xd0;
    *(undefined **)(puVar4 + -0x168) = &UNK_10777b260;
    plVar11 = plVar15;
    func_0x000107776fc4();
    bVar9 = (ulong)plVar15 >> 0x20 != 0;
    if (bVar9) {
      *extraout_x8_01 = (int)plVar15;
      extraout_x8_01[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8_01 = 0;
    }
    *(bool *)(extraout_x8_01 + 5) = bVar9;
    auVar27._8_8_ = plVar11;
    auVar27._0_8_ = plVar15;
    return auVar27;
  }
  func_0x00010777d490();
  if (!(bool)uVar10) goto LAB_10777b254;
  puVar12 = *(undefined8 **)(puVar4 + -0xe0);
  puVar13 = *(undefined8 **)(puVar4 + -0xd8);
  *(undefined8 **)(puVar4 + -0xe0) = puVar12;
  *(undefined8 **)(puVar4 + -0xd8) = puVar13;
  *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xd0);
  *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(puVar4 + -200);
  puVar20 = puVar4 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(puVar4 + -0xe8) = extraout_x9_01;
  uVar10 = (int)plVar11[0xd] == 1;
  if ((bool)uVar10) {
    puVar13 = (undefined8 *)(puVar4 + -0x158);
    puVar4[-0x150] = (char)plVar11[1];
    *(undefined4 *)(puVar4 + -0xf0) = 1;
    func_0x00010777dd30();
    plVar11 = (long *)(puVar4 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar10) goto LAB_10777ddcc;
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar22 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar6 = puVar4 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar10) goto code_r0x00010777b310;
    puVar20 = *(undefined1 **)(puVar4 + -0xd0);
    puVar22 = *(undefined **)(puVar4 + -200);
    puVar12 = *(undefined8 **)(puVar4 + -0xe0);
    puVar13 = *(undefined8 **)(puVar4 + -0xd8);
  }
  *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar6 + -0x28) = puVar4 + -0xa8;
  *(undefined8 **)(puVar6 + -0x20) = puVar12;
  *(undefined8 **)(puVar6 + -0x18) = puVar13;
  *(undefined1 **)(puVar6 + -0x10) = puVar20;
  *(undefined **)(puVar6 + -8) = puVar22;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)plVar11[0xd];
  uVar10 = iVar2 == 2;
  if ((bool)uVar10) {
    *(undefined8 *)(puVar6 + -0xa0) = *(undefined8 *)(extraout_x9_02 + 8);
    *(undefined4 *)(puVar6 + -0x40) = 2;
    func_0x00010777d3e4();
code_r0x00010777b44c:
    func_0x00010777d640();
  }
  else {
    uVar10 = iVar2 == 3;
    if ((bool)uVar10) {
      plVar11 = (long *)(puVar6 + -0xa8);
      plVar15 = (long *)(extraout_x9_02 + 8);
      func_0x0001072ddd58(plVar11,plVar15);
      func_0x00010777d3e4();
      goto code_r0x00010777b44c;
    }
    uVar10 = iVar2 == 4;
    if ((bool)uVar10) {
      uVar24 = *(undefined8 *)(extraout_x9_02 + 8);
      *(undefined8 *)(puVar6 + -0x98) = *(undefined8 *)(extraout_x9_02 + 0x10);
      *(undefined8 *)(puVar6 + -0xa0) = uVar24;
      *(undefined4 *)(puVar6 + -0x40) = 4;
      func_0x00010777d3e4();
      goto code_r0x00010777b44c;
    }
    if (iVar2 == 5) {
      lVar18 = *(long *)(extraout_x9_02 + 0x10);
      uVar24 = *(undefined8 *)(extraout_x9_02 + 8);
      *(undefined8 *)(puVar6 + -0x98) = *(undefined8 *)(extraout_x9_02 + 0x10);
      *(undefined8 *)(puVar6 + -0xa0) = uVar24;
      uVar10 = 1;
      if (lVar18 != 0) {
        do {
          func_0x00010777d468();
        } while (extraout_w10_02 != 0);
      }
      *(undefined4 *)(puVar6 + -0x40) = 5;
      func_0x00010777d3e4();
      goto code_r0x00010777b44c;
    }
    uVar10 = iVar2 == 6;
    if ((bool)uVar10) {
      func_0x00010777d9ac();
      func_0x000107348eb0();
      func_0x00010777d3e4();
      goto code_r0x00010777b44c;
    }
    uVar10 = iVar2 == 7;
    if ((bool)uVar10) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d3e4();
      goto code_r0x00010777b44c;
    }
    uVar10 = iVar2 == 8;
    if (!(bool)uVar10) {
      func_0x00010777d9ac();
      func_0x0001074fd134();
      func_0x00010777d3e4();
      goto code_r0x00010777b44c;
    }
    func_0x00010777d9ac();
    func_0x0001075726b8();
    plVar15 = (long *)*puVar12;
    func_0x00010777d484();
    func_0x00010777d640();
    uVar10 = puVar6[-0xac] == '\x01';
    if ((bool)uVar10) {
      uVar24 = *(undefined8 *)(puVar6 + -0xbc);
      puVar13[1] = *(undefined8 *)(puVar6 + -0xb4);
      *puVar13 = uVar24;
      *(undefined4 *)(puVar13 + 2) = 1;
      uVar17 = 1;
    }
    else {
      func_0x00010777d748();
      uVar17 = extraout_w8_11;
    }
    *(undefined1 *)((long)puVar13 + 0x14) = uVar17;
  }
  func_0x00010777d1dc();
  if (!(bool)uVar10) {
    ___stack_chk_fail();
    func_0x00010777d38c();
    func_0x00010777d638();
    if ((((int)plVar11[0xd] != 0) && ((int)plVar11[0xd] != 1)) && ((int)plVar11[0xd] != 2)) {
      iVar2 = (int)plVar11[0xd];
      cVar7 = SBORROW4(iVar2,3);
      cVar8 = iVar2 + -3 < 0;
      if (iVar2 == 3) {
        puVar22 = &UNK_10777b49c;
        func_0x00010777de8c();
        *(undefined8 **)(puVar6 + -0xe0) = puVar12;
        *(undefined8 **)(puVar6 + -0xd8) = puVar13;
        *(undefined1 **)(puVar6 + -0xd0) = puVar6 + -0x10;
        *(undefined **)(puVar6 + -200) = puVar22;
        func_0x00010777d264();
        func_0x00010777d1c4();
        uVar24 = extraout_x11;
        if (cVar8 == cVar7) {
          uVar24 = extraout_x8_02;
        }
        func_0x0001077f2c70();
        func_0x00010777d374();
        auVar29._4_4_ = 0;
        auVar29._0_4_ = (uint)puVar13 & 0xffff;
        auVar29._8_8_ = uVar24;
        return auVar29;
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = plVar15;
    return auVar3 << 0x40;
  }
LAB_10777d288:
  auVar28._8_8_ = plVar15;
  auVar28._0_8_ = plVar11;
  return auVar28;
}



/* Entry: 10777ac28; end: 10777ac4b;  */

long * FUN_10777ac28(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined1 extraout_w8_05;
  undefined1 uVar8;
  long lVar9;
  undefined1 *extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *unaff_x19;
  undefined8 *puVar10;
  long *unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  undefined *unaff_x30;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  char acStack_7ac [1932];
  
  uVar5 = (int)param_1[0xd] == 4;
  if ((bool)uVar5) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224(param_2,param_1 + 1);
    func_0x00010777d8ec();
    plVar7 = (long *)*param_2;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((acStack_7ac[0x710] & 1U) == 0) {
      func_0x00010777d748();
      param_1 = param_2;
      param_2 = plVar7;
      uVar8 = extraout_w8_00;
    }
    else {
      func_0x00010777d410();
      param_1 = param_2;
      param_2 = plVar7;
      uVar8 = extraout_w8;
    }
    unaff_x19[0x14] = uVar8;
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    unaff_x30 = &LAB_10777aca4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(acStack_7ac + 0x6fc);
  }
  uVar5 = (int)param_1[0xd] == 5;
  if ((bool)uVar5) {
    param_1 = param_1 + 1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    lVar9 = param_1[1];
    lVar14 = *param_1;
    *(long *)((long)register0x00000008 + -0x88) = param_1[1];
    *(long *)((long)register0x00000008 + -0x90) = lVar14;
    param_1 = param_2;
    if (lVar9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d484();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x9c) & 1) == 0) {
      func_0x00010777d748();
      uVar8 = extraout_w8_02;
    }
    else {
      func_0x00010777d410();
      uVar8 = extraout_w8_01;
    }
    unaff_x19[0x14] = uVar8;
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    unaff_x30 = &UNK_10777ad3c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  puVar3 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar12 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    plVar7 = (long *)*unaff_x20;
    func_0x00010777d484();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      plVar7 = (long *)*unaff_x20;
      func_0x00010777d484();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        plVar7 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        plVar7 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
    }
  }
  func_0x00010777d640();
  if ((*(byte *)((long)register0x00000008 + -0xac) & 1) == 0) {
    func_0x00010777d748();
    uVar8 = extraout_w8_04;
  }
  else {
    func_0x00010777d410();
    uVar8 = extraout_w8_03;
  }
  unaff_x19[0x14] = uVar8;
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar13 = &UNK_10777ae10;
  func_0x00010777d638();
  if ((int)param_1[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return param_1;
  }
  uVar5 = (int)param_1[0xd] == 1;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x170);
    *(long **)((long)register0x00000008 + -0xe0) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar12;
    *(undefined **)((long)register0x00000008 + -200) = &UNK_10777ae10;
    puVar12 = (undefined1 *)((long)register0x00000008 + -0xd0);
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x160) & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777aeac;
    func_0x00010777d638();
  }
  uVar5 = (int)param_1[0xd] == 2;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777af30;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar5 = (int)param_1[0xd] == 3;
  plVar6 = plVar7;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    param_1 = plVar7;
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
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777afbc;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x20 = plVar7;
  }
  uVar5 = (int)param_1[0xd] == 4;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777b040;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar5 = (int)param_1[0xd] == 5;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar12;
    *(undefined **)(puVar3 + -8) = puVar13;
    puVar12 = puVar3 + -0x10;
    func_0x00010777d224();
    lVar9 = plVar7[1];
    lVar14 = *plVar7;
    *(long *)(puVar3 + -0x88) = plVar7[1];
    *(long *)(puVar3 + -0x90) = lVar14;
    param_1 = plVar6;
    plVar6 = plVar7;
    if (lVar9 != 0) {
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
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777b0e0;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  puVar4 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar12;
  *(undefined **)(puVar3 + -8) = puVar13;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) {
code_r0x00010777b1ac:
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
        if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(long **)(puVar3 + -0xe0) = unaff_x20;
  *(undefined1 **)(puVar3 + -0xd8) = unaff_x19;
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
  *(code **)(puVar3 + -200) = FUN_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9;
  if ((int)param_1[0xd] == 0) {
    *(undefined4 *)(puVar3 + -0xf0) = 0;
    unaff_x19 = puVar3 + -0x158;
    func_0x00010777dd30();
    plVar7 = (long *)(puVar3 + -0x150);
    func_0x00010726af18(plVar7);
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return plVar7;
    }
LAB_10777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(long **)(puVar3 + -0x180) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x178) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x170) = puVar3 + -0xd0;
    *(undefined **)(puVar3 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)plVar6 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8_00 = (int)plVar6;
      extraout_x8_00[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8_00 = 0;
    }
    *(bool *)(extraout_x8_00 + 5) = bVar1;
    return plVar6;
  }
  func_0x00010777d490();
  if (!(bool)uVar5) goto LAB_10777b254;
  uVar11 = *(undefined8 *)(puVar3 + -0xe0);
  puVar10 = *(undefined8 **)(puVar3 + -0xd8);
  *(undefined8 *)(puVar3 + -0xe0) = uVar11;
  *(undefined8 **)(puVar3 + -0xd8) = puVar10;
  *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
  *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
  puVar12 = puVar3 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9_00;
  uVar5 = (int)param_1[0xd] == 1;
  if ((bool)uVar5) {
    puVar10 = (undefined8 *)(puVar3 + -0x158);
    puVar3[-0x150] = (char)param_1[1];
    *(undefined4 *)(puVar3 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (long *)(puVar3 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar13 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar4 = puVar3 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar5) goto code_r0x00010777b310;
    puVar12 = *(undefined1 **)(puVar3 + -0xd0);
    puVar13 = *(undefined **)(puVar3 + -200);
    uVar11 = *(undefined8 *)(puVar3 + -0xe0);
    puVar10 = *(undefined8 **)(puVar3 + -0xd8);
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar4 + -0x28) = puVar3 + -0xa8;
  *(undefined8 *)(puVar4 + -0x20) = uVar11;
  *(undefined8 **)(puVar4 + -0x18) = puVar10;
  *(undefined1 **)(puVar4 + -0x10) = puVar12;
  *(undefined **)(puVar4 + -8) = puVar13;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 2;
  if ((bool)uVar5) {
    *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar4 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar5 = iVar2 == 3;
    if ((bool)uVar5) {
      param_1 = (long *)(puVar4 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar5 = iVar2 == 4;
      if ((bool)uVar5) {
        uVar15 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar4 + -0xa0) = uVar15;
        *(undefined4 *)(puVar4 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar9 = *(long *)(extraout_x9_01 + 0x10);
        uVar15 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar4 + -0xa0) = uVar15;
        uVar5 = 1;
        if (lVar9 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_01 != 0);
        }
        *(undefined4 *)(puVar4 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar5 = iVar2 == 6;
        if ((bool)uVar5) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar5 = iVar2 == 7;
          if ((bool)uVar5) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar5 = iVar2 == 8;
            if ((bool)uVar5) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar5 = puVar4[-0xac] == '\x01';
              if ((bool)uVar5) {
                uVar15 = *(undefined8 *)(puVar4 + -0xbc);
                puVar10[1] = *(undefined8 *)(puVar4 + -0xb4);
                *puVar10 = uVar15;
                *(undefined4 *)(puVar10 + 2) = 1;
                uVar8 = 1;
              }
              else {
                func_0x00010777d748();
                uVar8 = extraout_w8_05;
              }
              *(undefined1 *)((long)puVar10 + 0x14) = uVar8;
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
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if (((((int)param_1[0xd] != 0) && ((int)param_1[0xd] != 1)) && ((int)param_1[0xd] != 2)) &&
     ((int)param_1[0xd] == 3)) {
    puVar13 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar4 + -0xe0) = uVar11;
    *(undefined8 **)(puVar4 + -0xd8) = puVar10;
    *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -200) = puVar13;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (long *)(ulong)((uint)puVar10 & 0xffff);
  }
  return (long *)0x0;
}



/* Entry: 10777aed0; end: 10777af2f;  */

undefined8 * FUN_10777aed0(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 extraout_w8;
  undefined1 uVar8;
  long lVar9;
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
  undefined8 *******pppppppuVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char acStack_4dc [1020];
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [16];
  byte bStack_a0;
  char *pcVar4;
  
  pcVar4 = auStack_b0;
  pppppppuVar10 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  func_0x00010777d904();
  func_0x00010777d4c0();
  func_0x00010777d648();
  if ((bStack_a0 & 1) == 0) {
    func_0x00010777db94();
  }
  else {
    func_0x00010777d4d8();
  }
  func_0x00010777d7c8();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  puVar12 = &UNK_10777af30;
  func_0x00010777d638();
  uVar5 = *(int *)(param_1 + 0xd) == 3;
  puVar6 = param_2;
  if ((bool)uVar5) {
    puVar6 = param_1 + 1;
    pcVar4 = acStack_4dc + 0x36c;
    puStack_b8 = &UNK_10777af30;
    param_1 = param_2;
    ppppppuStack_c0 = pppppppuVar10;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((acStack_4dc[0x37c] & 1U) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar12 = &UNK_10777afbc;
    func_0x00010777d638();
    unaff_x20 = param_2;
    pppppppuVar10 = &ppppppuStack_c0;
  }
  uVar5 = *(int *)(param_1 + 0xd) == 4;
  if ((bool)uVar5) {
    puVar7 = param_1 + 1;
    *(undefined8 **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar10;
    *(undefined **)(pcVar4 + -8) = puVar12;
    pppppppuVar10 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar4[-0xa0] & 1U) == 0) {
      func_0x00010777db94();
      param_1 = puVar6;
      puVar6 = puVar7;
    }
    else {
      func_0x00010777d4d8();
      param_1 = puVar6;
      puVar6 = puVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar12 = &UNK_10777b040;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  uVar5 = *(int *)(param_1 + 0xd) == 5;
  if ((bool)uVar5) {
    puVar7 = param_1 + 1;
    *(undefined8 **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar10;
    *(undefined **)(pcVar4 + -8) = puVar12;
    pppppppuVar10 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224();
    lVar9 = puVar7[1];
    uVar13 = *puVar7;
    *(undefined8 *)(pcVar4 + -0x88) = puVar7[1];
    *(undefined8 *)(pcVar4 + -0x90) = uVar13;
    param_1 = puVar6;
    puVar6 = puVar7;
    if (lVar9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar4[-0xa0] & 1U) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar12 = &UNK_10777b0e0;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  puVar3 = pcVar4 + -0xc0;
  *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(pcVar4 + -0x28) = unaff_x21;
  *(undefined8 **)(pcVar4 + -0x20) = unaff_x20;
  *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar10;
  *(undefined **)(pcVar4 + -8) = puVar12;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((pcVar4[-0xb0] & 1U) == 0) {
code_r0x00010777b1ac:
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
        if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(undefined8 **)(pcVar4 + -0xe0) = unaff_x20;
  *(undefined1 **)(pcVar4 + -0xd8) = unaff_x19;
  *(char **)(pcVar4 + -0xd0) = pcVar4 + -0x10;
  *(code **)(pcVar4 + -200) = FUN_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(pcVar4 + -0xe8) = extraout_x9;
  if (*(int *)(param_1 + 0xd) == 0) {
    *(undefined4 *)(pcVar4 + -0xf0) = 0;
    unaff_x19 = pcVar4 + -0x158;
    func_0x00010777dd30();
    puVar7 = (undefined8 *)(pcVar4 + -0x150);
    func_0x00010726af18(puVar7);
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return puVar7;
    }
LAB_10777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(undefined8 **)(pcVar4 + -0x180) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x178) = unaff_x19;
    *(char **)(pcVar4 + -0x170) = pcVar4 + -0xd0;
    *(undefined **)(pcVar4 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)puVar6 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8 = (int)puVar6;
      extraout_x8[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8 = 0;
    }
    *(bool *)(extraout_x8 + 5) = bVar1;
    return puVar6;
  }
  func_0x00010777d490();
  if (!(bool)uVar5) goto LAB_10777b254;
  uVar13 = *(undefined8 *)(pcVar4 + -0xe0);
  puVar6 = *(undefined8 **)(pcVar4 + -0xd8);
  *(undefined8 *)(pcVar4 + -0xe0) = uVar13;
  *(undefined8 **)(pcVar4 + -0xd8) = puVar6;
  *(undefined8 *)(pcVar4 + -0xd0) = *(undefined8 *)(pcVar4 + -0xd0);
  *(undefined8 *)(pcVar4 + -200) = *(undefined8 *)(pcVar4 + -200);
  puVar11 = pcVar4 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(pcVar4 + -0xe8) = extraout_x9_00;
  uVar5 = *(int *)(param_1 + 0xd) == 1;
  if ((bool)uVar5) {
    puVar6 = (undefined8 *)(pcVar4 + -0x158);
    pcVar4[-0x150] = *(undefined1 *)(param_1 + 1);
    *(undefined4 *)(pcVar4 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (undefined8 *)(pcVar4 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar12 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar3 = pcVar4 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar5) goto code_r0x00010777b310;
    puVar11 = *(undefined1 **)(pcVar4 + -0xd0);
    puVar12 = *(undefined **)(pcVar4 + -200);
    uVar13 = *(undefined8 *)(pcVar4 + -0xe0);
    puVar6 = *(undefined8 **)(pcVar4 + -0xd8);
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
  *(undefined8 *)(puVar3 + -0x20) = uVar13;
  *(undefined8 **)(puVar3 + -0x18) = puVar6;
  *(undefined1 **)(puVar3 + -0x10) = puVar11;
  *(undefined **)(puVar3 + -8) = puVar12;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar5 = iVar2 == 2;
  if ((bool)uVar5) {
    *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar3 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar5 = iVar2 == 3;
    if ((bool)uVar5) {
      param_1 = (undefined8 *)(puVar3 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar5 = iVar2 == 4;
      if ((bool)uVar5) {
        uVar14 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar14;
        *(undefined4 *)(puVar3 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar9 = *(long *)(extraout_x9_01 + 0x10);
        uVar14 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar14;
        uVar5 = 1;
        if (lVar9 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(puVar3 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar5 = iVar2 == 6;
        if ((bool)uVar5) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar5 = iVar2 == 7;
          if ((bool)uVar5) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar5 = iVar2 == 8;
            if ((bool)uVar5) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar5 = puVar3[-0xac] == '\x01';
              if ((bool)uVar5) {
                uVar14 = *(undefined8 *)(puVar3 + -0xbc);
                puVar6[1] = *(undefined8 *)(puVar3 + -0xb4);
                *puVar6 = uVar14;
                *(undefined4 *)(puVar6 + 2) = 1;
                uVar8 = 1;
              }
              else {
                func_0x00010777d748();
                uVar8 = extraout_w8;
              }
              *(undefined1 *)((long)puVar6 + 0x14) = uVar8;
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
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_1 + 0xd) != 0) && (*(int *)(param_1 + 0xd) != 1)) &&
      (*(int *)(param_1 + 0xd) != 2)) && (*(int *)(param_1 + 0xd) == 3)) {
    puVar12 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = uVar13;
    *(undefined8 **)(puVar3 + -0xd8) = puVar6;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -200) = puVar12;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined8 *)(ulong)((uint)puVar6 & 0xffff);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10777b1f8; end: 10777b25f;  */

undefined1 * FUN_10777b1f8(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 extraout_w8;
  undefined1 uVar6;
  undefined4 *extraout_x8;
  long lVar7;
  long extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar8;
  char acStack_14c [140];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  undefined4 uStack_30;
  
  func_0x00010777d31c();
  if (*(int *)(param_1 + 0x68) == 0) {
    uStack_30 = 0;
    func_0x00010777dd30();
    puVar4 = auStack_90;
    func_0x00010726af18(puVar4);
    func_0x00010777d20c();
    if ((bool)in_ZR) {
      return puVar4;
    }
LAB_10777b254:
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
  if (!(bool)in_ZR) goto LAB_10777b254;
  puVar4 = &stack0xfffffffffffffff0;
  func_0x00010777d31c();
  uVar3 = *(int *)(param_1 + 0x68) == 1;
  if ((bool)uVar3) {
    unaff_x19 = &uStack_98;
    auStack_90[0] = param_1[8];
    uStack_30 = 1;
    func_0x00010777dd30();
    param_1 = auStack_90;
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar3) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    unaff_x30 = &UNK_10777b31c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)auStack_a0;
    unaff_x29 = puVar4;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar3) goto code_r0x00010777b310;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0x68);
  uVar3 = iVar2 == 2;
  if ((bool)uVar3) {
    *(undefined8 *)((long)register0x00000008 + -0xa0) = *(undefined8 *)(extraout_x9 + 8);
    *(undefined4 *)((long)register0x00000008 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar3 = iVar2 == 3;
    if ((bool)uVar3) {
      param_1 = (undefined1 *)((long)register0x00000008 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar3 = iVar2 == 4;
      if ((bool)uVar3) {
        uVar8 = *(undefined8 *)(extraout_x9 + 8);
        *(undefined8 *)((long)register0x00000008 + -0x98) = *(undefined8 *)(extraout_x9 + 0x10);
        *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar8;
        *(undefined4 *)((long)register0x00000008 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar7 = *(long *)(extraout_x9 + 0x10);
        uVar8 = *(undefined8 *)(extraout_x9 + 8);
        *(undefined8 *)((long)register0x00000008 + -0x98) = *(undefined8 *)(extraout_x9 + 0x10);
        *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar8;
        uVar3 = 1;
        if (lVar7 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10 != 0);
        }
        *(undefined4 *)((long)register0x00000008 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar3 = iVar2 == 6;
        if ((bool)uVar3) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar3 = iVar2 == 7;
          if ((bool)uVar3) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar3 = iVar2 == 8;
            if ((bool)uVar3) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar3 = *(char *)((long)register0x00000008 + -0xac) == '\x01';
              if ((bool)uVar3) {
                uVar8 = *(undefined8 *)((long)register0x00000008 + -0xbc);
                unaff_x19[1] = *(undefined8 *)((long)register0x00000008 + -0xb4);
                *unaff_x19 = uVar8;
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
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    puVar5 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xd0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -200) = puVar5;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)unaff_x19 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777b5ac; end: 10777b603;  */

undefined2 FUN_10777b5ac(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2550();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777b7cc; end: 10777b823;  */

undefined2 FUN_10777b7cc(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f273c();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777b9ec; end: 10777ba43;  */

undefined2 FUN_10777b9ec(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2928();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777bc0c; end: 10777bc63;  */

undefined2 FUN_10777bc0c(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    FUN_1077f2b10();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777be2c; end: 10777be83;  */

undefined2 FUN_10777be2c(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2d48();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777c0b4; end: 10777c0d7;  */

undefined1 * FUN_10777c0b4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 extraout_w8;
  undefined1 uVar5;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 uVar6;
  int extraout_w8_03;
  long lVar7;
  int extraout_w10;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar10;
  undefined1 auStack_300 [592];
  undefined1 auStack_b0 [128];
  
  uVar9 = (uint)unaff_x21;
  uVar6 = SUB81(unaff_x21,0);
  if (*(int *)(param_1 + 0x68) == 2) {
    puVar2 = param_2 + 8;
    param_2 = param_1 + 8;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4();
    unaff_x20 = auStack_b0;
    func_0x00010777dacc();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8;
    }
    else {
      auStack_300[0x24f] = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    unaff_x30 = &LAB_10777c14c;
    param_1 = puVar2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(auStack_300 + 0x240);
    unaff_x19 = puVar2;
  }
  if (*(int *)(param_1 + 0x68) == 3) {
    puVar2 = param_2 + 8;
    param_2 = param_1 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(puVar2);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xb0);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x0001072ddd58();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_00;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0xb1) = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    unaff_x30 = &UNK_10777c1e8;
    param_1 = puVar2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = puVar2;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x68) == 4) {
    param_2 = param_2 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(param_2,param_1 + 8);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_01;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0xb1) = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return param_2;
    }
    ___stack_chk_fail();
    unaff_x30 = &UNK_10777c280;
    param_1 = param_2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = param_2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar2 = param_1;
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar1) {
    lVar7 = *(long *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar10;
    if (lVar7 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined4 *)((long)register0x00000008 + -0x48) = 5;
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) goto code_r0x00010777c3d0;
    *(undefined1 *)((long)register0x00000008 + -0xc0) = uVar6;
    func_0x00010777d400();
    func_0x00010777bfb4();
code_r0x00010777c3f8:
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar6 = 1;
  }
  else {
    if (extraout_w8_03 == 6) {
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d950();
      uVar9 = (uint)puVar2 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar1 = uVar9 == 0xff;
      if (0xff < uVar9) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else if (extraout_w8_03 == 7) {
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d950();
      uVar9 = (uint)puVar2 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar1 = uVar9 == 0xff;
      if (0xff < uVar9) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else {
      if (extraout_w8_03 == 8) {
        func_0x00010777dce0();
        func_0x00010777d398(*(undefined8 *)(param_1 + 8));
        func_0x000107535980((undefined1 *)((long)register0x00000008 + -0xb0));
        unaff_x21 = (undefined1 *)(*(undefined8 **)(param_1 + 8))[1];
        for (puVar8 = (undefined1 *)**(undefined8 **)(param_1 + 8); uVar1 = puVar8 == unaff_x21,
            !(bool)uVar1; puVar8 = puVar8 + 0x70) {
          puVar2 = puVar8;
          func_0x00010777bf6c();
          uVar9 = (uint)puVar2 & 0xffff;
          *(short *)((long)register0x00000008 + -0xc0) = (short)puVar2;
          uVar1 = uVar9 == 0x100;
          if (uVar9 < 0x100) {
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
        puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x0001073e7720();
        goto code_r0x00010777c408;
      }
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d950();
      uVar9 = (uint)puVar2 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar1 = uVar9 == 0xff;
      if (0xff < uVar9) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
code_r0x00010777c3d0:
    func_0x00010777d748();
    uVar6 = extraout_w8_02;
  }
  unaff_x19[0x10] = uVar6;
code_r0x00010777c408:
  func_0x00010777d1dc();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = unaff_x21 + 8;
  func_0x00010726af18();
  func_0x00010777d638();
  if ((((*(int *)(puVar3 + 0x68) != 0) && (*(int *)(puVar3 + 0x68) != 1)) &&
      (*(int *)(puVar3 + 0x68) != 2)) && (*(int *)(puVar3 + 0x68) == 3)) {
    puVar4 = &UNK_10777c468;
    func_0x00010777de8c();
    *(undefined1 **)((long)register0x00000008 + -0xe0) = puVar8;
    *(undefined1 **)((long)register0x00000008 + -0xd8) = puVar2;
    *(undefined1 **)((long)register0x00000008 + -0xd0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -200) = puVar4;
    func_0x00010777d264();
    func_0x00010777d1c4();
    FUN_1077f2dd0();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)puVar2 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777c4c0; end: 10777c4ef;  */

undefined2 FUN_10777c4c0(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  FUN_1077f2dd0();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777c80c; end: 10777c83b;  */

undefined2 FUN_10777c80c(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f31a4();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777ca2c; end: 10777ca5b;  */

undefined2 FUN_10777ca2c(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f32e8();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777cc4c; end: 10777cc7b;  */

undefined2 FUN_10777cc4c(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f342c();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777ce6c; end: 10777ce9b;  */

undefined2 FUN_10777ce6c(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f3504();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777d178; end: 10777d1c3;  */

void FUN_10777d178(ulong *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  func_0x00010775dcec();
  uVar2 = *param_1;
  *param_1 = (ulong)(puVar1 + (uVar2 >> 4) + uVar2 * 0x1000 + -0x61c8864680b583eb) ^ uVar2;
  return;
}



/* Entry: 10777e6f8; end: 10777e8c7;  */

/* WARNING: Possible PIC construction at 0x00010777e7b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010777e7b8) */
/* WARNING: Removing unreachable block (ram,0x00010777e814) */
/* WARNING: Removing unreachable block (ram,0x00010777e828) */
/* WARNING: Removing unreachable block (ram,0x00010777e864) */
/* WARNING: Removing unreachable block (ram,0x00010777e874) */
/* WARNING: Removing unreachable block (ram,0x00010777e884) */
/* WARNING: Removing unreachable block (ram,0x00010777e8b4) */
/* WARNING: Removing unreachable block (ram,0x00010777e850) */

undefined1 * FUN_10777e6f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_150 [24];
  long lStack_138;
  undefined1 uStack_129;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [56];
  undefined1 auStack_d0 [128];
  uint auStack_50 [2];
  long lStack_48;
  short sStack_3a;
  
  func_0x00010777f8f4();
  puStack_128 = &UNK_10e52b660;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  func_0x00010787075c(auStack_50,param_1 + 0x48,&uStack_129);
  if (sStack_3a == 3) {
    lVar1 = lStack_48 + 0x18;
    lVar3 = (ulong)auStack_50[0] * 0x30;
    lVar2 = (ulong)auStack_50[0] * 3;
    while (lVar2 != 0) {
      if ((*(ushort *)(lVar1 + -2) >> 0xc & 1) == 0) {
        lStack_138 = *(long *)(lVar1 + -0x10);
      }
      else {
        lStack_138 = lVar1 + -0x18;
      }
      func_0x00010777e4b0(auStack_d0,lVar1);
      FUN_10774b118(auStack_150,&puStack_128,&lStack_138,auStack_d0);
      func_0x000104c3323c(auStack_d0);
      lVar1 = lVar1 + 0x30;
      lVar3 = lVar3 + -0x30;
      lVar2 = lVar3;
    }
  }
  func_0x000100060934(auStack_108,"within");
  return auStack_108;
}



/* Entry: 10777f064; end: 10777f25b;  */

void FUN_10777f064(undefined8 *param_1,long *param_2,undefined1 *param_3,uint param_4,
                  undefined8 param_5)

{
  double *pdVar1;
  ulong uVar2;
  code *pcVar3;
  double *pdVar4;
  long *plVar5;
  long *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar5 = (long *)*param_2;
  plVar6 = (long *)param_2[1];
  if ((long)plVar6 - (long)plVar5 != 0) {
    uVar2 = ((long)plVar6 - (long)plVar5) / 0x18;
    if (0xaaaaaaaaaaaaaaa < uVar2) {
      func_0x0001074b36e4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10777f224);
      (*pcVar3)();
    }
    func_0x0001074b36f0(&uStack_a8,uVar2,0);
    func_0x0001074b368c(param_1,&uStack_a8);
    func_0x0001074b38c0(&uStack_a8);
    plVar5 = (long *)*param_2;
    plVar6 = (long *)param_2[1];
  }
  for (; plVar5 != plVar6; plVar5 = plVar5 + 3) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    func_0x00010777f460(&uStack_a8,plVar5[1] - *plVar5 >> 4);
    pdVar1 = (double *)plVar5[1];
    for (pdVar4 = (double *)*plVar5; pdVar4 != pdVar1; pdVar4 = pdVar4 + 2) {
      dVar7 = 1.0;
      _ldexp(*param_3);
      dVar8 = *pdVar4;
      dVar9 = (pdVar4[1] * 3.141592653589793) / 360.0 + 0.7853981633974483;
      _tan();
      _log();
      lStack_c0 = (long)(((dVar8 + 180.0) * dVar7 * (double)param_4) / 360.0);
      lStack_b8 = (long)(((dVar9 * -57.29577951308232 + 180.0) * dVar7 * (double)param_4) / 360.0);
      func_0x00010777f4cc(&uStack_a8,&lStack_c0);
      func_0x0001078715ac(param_5,&lStack_c0);
    }
    func_0x0001074c7284(param_1,&uStack_a8);
    func_0x0001073c66e0(&uStack_a8);
  }
  return;
}



/* Entry: 10777f584; end: 10777f5eb;  */

void FUN_10777f584(long *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if (lVar3 < param_3 || param_4 < lVar3) {
    lVar2 = param_5 / 2;
    lVar4 = -param_5;
    lVar1 = param_5;
    if (param_3 - lVar3 <= lVar2) {
      lVar1 = 0;
    }
    if (lVar2 < lVar3 - param_3) {
      lVar1 = -param_5;
    }
    if (param_4 - lVar3 <= lVar2) {
      param_5 = 0;
    }
    if (lVar3 - param_4 <= lVar2) {
      lVar4 = param_5;
    }
    if (lVar1 == 0) {
      lVar1 = lVar4;
    }
    *param_1 = lVar1 + lVar3;
  }
  lVar3 = *param_2;
  if (*param_1 <= *param_2) {
    lVar3 = *param_1;
  }
  *param_2 = lVar3;
  lVar3 = param_2[1];
  if (param_1[1] <= param_2[1]) {
    lVar3 = param_1[1];
  }
  param_2[1] = lVar3;
  lVar3 = *param_1;
  if (*param_1 <= param_2[2]) {
    lVar3 = param_2[2];
  }
  param_2[2] = lVar3;
  lVar3 = param_1[1];
  if (param_1[1] <= param_2[3]) {
    lVar3 = param_2[3];
  }
  param_2[3] = lVar3;
  return;
}


