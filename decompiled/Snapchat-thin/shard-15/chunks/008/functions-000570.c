/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bce81b8; end: 10bce8227;  */

undefined8 * FUN_10bce81b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_110d9b098;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c27958(puVar1 + 1,&uStack_40);
  puVar1[4] = param_3;
  return puVar1;
}



/* Entry: 10bce8228; end: 10bce8253;  */

undefined8 * FUN_10bce8228(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9b098;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10bce8254; end: 10bce8267;  */

void FUN_10bce8254(void)

{
  FUN_10bce8228();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bce8268; end: 10bce87db;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bce8268(long *param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long **pplVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int extraout_w8;
  uint uVar22;
  int extraout_w8_00;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined1 *extraout_x8_03;
  undefined1 *extraout_x8_04;
  undefined8 extraout_x8_05;
  long *extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined1 *extraout_x8_08;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 extraout_x10_01;
  undefined1 *extraout_x11;
  undefined1 *extraout_x11_00;
  undefined1 *extraout_x11_01;
  undefined8 extraout_x11_02;
  long *extraout_x11_03;
  undefined1 *extraout_x11_04;
  undefined1 *puVar23;
  long unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long lVar24;
  long unaff_x27;
  long unaff_x28;
  code *pcVar25;
  undefined1 auStack_230 [160];
  long lStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  long *plStack_158;
  long *plStack_140;
  long alStack_138 [4];
  undefined1 auStack_118 [24];
  undefined8 *******pppppppuStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  long alStack_d0 [6];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_70;
  
  pplVar4 = &plStack_140;
  puVar19 = param_4;
  func_0x00010bce9314();
  alStack_138[1] = 0;
  alStack_138[2] = 0;
  alStack_138[3] = 0;
  uStack_70 = extraout_x8;
  func_0x00010bce937c();
  FUN_10bce8a1c(alStack_138,param_2);
  if (alStack_138[0] == 0) {
    unaff_x21 = *(long *)(param_2 + 0x20);
    func_0x00010bce9364();
    puVar19 = extraout_x11;
    lVar18 = extraout_x10;
    if (in_NG == in_OV) {
      puVar19 = extraout_x8_00;
      lVar18 = extraout_x9;
    }
    func_0x00010bcede94();
    if (unaff_x21 == 0) {
      lVar24 = unaff_x21;
      func_0x00010bce93b8();
      lStack_a0 = lVar24;
      lStack_98 = lVar18;
      func_0x00010bce9364();
      func_0x000107c2ba40(&pppppppuStack_100,&lStack_a0,alStack_d0);
      in_NG = (char)bStack_e9 < '\0';
      in_ZR = bStack_e9 == 0;
      in_OV = '\0';
      if (!(bool)in_NG) {
        uStack_f8 = (ulong)bStack_e9;
        pppppppuStack_100 = &pppppppuStack_100;
      }
      func_0x00010ae77608(param_1,pppppppuStack_100,uStack_f8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_100);
    }
    else {
      unaff_x26 = (long)*(char *)(param_2 + 0x1f);
      if (unaff_x26 < 0) {
        unaff_x27 = *(long *)(param_2 + 8);
        unaff_x26 = *(long *)(param_2 + 0x10);
      }
      else {
        unaff_x27 = param_2 + 8;
      }
      FUN_10bce95d4(param_4);
      puVar19 = *(undefined1 **)(param_4 + 8);
      if (((ulong)puVar19 & 1) != 0) {
        puVar19 = *(undefined1 **)((ulong)puVar19 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_4 + 0x60,*(long *)(unaff_x21 + 8) + 0x18);
      unaff_x28 = 0;
      lVar18 = 0;
      plStack_140 = param_1;
      func_0x00010bce93d0();
      iVar7 = extraout_w9;
      if (!(bool)in_ZR) {
        iVar7 = extraout_w9 + 1;
      }
      iVar1 = 0;
      if (extraout_w8 != 0x3e6) {
        iVar1 = iVar7;
      }
      *(int *)(param_4 + 0x78) = iVar1;
      while( true ) {
        unaff_x24 = plStack_140;
        lVar24 = (long)*(int *)(unaff_x21 + 4);
        in_OV = SBORROW8(lVar18,lVar24);
        in_NG = lVar18 - lVar24 < 0;
        in_ZR = lVar18 == lVar24;
        if (lVar24 <= lVar18) break;
        param_2 = *(long *)(unaff_x21 + 0x38);
        unaff_x24 = (long *)(param_4 + 0x18);
        func_0x000107c303b0(unaff_x24,0x10bce917c);
        pcVar25 = (code *)0x10bce83cc;
        plVar9 = unaff_x24;
        func_0x00010bce92f4();
        *(int *)(unaff_x24 + 9) = (int)plVar9;
        param_1 = (long *)(param_2 + unaff_x28);
        bVar2 = *(byte *)((long)param_1 + 1) >> 6;
        plVar12 = (long *)(ulong)bVar2;
        uVar22 = (uint)bVar2;
        puVar13 = &UNK_10e6068dd;
        UNRECOVERED_JUMPTABLE =
             (code *)((ulong)*(byte *)((long)plVar12 + 0x10e6068dd) * 4 + 0x10bce83f4);
        switch(bVar2) {
        case 0:
          goto code_r0x00010bce8404;
        case 1:
          break;
        case 2:
        case 4:
        case 0xd:
        case 0x58:
        case 0x7e:
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0xa0:
        case 0xa1:
        case 0xa2:
        case 0xa4:
        case 0xa5:
        case 0xa6:
        case 0xa8:
        case 0xa9:
        case 0xaa:
        case 0xac:
        case 0xad:
        case 0xae:
        case 0xb0:
        case 0xb1:
        case 0xb2:
        case 0xb4:
        case 0xb5:
        case 0xb6:
        case 0xb8:
        case 0xb9:
        case 0xba:
        case 0xcb:
        case 0xcc:
        case 0xcd:
        case 0xce:
        case 0xdc:
        case 0xdd:
        case 0xde:
        case 0xf8:
        case 0xf9:
        case 0xfa:
        case 0xfc:
        case 0xfd:
        case 0xfe:
          uVar22 = 2;
          break;
        case 3:
          uVar22 = 3;
          break;
        case 5:
          goto code_r0x00010bce8460;
        case 6:
          goto code_r0x00010bce8420;
        case 7:
          goto code_r0x00010bce8438;
        case 8:
          goto code_r0x00010bce840c;
        case 9:
          goto code_r0x00010bce8478;
        case 10:
          func_0x0001089ac660(&lStack_a0,(int)plVar12[10]);
        case 0x13:
          func_0x00010bce92fc();
          goto code_r0x00010bce8594;
        case 0xb:
          goto code_r0x00010bce8450;
        case 0xc:
          goto code_r0x00010bce84b0;
        case 0xe:
          goto code_r0x00010bce8470;
        case 0xf:
        case 0x7f:
          goto code_r0x00010bce8434;
        case 0x10:
          goto code_r0x00010bce8448;
        case 0x11:
          goto code_r0x00010bce8408;
        case 0x12:
          goto code_r0x00010bce8484;
        case 0x14:
          goto code_r0x00010bce845c;
        case 0x15:
          func_0x00010bd3d0bc();
code_r0x00010bce84b0:
          goto code_r0x00010bce8594;
        case 0x16:
          goto code_r0x00010bce841c;
        case 0x17:
        case 0x38:
        case 0x59:
          goto code_r0x00010bce852c;
        case 0x18:
        case 0x3c:
        case 0x5a:
        case 0x1f:
        case 0x61:
          func_0x0001089b4628(&lStack_a0);
          func_0x00010bce92fc();
          goto code_r0x00010bce8594;
        case 0x19:
        case 0x1c:
        case 0x5b:
        case 0x5e:
          goto code_r0x00010bce8590;
        case 0x1a:
        case 0x1b:
        case 0x22:
        case 0x24:
        case 0x45:
        case 0x48:
        case 0x49:
        case 0x52:
        case 0x5c:
        case 0x5d:
        case 100:
        case 0x66:
        case 0x78:
          goto code_r0x00010bce85b0;
        case 0x1d:
        case 0x2c:
        case 0x4a:
        case 0x53:
        case 0x5f:
        case 0x6e:
        case 0x79:
          goto code_r0x00010bce85a4;
        case 0x1e:
        case 0x3e:
        case 0x4e:
        case 0x50:
        case 0x55:
        case 0x60:
        case 0x74:
        case 0x76:
        case 0x7b:
          goto code_r0x00010bce8588;
        case 0x20:
        case 0x43:
        case 0x4d:
        case 0x62:
        case 0x73:
        case 0xaf:
          goto code_r0x00010bce85b4;
        case 0x21:
        case 0x41:
        case 0x46:
        case 0x56:
        case 99:
        case 0x7c:
          goto code_r0x00010bce85bc;
        case 0x23:
        case 0x2a:
        case 0x44:
        case 0x65:
        case 0x6c:
          goto code_r0x00010bce85c4;
        case 0x25:
        case 0x67:
          goto code_r0x00010bce857c;
        case 0x26:
        case 0x29:
        case 0x68:
        case 0x6b:
          goto code_r0x00010bce85c8;
        case 0x27:
        case 0x69:
          goto code_r0x00010bce858c;
        case 0x28:
        case 0x6a:
          goto code_r0x00010bce84c4;
        case 0x2b:
        case 0x42:
        case 0x6d:
          goto code_r0x00010bce8598;
        case 0x2d:
        case 0x3a:
        case 0x6f:
          goto code_r0x00010bce84b8;
        case 0x2e:
        case 0x3b:
        case 0x70:
          goto code_r0x00010bce84bc;
        case 0x2f:
        case 0x36:
        case 0x37:
        case 0x39:
code_r0x00010bce8570:
          func_0x00010ae897f0(plVar12);
        case 0x9f:
          goto code_r0x00010bce8594;
        case 0x30:
        case 0xab:
        case 0xf7:
          FUN_10bd3d1e0(alStack_d0);
          goto code_r0x00010bce8594;
        case 0x31:
        case 0x35:
        case 0xfb:
code_r0x00010bce852c:
          plVar12 = (long *)&UNK_10f684000;
code_r0x00010bce8530:
          plVar12 = (long *)((long)plVar12 + 0x2c6);
code_r0x00010bce8534:
code_r0x00010bce853c:
          goto code_r0x00010bce858c;
        case 0x32:
          goto code_r0x00010bce8530;
        case 0x33:
          goto code_r0x00010bce84fc;
        case 0x34:
code_r0x00010bce84fc:
          func_0x0001089ed984(&lStack_a0);
code_r0x00010bce8504:
          func_0x00010bce92fc();
code_r0x00010bce8508:
          goto code_r0x00010bce8594;
        case 0x3d:
          goto code_r0x00010bce8504;
        case 0x3f:
        case 0x51:
        case 0x77:
          goto code_r0x00010bce85c0;
        case 0x40:
          goto code_r0x00010bce8580;
        case 0x47:
        case 0xff:
          goto code_r0x00010bce8534;
        case 0x4b:
        case 0x71:
          func_0x00010bce92f4();
          if ((int)plVar9 == 0xc) {
            plVar12 = alStack_d0;
            goto code_r0x00010bce8570;
          }
code_r0x00010bce857c:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
code_r0x00010bce8580:
          goto code_r0x00010bce8594;
        case 0x4c:
        case 0x72:
          goto code_r0x00010bce85d8;
        case 0x4f:
        case 0x75:
          goto code_r0x00010bce853c;
        case 0x54:
        case 0x7a:
          goto code_r0x00010bce85cc;
        case 0x57:
        case 0x7d:
          goto code_r0x00010bce8508;
        case 0x83:
        case 0xdb:
          goto code_r0x00010bce8414;
        default:
          goto code_r0x00010bce87f0;
        case 0xa3:
          goto code_r0x00010bce8454;
        case 0xa7:
code_r0x00010bce84b8:
code_r0x00010bce84bc:
          func_0x0001089ac7ac(&lStack_a0);
code_r0x00010bce84c4:
          func_0x00010bce92fc();
          goto code_r0x00010bce8594;
        case 0xb3:
          goto code_r0x00010bce85d4;
        case 0xb7:
          goto code_r0x00010bce8594;
        }
        *(uint *)((long)unaff_x24 + 0x4c) = uVar22;
code_r0x00010bce8404:
        unaff_x25 = (long *)(param_2 + unaff_x28);
code_r0x00010bce8408:
        uVar22 = *(uint *)((long)unaff_x25 + 4);
code_r0x00010bce840c:
        *(uint *)(unaff_x24 + 10) = uVar22;
code_r0x00010bce8414:
        if ((unaff_x24[1] & 1U) != 0) {
code_r0x00010bce841c:
          func_0x00010bce92b0();
        }
code_r0x00010bce8420:
        func_0x000107c30248(unaff_x24 + 5);
        puVar19 = (undefined1 *)unaff_x24[1];
        if (((ulong)puVar19 & 1) != 0) {
          func_0x00010bce92b0();
        }
code_r0x00010bce8434:
        plVar12 = (long *)unaff_x25[1];
code_r0x00010bce8438:
code_r0x00010bce8448:
        plVar9 = unaff_x24 + 7;
code_r0x00010bce8450:
        func_0x000107c30248(plVar12);
code_r0x00010bce8454:
        if ((*param_1 & 0x100) != 0) {
code_r0x00010bce845c:
          plVar9 = (long *)(param_2 + unaff_x28);
code_r0x00010bce8460:
          iVar7 = (int)plVar9;
          func_0x00010b91adc8();
          plVar12 = (long *)(ulong)(iVar7 - 1U);
          if (iVar7 - 1U < 9) {
code_r0x00010bce8470:
            puVar13 = &UNK_10e6068e1;
code_r0x00010bce8478:
            UNRECOVERED_JUMPTABLE = (code *)((ulong)(byte)puVar13[(long)plVar12] * 4 + 0x10bce8488);
code_r0x00010bce8484:
                    /* WARNING: Could not recover jumptable at 0x00010bce8484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
code_r0x00010bce8588:
code_r0x00010bce858c:
code_r0x00010bce8590:
          func_0x000107c278b8(plVar12);
code_r0x00010bce8594:
          puVar19 = (undefined1 *)unaff_x24[1];
code_r0x00010bce8598:
          if (((ulong)puVar19 & 1) != 0) {
            func_0x00010bce92b0();
          }
code_r0x00010bce85a4:
          func_0x000107c3024c();
          plVar9 = alStack_d0;
code_r0x00010bce85b0:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        }
code_r0x00010bce85b4:
        func_0x00010bce92f4();
        in_ZR = (int)plVar9 == 0xb;
code_r0x00010bce85bc:
        if ((bool)in_ZR) {
code_r0x00010bce85cc:
          plVar9 = (long *)(param_2 + unaff_x28);
          FUN_10bcee28c();
code_r0x00010bce85d4:
          unaff_x25 = plVar9;
code_r0x00010bce85d8:
          lStack_a0 = unaff_x27;
          lStack_98 = unaff_x26;
          func_0x00010bce93c4();
          func_0x00010bce92bc();
          func_0x00010bce92e0();
          puVar19 = (undefined1 *)unaff_x24[1];
          if (((ulong)puVar19 & 1) != 0) {
            func_0x00010bce92b0();
          }
          func_0x00010bce93ac();
code_r0x00010bce8600:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
        }
        else {
code_r0x00010bce85c0:
          func_0x00010bce92f4();
code_r0x00010bce85c4:
          in_ZR = (int)plVar9 == 10;
code_r0x00010bce85c8:
          iVar7 = (int)plVar9;
          if ((bool)in_ZR) goto code_r0x00010bce85cc;
          func_0x00010bce92f4();
          if (iVar7 == 0xe) {
            unaff_x25 = (long *)(param_2 + unaff_x28);
            FUN_10bcefa5c();
            lStack_a0 = unaff_x27;
            lStack_98 = unaff_x26;
            func_0x00010bce93c4();
            func_0x00010bce92bc();
            func_0x00010bce92e0();
            puVar19 = (undefined1 *)unaff_x24[1];
            if (((ulong)puVar19 & 1) != 0) {
              func_0x00010bce92b0();
            }
            func_0x00010bce93ac();
            goto code_r0x00010bce8600;
          }
        }
        if (((*(byte *)((long)param_1 + 1) >> 4 & 1) != 0) &&
           (lVar24 = *(long *)(param_2 + unaff_x28 + 0x28), lVar24 != 0)) {
          *(int *)((long)unaff_x24 + 0x54) =
               (int)((lVar24 - *(long *)(*(long *)(lVar24 + 0x10) + 0x40)) / 0x38) + 1;
        }
        iVar7 = (int)param_2 + (int)unaff_x28;
        FUN_10bcf1560();
        if (iVar7 != 0) {
          *(undefined1 *)(unaff_x24 + 0xb) = 1;
        }
        FUN_10bce8bb4(*(undefined8 *)(param_2 + unaff_x28 + 0x38),unaff_x24 + 2);
        lVar18 = lVar18 + 1;
        unaff_x28 = unaff_x28 + 0x58;
      }
      lVar18 = 0;
      param_1 = (long *)0x8;
      while( true ) {
        lVar24 = (long)*(int *)(unaff_x21 + 0x78);
        in_OV = SBORROW8(lVar18,lVar24);
        in_NG = lVar18 - lVar24 < 0;
        in_ZR = lVar18 == lVar24;
        if (lVar24 <= lVar18) break;
        param_2 = *(long *)(*(long *)(unaff_x21 + 0x40) + (long)param_1);
        func_0x000107c303b4(param_4 + 0x30);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
        lVar18 = lVar18 + 1;
        param_1 = param_1 + 7;
      }
      *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 1;
      uVar17 = *(ulong *)(param_4 + 0x70);
      if (uVar17 == 0) {
        uVar17 = *(ulong *)(param_4 + 8);
        if ((uVar17 & 1) != 0) {
          uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
        }
        func_0x00010bce91b8();
        *(ulong *)(param_4 + 0x70) = uVar17;
      }
      puVar19 = *(undefined1 **)(uVar17 + 8);
      if (((ulong)puVar19 & 1) != 0) {
        func_0x00010bce92b0();
      }
      func_0x000107c30248(uVar17 + 0x10);
      FUN_10bce8bb4(*(undefined8 *)(unaff_x21 + 0x20),param_4 + 0x48);
      *unaff_x24 = 0;
    }
  }
  else {
    *param_1 = alStack_138[0];
    alStack_138[0] = 0x36;
  }
  func_0x000107c31550(alStack_138);
  plVar8 = alStack_138 + 1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce929c(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_100);
  func_0x000107c31550(alStack_138);
  plVar9 = alStack_138 + 1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  pcVar25 = FUN_10bce87dc;
  func_0x00010bce9288();
  pplVar4 = (long **)auStack_230;
  plVar12 = extraout_x8_01;
  lStack_190 = unaff_x26;
  plStack_188 = unaff_x25;
  plStack_180 = unaff_x24;
  plStack_178 = param_1;
  lStack_170 = param_2;
  lStack_168 = unaff_x21;
  puStack_160 = param_4;
  plStack_158 = plVar8;
code_r0x00010bce87f0:
  *(undefined1 **)((long)pplVar4 + 0xe0) = &stack0xfffffffffffffff0;
  *(code **)((long)pplVar4 + 0xe8) = pcVar25;
  puVar16 = puVar19;
  func_0x00010bce9314();
  *(undefined8 *)((long)pplVar4 + 0x98) = extraout_x8_02;
  *(undefined8 *)((long)pplVar4 + 0x20) = 0;
  *(undefined8 *)((long)pplVar4 + 0x28) = 0;
  *(undefined8 *)((long)pplVar4 + 0x30) = 0;
  func_0x00010bce937c();
  puVar20 = extraout_x11_00;
  if (in_NG == in_OV) {
    puVar20 = extraout_x8_03;
  }
  puVar21 = (undefined1 *)((long)pplVar4 + 0x20);
  plVar8 = plVar9;
  FUN_10bce8a1c((undefined1 *)((long)pplVar4 + 0x18));
  if (*(long *)((long)pplVar4 + 0x18) == 0) {
    plVar9 = (long *)plVar9[4];
    func_0x00010bce9394();
    puVar16 = extraout_x11_01;
    uVar14 = extraout_x10_00;
    if (in_NG == in_OV) {
      puVar16 = extraout_x8_04;
      uVar14 = extraout_x9_00;
    }
    func_0x00010bcedee0();
    if (plVar9 == (long *)0x0) {
      plVar8 = plVar9;
      func_0x00010bce93b8();
      *(long **)((long)pplVar4 + 0x68) = plVar8;
      *(undefined8 *)((long)pplVar4 + 0x70) = uVar14;
      func_0x00010bce9394();
      uVar14 = extraout_x11_02;
      uVar3 = extraout_x10_01;
      if (in_NG == in_OV) {
        uVar14 = extraout_x8_05;
        uVar3 = extraout_x9_01;
      }
      *(undefined8 *)((long)pplVar4 + 0x38) = uVar3;
      *(undefined8 *)((long)pplVar4 + 0x40) = uVar14;
      func_0x000107c2ba40(pplVar4,(undefined1 *)((long)pplVar4 + 0x68),
                          (undefined1 *)((long)pplVar4 + 0x38));
      func_0x00010bce934c();
      plVar8 = extraout_x11_03;
      if (in_NG == in_OV) {
        plVar8 = extraout_x8_06;
      }
      func_0x00010ae775f4(plVar12);
      func_0x00010bce9304();
      puVar19 = (undefined1 *)pplVar4;
    }
    else {
      FUN_10bcea0c4(puVar19);
      func_0x00010bce93d0();
      iVar7 = extraout_w9_00;
      if (!(bool)in_ZR) {
        iVar7 = extraout_w9_00 + 1;
      }
      iVar1 = 0;
      if (extraout_w8_00 != 0x3e6) {
        iVar1 = iVar7;
      }
      *(int *)(puVar19 + 0x60) = iVar1;
      uVar17 = *(ulong *)(puVar19 + 8);
      if ((uVar17 & 1) != 0) {
        uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(puVar19 + 0x48,plVar9[1] + 0x18,uVar17);
      *(uint *)(puVar19 + 0x10) = *(uint *)(puVar19 + 0x10) | 1;
      uVar17 = *(ulong *)(puVar19 + 0x58);
      if (uVar17 == 0) {
        uVar17 = *(ulong *)(puVar19 + 8);
        if ((uVar17 & 1) != 0) {
          uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
        }
        func_0x00010bce91b8();
        *(ulong *)(puVar19 + 0x58) = uVar17;
      }
      puVar16 = *(undefined1 **)(uVar17 + 8);
      if (((ulong)puVar16 & 1) != 0) {
        func_0x00010bce92b0();
      }
      func_0x000107c30248(uVar17 + 0x10);
      unaff_x24 = (long *)0x0;
      param_2 = 0x10bce9200;
      for (lVar18 = 0; in_ZR = lVar18 == *(int *)((long)plVar9 + 4),
          lVar18 < *(int *)((long)plVar9 + 4); lVar18 = lVar18 + 1) {
        lVar24 = plVar9[7];
        param_1 = (long *)(puVar19 + 0x18);
        func_0x000107c303b0(param_1,0x10bce9200);
        puVar16 = (undefined1 *)param_1[1];
        if (((ulong)puVar16 & 1) != 0) {
          func_0x00010bce92b0();
        }
        func_0x000107c30248(param_1 + 5,*(undefined8 *)((long)unaff_x24 + lVar24 + 8));
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)((long)unaff_x24 + lVar24 + 4);
        FUN_10bce8bb4(*(undefined8 *)((long)unaff_x24 + lVar24 + 0x18),param_1 + 2);
        unaff_x24 = unaff_x24 + 6;
      }
      plVar8 = (long *)(puVar19 + 0x30);
      FUN_10bce8bb4(plVar9[4]);
      *plVar12 = 0;
    }
  }
  else {
    *plVar12 = *(long *)((long)pplVar4 + 0x18);
    *(undefined8 *)((long)pplVar4 + 0x18) = 0x36;
  }
  func_0x000107c31550((undefined1 *)((long)pplVar4 + 0x18));
  puVar10 = (undefined1 *)((long)pplVar4 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce929c(*(undefined8 *)((long)pplVar4 + 0x98));
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce9304();
  func_0x000107c31550((undefined1 *)((long)pplVar4 + 0x18));
  puVar11 = (undefined8 *)((long)pplVar4 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce9288();
  puVar23 = (undefined1 *)((long)pplVar4 + -0x140);
  *(long *)((long)pplVar4 + -0x50) = unaff_x28;
  *(long *)((long)pplVar4 + -0x48) = unaff_x27;
  *(long **)((long)pplVar4 + -0x40) = unaff_x24;
  *(long **)((long)pplVar4 + -0x38) = param_1;
  *(long *)((long)pplVar4 + -0x30) = param_2;
  *(long **)((long)pplVar4 + -0x28) = plVar9;
  *(undefined1 **)((long)pplVar4 + -0x20) = puVar19;
  *(undefined1 **)((long)pplVar4 + -0x18) = puVar10;
  *(undefined1 **)((long)pplVar4 + -0x10) = (undefined1 *)((long)pplVar4 + 0xe0);
  *(code **)((long)pplVar4 + -8) = FUN_10bce8a1c;
  plVar12 = plVar8;
  puVar19 = puVar16;
  puVar10 = puVar20;
  func_0x00010bce9314();
  *(undefined8 *)((long)pplVar4 + -0x58) = extraout_x8_07;
  *(undefined1 **)((long)pplVar4 + -0x128) = puVar19;
  *(undefined1 **)((long)pplVar4 + -0x120) = puVar10;
  lVar18 = (long)*(char *)((long)plVar12 + 0x1f);
  pcVar15 = (char *)(plVar12 + 1);
  if (lVar18 < 0) {
    lVar18 = plVar8[2];
    pcVar15 = (char *)plVar8[1];
  }
  puVar19 = (undefined1 *)((long)pplVar4 + -0x128);
  FUN_10bce8b6c(puVar19,pcVar15,lVar18);
  if ((int)puVar19 != 0) {
    pcVar15 = "/";
    uVar17 = 0;
    puVar19 = (undefined1 *)0x1;
    FUN_10bce8b6c();
    if ((uVar17 & 1) != 0) {
      func_0x000107c27958((undefined1 *)((long)pplVar4 + -0x88),
                          (undefined1 *)((long)pplVar4 + -0x128));
      puVar16 = (undefined1 *)((long)pplVar4 + -0x88);
      func_0x000107c27b9c(puVar21,puVar16);
      plVar12 = (long *)((long)pplVar4 + -0x88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      *puVar11 = 0;
      puVar23 = puVar20;
      goto LAB_10bce8b2c;
    }
  }
  puVar13 = &UNK_10f83179e;
  func_0x000107c284bc();
  *(undefined **)((long)pplVar4 + -0x88) = puVar13;
  *(char **)((long)pplVar4 + -0x80) = pcVar15;
  bVar2 = *(byte *)((long)plVar8 + 0x1f);
  cVar6 = (char)bVar2 < '\0';
  in_ZR = bVar2 == 0;
  cVar5 = '\0';
  uVar17 = plVar8[2];
  plVar9 = (long *)plVar8[1];
  if (!(bool)cVar6) {
    uVar17 = (ulong)bVar2;
    plVar9 = plVar12 + 1;
  }
  *(long **)((long)pplVar4 + -0xb8) = plVar9;
  *(ulong *)((long)pplVar4 + -0xb0) = uVar17;
  puVar13 = &UNK_10f8317d0;
  func_0x000107c284bc();
  *(undefined **)((long)pplVar4 + -0xe8) = puVar13;
  *(char **)((long)pplVar4 + -0xe0) = pcVar15;
  *(undefined1 **)((long)pplVar4 + -0x118) = puVar16;
  *(undefined1 **)((long)pplVar4 + -0x110) = puVar20;
  plVar12 = (long *)((long)pplVar4 + -0x88);
  puVar19 = (undefined1 *)((long)pplVar4 + -0xe8);
  func_0x00010ae8c6d8((undefined1 *)((long)pplVar4 + -0x140),plVar12,
                      (undefined1 *)((long)pplVar4 + -0xb8),puVar19,
                      (undefined1 *)((long)pplVar4 + -0x118));
  func_0x00010bce934c();
  puVar16 = extraout_x11_04;
  if (cVar6 == cVar5) {
    puVar16 = extraout_x8_08;
  }
  func_0x00010ae775f4(puVar11);
  func_0x00010bce9304();
LAB_10bce8b2c:
  func_0x00010bce929c(*(undefined8 *)((long)pplVar4 + -0x58));
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar9 = plVar12;
    func_0x00010bce9304();
    func_0x00010bce9288();
    *(undefined1 **)((long)pplVar4 + -0x160) = puVar23;
    *(long **)((long)pplVar4 + -0x158) = plVar12;
    *(undefined1 **)((long)pplVar4 + -0x150) = (undefined1 *)((long)pplVar4 + -0x10);
    *(code **)((long)pplVar4 + -0x148) = FUN_10bce8b6c;
    lVar18 = *plVar9;
    func_0x000107c2a6e4(lVar18,plVar9[1],puVar16,puVar19);
    if ((int)lVar18 != 0) {
      *plVar9 = (long)(puVar19 + *plVar9);
      plVar9[1] = plVar9[1] - (long)puVar19;
    }
    return;
  }
  return;
}



/* Entry: 10bce87dc; end: 10bce8a1b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bce87dc(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined **ppuVar14;
  ulong uVar15;
  long lVar16;
  undefined **ppuVar17;
  long *plVar18;
  int extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined **extraout_x8_03;
  int extraout_w9;
  ulong extraout_x11;
  long extraout_x11_00;
  undefined **extraout_x11_01;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_230 [24];
  ulong auStack_218 [2];
  ulong auStack_208 [6];
  undefined *puStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1a8;
  ulong uStack_1a0;
  undefined *puStack_178;
  char *pcStack_170;
  undefined8 uStack_148;
  undefined1 auStack_f0 [24];
  long alStack_d8 [4];
  undefined1 auStack_b8 [48];
  long alStack_88 [6];
  undefined8 uStack_58;
  
  uVar15 = param_4;
  func_0x00010bce9314();
  alStack_d8[1] = 0;
  alStack_d8[2] = 0;
  alStack_d8[3] = 0;
  uStack_58 = extraout_x8;
  func_0x00010bce937c();
  plVar18 = alStack_d8 + 1;
  lVar20 = param_2;
  FUN_10bce8a1c(alStack_d8);
  if (alStack_d8[0] == 0) {
    lVar16 = *(long *)(param_2 + 0x20);
    func_0x00010bce9394();
    uVar15 = extraout_x11;
    if (in_NG == in_OV) {
      uVar15 = extraout_x8_00;
    }
    func_0x00010bcedee0();
    if (lVar16 == 0) {
      func_0x00010bce93b8();
      alStack_88[0] = lVar16;
      func_0x00010bce9394();
      func_0x000107c2ba40(auStack_f0,alStack_88,auStack_b8);
      func_0x00010bce934c();
      lVar20 = extraout_x11_00;
      if (in_NG == in_OV) {
        lVar20 = extraout_x8_01;
      }
      func_0x00010ae775f4(param_1);
      func_0x00010bce9304();
    }
    else {
      FUN_10bcea0c4(param_4);
      func_0x00010bce93d0();
      iVar1 = extraout_w9;
      if (!(bool)in_ZR) {
        iVar1 = extraout_w9 + 1;
      }
      iVar2 = 0;
      if (extraout_w8 != 0x3e6) {
        iVar2 = iVar1;
      }
      *(int *)(param_4 + 0x60) = iVar2;
      uVar15 = *(ulong *)(param_4 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_4 + 0x48,*(long *)(lVar16 + 8) + 0x18,uVar15);
      *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 1;
      uVar6 = *(ulong *)(param_4 + 0x58);
      if (uVar6 == 0) {
        uVar6 = *(ulong *)(param_4 + 8);
        if ((uVar6 & 1) != 0) {
          uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
        }
        func_0x00010bce91b8();
        *(ulong *)(param_4 + 0x58) = uVar6;
      }
      uVar15 = *(ulong *)(uVar6 + 8);
      if ((uVar15 & 1) != 0) {
        func_0x00010bce92b0();
      }
      func_0x000107c30248(uVar6 + 0x10);
      lVar19 = 0;
      for (lVar20 = 0; in_ZR = lVar20 == *(int *)(lVar16 + 4), lVar20 < *(int *)(lVar16 + 4);
          lVar20 = lVar20 + 1) {
        lVar21 = *(long *)(lVar16 + 0x38);
        lVar7 = param_4 + 0x18;
        func_0x000107c303b0(lVar7,0x10bce9200);
        uVar15 = *(ulong *)(lVar7 + 8);
        if ((uVar15 & 1) != 0) {
          func_0x00010bce92b0();
        }
        func_0x000107c30248(lVar7 + 0x28,*(undefined8 *)(lVar21 + lVar19 + 8));
        lVar21 = lVar21 + lVar19;
        *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(lVar21 + 4);
        FUN_10bce8bb4(*(undefined8 *)(lVar21 + 0x18),lVar7 + 0x10);
        lVar19 = lVar19 + 0x30;
      }
      lVar20 = param_4 + 0x30;
      FUN_10bce8bb4(*(undefined8 *)(lVar16 + 0x20));
      *param_1 = 0;
    }
  }
  else {
    *param_1 = alStack_d8[0];
    alStack_d8[0] = 0x36;
  }
  func_0x000107c31550(alStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce929c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce9304();
  func_0x000107c31550(alStack_d8);
  plVar8 = alStack_d8 + 1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce9288();
  lVar19 = lVar20;
  uVar6 = uVar15;
  func_0x00010bce9314();
  lVar16 = (long)*(char *)(lVar19 + 0x1f);
  pcVar13 = (char *)(lVar19 + 8);
  if (lVar16 < 0) {
    lVar16 = *(long *)(lVar20 + 0x10);
    pcVar13 = *(char **)(lVar20 + 8);
  }
  puVar9 = auStack_218;
  auStack_218[0] = uVar6;
  uStack_148 = extraout_x8_02;
  FUN_10bce8b6c(puVar9,pcVar13,lVar16);
  if ((int)puVar9 != 0) {
    pcVar13 = "/";
    uVar6 = 0;
    ppuVar17 = (undefined **)0x1;
    FUN_10bce8b6c();
    if ((uVar6 & 1) != 0) {
      func_0x000107c27958(&puStack_178,auStack_218);
      ppuVar14 = &puStack_178;
      func_0x000107c27b9c(plVar18,ppuVar14);
      ppuVar11 = &puStack_178;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      *plVar8 = 0;
      goto LAB_10bce8b2c;
    }
  }
  puVar12 = &UNK_10f83179e;
  func_0x000107c284bc();
  bVar3 = *(byte *)(lVar20 + 0x1f);
  cVar5 = (char)bVar3 < '\0';
  in_ZR = bVar3 == 0;
  cVar4 = '\0';
  uStack_1a0 = *(ulong *)(lVar20 + 0x10);
  pcStack_1a8 = *(char **)(lVar20 + 8);
  if (!(bool)cVar5) {
    uStack_1a0 = (ulong)bVar3;
    pcStack_1a8 = (char *)(lVar19 + 8);
  }
  puVar10 = &UNK_10f8317d0;
  puStack_178 = puVar12;
  pcStack_170 = pcVar13;
  func_0x000107c284bc();
  ppuVar11 = &puStack_178;
  ppuVar17 = &puStack_1d8;
  auStack_208[0] = uVar15;
  puStack_1d8 = puVar10;
  pcStack_1d0 = pcVar13;
  func_0x00010ae8c6d8(auStack_230,ppuVar11,&pcStack_1a8,ppuVar17,auStack_208);
  func_0x00010bce934c();
  ppuVar14 = extraout_x11_01;
  if (cVar5 == cVar4) {
    ppuVar14 = extraout_x8_03;
  }
  func_0x00010ae775f4(plVar8);
  func_0x00010bce9304();
LAB_10bce8b2c:
  func_0x00010bce929c(uStack_148);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bce9304();
    func_0x00010bce9288();
    puVar12 = *ppuVar11;
    func_0x000107c2a6e4(puVar12,ppuVar11[1],ppuVar14,ppuVar17);
    if ((int)puVar12 != 0) {
      *ppuVar11 = *ppuVar11 + (long)ppuVar17;
      ppuVar11[1] = ppuVar11[1] + -(long)ppuVar17;
    }
    return;
  }
  return;
}



/* Entry: 10bce8a1c; end: 10bce8b6b;  */

void FUN_10bce8a1c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined1 in_ZR;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  char *pcVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 extraout_x8;
  undefined **extraout_x8_00;
  undefined **extraout_x11;
  undefined1 auStack_140 [24];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_e8;
  char *pcStack_e0;
  char *pcStack_b8;
  ulong uStack_b0;
  undefined *puStack_88;
  char *pcStack_80;
  undefined8 uStack_58;
  
  lVar9 = param_2;
  uVar12 = param_3;
  uVar15 = param_4;
  func_0x00010bce9314();
  lVar13 = (long)*(char *)(lVar9 + 0x1f);
  pcVar10 = (char *)(lVar9 + 8);
  if (lVar13 < 0) {
    lVar13 = *(long *)(param_2 + 0x10);
    pcVar10 = *(char **)(param_2 + 8);
  }
  puVar4 = &uStack_128;
  uStack_128 = uVar12;
  uStack_120 = uVar15;
  uStack_58 = extraout_x8;
  FUN_10bce8b6c(puVar4,pcVar10,lVar13);
  if ((int)puVar4 != 0) {
    pcVar10 = "/";
    uVar5 = 0;
    ppuVar14 = (undefined **)0x1;
    FUN_10bce8b6c();
    if ((uVar5 & 1) != 0) {
      func_0x000107c27958(&puStack_88,&uStack_128);
      ppuVar11 = &puStack_88;
      func_0x000107c27b9c(param_5,ppuVar11);
      ppuVar7 = &puStack_88;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      *param_1 = 0;
      goto LAB_10bce8b2c;
    }
  }
  puVar8 = &UNK_10f83179e;
  func_0x000107c284bc();
  bVar1 = *(byte *)(param_2 + 0x1f);
  cVar3 = (char)bVar1 < '\0';
  in_ZR = bVar1 == 0;
  cVar2 = '\0';
  uStack_b0 = *(ulong *)(param_2 + 0x10);
  pcStack_b8 = *(char **)(param_2 + 8);
  if (!(bool)cVar3) {
    uStack_b0 = (ulong)bVar1;
    pcStack_b8 = (char *)(lVar9 + 8);
  }
  puVar6 = &UNK_10f8317d0;
  puStack_88 = puVar8;
  pcStack_80 = pcVar10;
  func_0x000107c284bc();
  ppuVar7 = &puStack_88;
  ppuVar14 = &puStack_e8;
  uStack_118 = param_3;
  uStack_110 = param_4;
  puStack_e8 = puVar6;
  pcStack_e0 = pcVar10;
  func_0x00010ae8c6d8(auStack_140,ppuVar7,&pcStack_b8,ppuVar14,&uStack_118);
  func_0x00010bce934c();
  ppuVar11 = extraout_x11;
  if (cVar3 == cVar2) {
    ppuVar11 = extraout_x8_00;
  }
  func_0x00010ae775f4(param_1);
  func_0x00010bce9304();
LAB_10bce8b2c:
  func_0x00010bce929c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce9304();
  func_0x00010bce9288();
  puVar8 = *ppuVar7;
  func_0x000107c2a6e4(puVar8,ppuVar7[1],ppuVar11,ppuVar14);
  if ((int)puVar8 != 0) {
    *ppuVar7 = *ppuVar7 + (long)ppuVar14;
    ppuVar7[1] = ppuVar7[1] + -(long)ppuVar14;
  }
  return;
}



/* Entry: 10bce8b6c; end: 10bce8bb3;  */

void FUN_10bce8b6c(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000107c2a6e4(lVar1,param_1[1],param_2,param_3);
  if ((int)lVar1 != 0) {
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
  }
  return;
}



/* Entry: 10bce8bb4; end: 10bce8ca7;  */

void FUN_10bce8bb4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar3 = param_2;
  FUN_10bd2b4f4();
  plStack_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  FUN_10bd1d54c(uVar3,param_1,&plStack_68);
  plVar1 = plStack_60;
  for (plVar5 = plStack_68; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    if ((*(byte *)(*plVar5 + 1) >> 5 & 1) == 0) {
      uVar3 = param_2;
      func_0x00010bce911c();
      func_0x00010bce9324();
      FUN_10bce8ca8();
    }
    else {
      func_0x00010bce9324();
      FUN_10bd1d250();
      uVar2 = (uint)uVar3;
      for (uVar4 = 0; (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar4; uVar4 = uVar4 + 1) {
        uVar3 = param_2;
        func_0x00010bce911c();
        func_0x00010bce9324();
        FUN_10bce8ca8();
      }
    }
  }
  FUN_10bce0514(&plStack_68);
  return;
}



/* Entry: 10bce8ca8; end: 10bce90ff;  */

void FUN_10bce8ca8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar5;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  
  lVar1 = 0;
  if ((*(byte *)(param_3 + 1) & 8) != 0) {
    lVar1 = 0x18;
  }
  uVar4 = *(ulong *)(param_5 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(param_5 + 0x18,*(long *)(param_3 + 8) + lVar1,uVar4);
  *(uint *)(param_5 + 0x10) = *(uint *)(param_5 + 0x10) | 1;
  uVar4 = *(ulong *)(param_5 + 0x20);
  if (uVar4 == 0) {
    uVar4 = *(ulong *)(param_5 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c2ae88();
    *(ulong *)(param_5 + 0x20) = uVar4;
  }
  lVar1 = param_3;
  func_0x00010b91adc8();
  switch((int)lVar1) {
  case 1:
    if ((*(byte *)(param_3 + 1) >> 5 & 1) == 0) {
      func_0x00010bce9260();
      FUN_10bd1d784();
    }
    else {
      func_0x00010bce924c();
      func_0x00010bd1d948();
    }
    func_0x00010bce927c(&UNK_110d9b540);
    func_0x00010bce9270();
    goto code_r0x00010bce8f18;
  case 2:
    if ((*(byte *)(param_3 + 1) >> 5 & 1) == 0) {
      func_0x00010bce9260();
      FUN_10bd1daa0();
    }
    else {
      func_0x00010bce924c();
      func_0x00010bd1dc68();
    }
    func_0x00010bce927c(&UNK_110d9b4f0);
    func_0x00010bce9270();
    FUN_10bceb594(auStack_60);
    break;
  case 3:
    if ((*(byte *)(param_3 + 1) >> 5 & 1) == 0) {
      func_0x00010bce9260();
      FUN_10bd1ddc4();
    }
    else {
      func_0x00010bce924c();
      func_0x00010bd1df88();
    }
    func_0x00010bce927c(&UNK_110d9b450);
    func_0x00010bce9270();
    FUN_10bceb968(auStack_60);
    break;
  case 4:
    if ((*(byte *)(param_3 + 1) >> 5 & 1) == 0) {
      func_0x00010bce9260();
      FUN_10bd1e0e0();
    }
    else {
      func_0x00010bce924c();
      func_0x00010bd1e2a8();
    }
    func_0x00010bce927c(&UNK_110d9b400);
    func_0x00010bce9270();
    FUN_10bceb6c4(auStack_60);
    break;
  case 5:
    if ((*(byte *)(param_3 + 1) >> 5 & 1) == 0) {
      func_0x00010bce9260();
      FUN_10bd1e748();
    }
    else {
      func_0x00010bce924c();
      FUN_10bd1e91c();
    }
    func_0x00010bce927c(&UNK_110d9b5e0);
    func_0x00010bce9270();
    FUN_10bceb348(auStack_60);
    break;
  case 6:
    if ((*(byte *)(param_3 + 1) >> 5 & 1) == 0) {
      func_0x00010bce9260();
      FUN_10bd1e404();
    }
    else {
      func_0x00010bce924c();
      FUN_10bd1e5d8();
    }
    func_0x00010bce927c(&UNK_110d9b590);
    func_0x00010bce9270();
    FUN_10bceb46c(auStack_60);
    break;
  case 7:
    if ((*(byte *)(param_3 + 1) >> 5 & 1) == 0) {
      func_0x00010bce9260();
      FUN_10bd1ea8c();
    }
    else {
      func_0x00010bce924c();
      func_0x00010bd1ec54();
    }
    func_0x00010bce927c(&UNK_110d9b680);
    func_0x00010bce9270();
    FUN_10bceba98(auStack_60);
    break;
  case 8:
    if ((*(byte *)(param_3 + 1) >> 5 & 1) == 0) {
      func_0x00010bce9260();
      FUN_10bd1f9dc();
    }
    else {
      func_0x00010bce924c();
      FUN_10bd1fc24();
    }
    func_0x00010bce927c(&UNK_110d9b540);
    func_0x00010bce9270();
code_r0x00010bce8f18:
    FUN_10bceb834(auStack_60);
    break;
  case 9:
    if ((*(byte *)(param_3 + 1) >> 5 & 1) == 0) {
      func_0x00010bce9260(&uStack_78);
      FUN_10bd1edd0();
    }
    else {
      func_0x00010bce924c(&uStack_78);
      FUN_10bd1f74c();
    }
    func_0x00010787827c();
    if ((int)param_3 == 9) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_90,&uStack_78);
      func_0x00010bce927c(&UNK_110d9b4a0);
      func_0x00010bce9334();
      func_0x000107c30248(extraout_x8 + 0x10,auStack_90,0);
      func_0x00010bce9270();
      FUN_10bcebc38(auStack_60);
      puVar2 = auStack_90;
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_a8,&uStack_78);
      func_0x00010bce927c(&UNK_110d9b630);
      func_0x00010bce9334();
      func_0x000107c30248(extraout_x8_00 + 0x10,auStack_a8,0);
      func_0x00010bce9270();
      FUN_10bcebe30(auStack_60);
      puVar2 = auStack_a8;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
    break;
  case 10:
    if ((*(byte *)(param_3 + 1) >> 5 & 1) == 0) {
      func_0x00010bce9260();
      FUN_10bd1ff30();
    }
    else {
      func_0x00010bce924c();
      func_0x00010bd203bc();
    }
    uVar3 = *(ulong *)(uVar4 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    uVar5 = *(undefined8 *)(uVar4 + 0x28);
    func_0x00010b4d1294(&puStack_80,lVar1);
    if (-1 < (char)bStack_69) {
      uStack_78 = (ulong)bStack_69;
      puStack_80 = (undefined1 *)&puStack_80;
    }
    func_0x00010b4becac(auStack_68,puStack_80,uStack_78,&UNK_10e5b484d,0x14);
    func_0x000107c3024c(uVar5,auStack_68,uVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_80);
    uVar5 = *(undefined8 *)(uVar4 + 0x30);
    func_0x000107c30250(uVar5,uVar3);
    func_0x000107c30364(lVar1,uVar5);
    return;
  }
  return;
}



/* Entry: 10bce9100; end: 10bce9127;  */

void FUN_10bce9100(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined1 auStack_68 [24];
  
  uVar1 = *(ulong *)(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010b4d1294(&puStack_80,param_2);
  if (-1 < (char)bStack_69) {
    uStack_78 = (ulong)bStack_69;
    puStack_80 = (undefined1 *)&puStack_80;
  }
  func_0x00010b4becac(auStack_68,puStack_80,uStack_78,&UNK_10e5b484d,0x14);
  func_0x000107c3024c(uVar2,auStack_68,uVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_80);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c30250(uVar2,uVar1);
  func_0x000107c30364(param_2,uVar2);
  return;
}



/* Entry: 10bce9128; end: 10bce924b;  */

void FUN_10bce9128(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110d9b0f0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10bce924c; end: 10bce93f7;  */

void FUN_10bce924c(void)

{
  return;
}



/* Entry: 10bce93f8; end: 10bce9423;  */

undefined8 * FUN_10bce93f8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d9b1e0;
  param_1[1] = param_2;
  FUN_10bce9424();
  return param_1;
}



/* Entry: 10bce9424; end: 10bce944f;  */

void FUN_10bce9424(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined **)(param_1 + 0x60) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x68) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 10bce9450; end: 10bce947b;  */

undefined8 FUN_10bce9450(undefined8 param_1)

{
  func_0x00010bcead38();
  FUN_10bce947c(param_1);
  return param_1;
}



/* Entry: 10bce947c; end: 10bce94bb;  */

long FUN_10bce947c(long param_1)

{
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10bceb134();
  }
  __ZdlPv();
  FUN_10bcea82c(param_1 + 0x48);
  func_0x000107c282b4(param_1 + 0x30);
  FUN_10bcea858(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10bce94bc; end: 10bce94bf;  */

undefined8 FUN_10bce94bc(undefined8 param_1)

{
  func_0x00010bcead38();
  FUN_10bce947c(param_1);
  return param_1;
}



/* Entry: 10bce94c0; end: 10bce94d3;  */

void FUN_10bce94c0(void)

{
  FUN_10bce9450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bce94d4; end: 10bce94df;  */

void FUN_10bce94d4(void)

{
  Hint_Prefetch(0x113404a00,0,0,0);
  Hint_Prefetch(PTR_DAT_113404a00,0,0,0);
  return;
}



/* Entry: 10bce94e0; end: 10bce95d3;  */

void FUN_10bce94e0(void)

{
  ulong *puVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong *puVar4;
  
  func_0x00010bceae28();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010bceae4c();
  }
  func_0x00010598fce8(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar1 = (ulong *)(unaff_x21 + 0x48);
  plVar2 = (long *)(unaff_x20 + 0x48);
  FUN_10bce99d0();
  func_0x00010bceacfc(*(undefined8 *)(unaff_x20 + 0x60));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = plVar2[1];
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010bceace4();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248();
  }
  func_0x00010bceacfc(*(undefined8 *)(unaff_x20 + 0x68));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = plVar2[1];
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010bceace4();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x68);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x70);
    plVar2 = *(long **)(unaff_x20 + 0x70);
    if (puVar1 == (ulong *)0x0) {
      FUN_10bcea99c();
      *(ulong **)(unaff_x21 + 0x70) = puVar4;
      puVar1 = puVar4;
    }
    else {
      FUN_10bceb198();
    }
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    *(int *)(unaff_x21 + 0x78) = *(int *)(unaff_x20 + 0x78);
  }
  func_0x00010bcead14();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x00010bceae18();
    if ((*puVar1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(plVar2[1] - *plVar2) >> 4)) {
      func_0x00010bd374f4();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bce95d4; end: 10bce964b;  */

void FUN_10bce95d4(long param_1)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c282c0(param_1 + 0x30);
  FUN_10bcea988(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x60);
  func_0x000107c3025c(param_1 + 0x68);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010bceb208(*(undefined8 *)(param_1 + 0x70));
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*puVar2 != puVar2[1]) {
    lVar1 = (long)((puVar2[1] - *puVar2) * 0x10000000) >> 0x20;
    lVar3 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*puVar2 + lVar1);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    puVar2[1] = *puVar2;
    return;
  }
  return;
}



/* Entry: 10bce964c; end: 10bce98a3;  */

long * FUN_10bce964c(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined1 *puVar10;
  long unaff_x22;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  func_0x00010bcead28();
  func_0x00010bceacf0(param_1[0xc]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10bce9690;
  }
  else if ((int)param_2 != 0) {
LAB_10bce9690:
    func_0x00010bceacbc();
    param_2 = (long *)0x1;
    param_1 = unaff_x19;
    func_0x00010bceabfc();
    unaff_x21 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x20);
  while (iVar3 != 0) {
    func_0x00010bceabe0();
    param_3 = (long *)(ulong)*(uint *)((long)param_2 + 0x5c);
    param_1 = (long *)0x2;
    func_0x00010bceac18();
    func_0x00010bceadfc();
  }
  lVar14 = 8;
  for (uVar13 = (ulong)(*(uint *)(unaff_x20 + 0x38) &
                       ((int)*(uint *)(unaff_x20 + 0x38) >> 0x1f ^ 0xffffffffU)); uVar13 != 0;
      uVar13 = uVar13 - 1) {
    uVar9 = *(ulong *)(unaff_x20 + 0x30);
    puVar2 = (ulong *)(unaff_x20 + 0x30);
    if ((uVar9 & 1) != 0) {
      puVar2 = (ulong *)(uVar9 + lVar14 + -1);
    }
    param_3 = (long *)*puVar2;
    lVar7 = (long)*(char *)((long)param_3 + 0x17);
    plVar12 = param_3;
    if (lVar7 < 0) {
      lVar7 = param_3[1];
      plVar12 = (long *)*param_3;
    }
    func_0x000107c303d4(plVar12,lVar7,1,&UNK_10f831819);
    plVar12 = (long *)(long)*(char *)((long)param_3 + 0x17);
    if ((((long)plVar12 < 0) && (plVar12 = (long *)param_3[1], 0x7f < (long)plVar12)) ||
       ((*unaff_x19 - (long)unaff_x21) + 0xe < (long)plVar12)) {
      param_2 = (long *)0x3;
      param_1 = unaff_x19;
      func_0x00010b4d5120();
      unaff_x21 = param_1;
    }
    else {
      *(undefined1 *)unaff_x21 = 0x1a;
      *(char *)((long)unaff_x21 + 1) = (char)plVar12;
      param_2 = param_3;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        param_2 = (long *)*param_3;
      }
      param_1 = (long *)((long)unaff_x21 + 2);
      param_3 = plVar12;
      _memcpy();
      unaff_x21 = (long *)((long)unaff_x21 + 2 + (long)plVar12);
    }
    lVar14 = lVar14 + 8;
  }
  iVar3 = *(int *)(unaff_x20 + 0x50);
  while (iVar3 != 0) {
    func_0x00010bceabe0();
    param_3 = (long *)(ulong)*(uint *)((long)param_2 + 0x14);
    param_1 = (long *)0x4;
    func_0x00010bceac18();
    func_0x00010bceadfc();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x70);
    param_3 = (long *)(ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x5;
    func_0x00010bceac18();
    unaff_x21 = param_1;
  }
  plVar12 = param_1;
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    func_0x00010bceac3c();
    plVar12 = (long *)0x30;
    func_0x000107c280a8();
    func_0x00010bceaca8();
    param_2 = param_1;
    unaff_x21 = plVar12;
  }
  func_0x00010bceacf0(*(undefined8 *)(unaff_x20 + 0x68));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    uVar5 = uRam0000000000000000;
    if (lRam0000000000000008 == 0) goto LAB_10bce985c;
  }
  else {
    if ((int)param_2 == 0) goto LAB_10bce985c;
    uVar5 = 0;
  }
  func_0x00010bceacbc(uVar5);
  param_2 = (long *)0x7;
  func_0x00010bceabfc();
  plVar12 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10bce985c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010bceac48();
  lVar14 = 0;
  plVar4 = plVar12;
  do {
    if ((int)((ulong)(plVar12[1] - *plVar12) >> 4) <= lVar14) {
      return param_2;
    }
    piVar1 = (int *)(*plVar12 + lVar14 * 0x10);
    func_0x00010bd3caf8();
    plVar6 = plVar4;
    param_2 = plVar4;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar13 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar13);
      func_0x000107c280ac(plVar6,uVar13);
      param_2 = plVar6;
      break;
    case 1:
      iVar3 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar6 = iVar3;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar7 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar6 = lVar7;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar3 = *piVar1;
      lVar7 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar7 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar7 + 8), lVar11 < 0x80)) {
        lVar15 = *param_3;
        uVar8 = iVar3 << 3;
        plVar6 = (long *)(ulong)uVar8;
        func_0x000107c280a4();
        if (lVar11 <= (long)(lVar15 + ~(ulong)((long)plVar4 + (long)(int)plVar6) + 0x10)) {
          puVar10 = (undefined1 *)((long)plVar4 + 2);
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            puVar10[-2] = (byte)uVar8 | 0x80;
            puVar10 = puVar10 + 1;
          }
          puVar10[-2] = (byte)uVar8;
          puVar10[-1] = (char)lVar11;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(puVar10 + lVar11);
          break;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,iVar3,lVar7,plVar4);
      param_2 = plVar6;
      break;
    case 4:
      uVar13 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar13);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar5,uVar13,param_3);
      func_0x00010bd3ca0c();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar14 = lVar14 + 1;
    plVar4 = plVar6;
  } while( true );
}



/* Entry: 10bce98a4; end: 10bce999f;  */

/* WARNING: Removing unreachable block (ram,0x00010bce9930) */

long FUN_10bce98a4(ulong param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  ulong *unaff_x21;
  long unaff_x22;
  ulong uVar5;
  long lVar6;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  func_0x00010bceae70();
  func_0x00010bceac24();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    FUN_10bce9e14();
    func_0x00010bcead68();
    unaff_x21 = unaff_x21 + 1;
  }
  lVar6 = 8;
  for (uVar5 = (ulong)(*(uint *)(unaff_x19 + 0x38) &
                      ((int)*(uint *)(unaff_x19 + 0x38) >> 0x1f ^ 0xffffffffU)); uVar5 != 0;
      uVar5 = uVar5 - 1) {
    uVar4 = *(ulong *)(unaff_x19 + 0x30);
    puVar1 = (ulong *)(unaff_x19 + 0x30);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + lVar6 + -1);
    }
    param_1 = *puVar1;
    func_0x000107c282a0();
    lVar6 = lVar6 + 8;
  }
  func_0x00010bceada0();
  func_0x00010bceacd8(*(undefined8 *)(unaff_x19 + 0x60));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(param_1 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010bceacc4();
  }
  func_0x00010bceacd8(*(undefined8 *)(unaff_x19 + 0x68));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(param_1 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010bceacc4();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    param_1 = *(ulong *)(unaff_x19 + 0x70);
    func_0x00010bce99b8();
    func_0x00010bceacc4();
  }
  if (*(int *)(unaff_x19 + 0x78) != 0) {
    func_0x00010bcead48();
  }
  func_0x00010bceae08();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = uVar2;
    return CONCAT44(uVar3,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  lVar6 = param_1 + CONCAT44(uVar3,uVar2);
  *param_3 = (int)lVar6;
  return lVar6;
}



/* Entry: 10bce99a0; end: 10bce99cf;  */

void FUN_10bce99a0(void)

{
  FUN_10bcea77c();
  func_0x00010bceadd8();
  return;
}



/* Entry: 10bce99d0; end: 10bce9a1b;  */

void FUN_10bce99d0(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_10bceaaa8(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10bce9a1c; end: 10bce9a67;  */

long FUN_10bce9a1c(long param_1)

{
  func_0x00010bcead38();
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  FUN_10bcea82c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bce9a68; end: 10bce9a6b;  */

long FUN_10bce9a68(long param_1)

{
  func_0x00010bcead38();
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  FUN_10bcea82c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bce9a6c; end: 10bce9a7f;  */

void FUN_10bce9a6c(void)

{
  FUN_10bce9a1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bce9a80; end: 10bce9a8b;  */

void FUN_10bce9a80(void)

{
  Hint_Prefetch(0x113404ba8,0,0,0);
  Hint_Prefetch(PTR_DAT_113404ba8,0,0,0);
  return;
}



/* Entry: 10bce9a8c; end: 10bce9c07;  */

void FUN_10bce9a8c(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x22;
  
  lVar3 = param_2;
  func_0x00010bceae64();
  lVar3 = lVar3 + 0x10;
  FUN_10bce99d0();
  func_0x00010bceacfc(*(undefined8 *)(param_2 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(lVar3 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010bceace4();
    }
    func_0x000107c30248(unaff_x19 + 0x28);
  }
  func_0x00010bceacfc(*(undefined8 *)(param_2 + 0x30));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar3 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010bceace4();
    }
    func_0x000107c30248(unaff_x19 + 0x30);
  }
  func_0x00010bceacfc(*(undefined8 *)(param_2 + 0x38));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar3 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010bceace4();
    }
    func_0x000107c30248(unaff_x19 + 0x38);
  }
  func_0x00010bceacfc(*(undefined8 *)(param_2 + 0x40));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(lVar3 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010bceace4();
    }
    func_0x000107c30248(unaff_x19 + 0x40);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(unaff_x19 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(unaff_x19 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(unaff_x19 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(unaff_x19 + 0x54) = *(int *)(param_2 + 0x54);
  }
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x58) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(*(long *)(uVar2 + 0x10) - *(long *)(uVar2 + 8)) >> 4)) {
      func_0x00010bd374f4();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bce9c08; end: 10bce9e13;  */

long * FUN_10bce9c08(long *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  func_0x00010bcead28();
  plVar3 = param_1;
  if ((int)param_1[9] != 0) {
    func_0x00010bceac3c();
    plVar3 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010bceaca8();
    unaff_x21 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    func_0x00010bceac3c();
    plVar4 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar3);
    func_0x00010bceaca8();
    unaff_x21 = plVar4;
  }
  uVar7 = (ulong)*(uint *)(unaff_x20 + 0x50);
  if (*(uint *)(unaff_x20 + 0x50) != 0) {
    plVar4 = unaff_x19;
    func_0x000107c282ac();
    param_3 = unaff_x21;
    unaff_x21 = plVar4;
  }
  func_0x00010bceacf0(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)uVar7 < 0) {
    uVar7 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10bce9ca4;
  }
  else if ((int)uVar7 != 0) {
LAB_10bce9ca4:
    func_0x00010bceacbc();
    uVar7 = 4;
    plVar4 = unaff_x19;
    func_0x00010bceabfc();
    unaff_x21 = plVar4;
  }
  func_0x00010bceacf0(*(undefined8 *)(unaff_x20 + 0x30));
  if ((long)uVar7 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10bce9ce4;
  }
  else if ((int)uVar7 != 0) {
LAB_10bce9ce4:
    func_0x00010bceacbc();
    plVar4 = unaff_x19;
    func_0x00010bceabfc();
    unaff_x21 = plVar4;
  }
  plVar3 = (long *)(ulong)*(uint *)(unaff_x20 + 0x54);
  if (*(uint *)(unaff_x20 + 0x54) != 0) {
    plVar4 = unaff_x19;
    func_0x00010598f468();
    param_3 = unaff_x21;
    unaff_x21 = plVar4;
  }
  plVar9 = plVar4;
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    func_0x00010bceac3c();
    plVar9 = (long *)(ulong)*(byte *)(unaff_x20 + 0x58);
    plVar3 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar4);
    func_0x000107c280a8();
    unaff_x21 = plVar9;
  }
  iVar2 = *(int *)(unaff_x20 + 0x18);
  while (iVar2 != 0) {
    func_0x00010bceabe0();
    param_3 = (long *)(ulong)*(uint *)((long)plVar3 + 0x14);
    plVar9 = (long *)0x9;
    func_0x00010bceac18();
    func_0x00010bceadfc();
  }
  func_0x00010bceacf0(*(undefined8 *)(unaff_x20 + 0x38));
  if ((long)plVar3 < 0) {
    plVar3 = (long *)0x0;
    uVar5 = uRam0000000000000000;
    if (lRam0000000000000008 != 0) goto LAB_10bce9d98;
  }
  else if ((int)plVar3 != 0) {
    uVar5 = 0;
LAB_10bce9d98:
    func_0x00010bceacbc(uVar5);
    plVar3 = (long *)0xa;
    plVar9 = unaff_x19;
    func_0x00010bceabfc();
    unaff_x21 = plVar9;
  }
  func_0x00010bceacf0(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)plVar3 < 0) {
    plVar3 = (long *)0x0;
    uVar5 = uRam0000000000000000;
    if (lRam0000000000000008 == 0) goto LAB_10bce9df4;
  }
  else {
    if ((int)plVar3 == 0) goto LAB_10bce9df4;
    uVar5 = 0;
  }
  func_0x00010bceacbc(uVar5);
  plVar3 = (long *)0xb;
  func_0x00010bceabfc();
  plVar9 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10bce9df4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010bceac48();
  lVar12 = 0;
  plVar4 = plVar9;
  do {
    if ((int)((ulong)(plVar9[1] - *plVar9) >> 4) <= lVar12) {
      return plVar3;
    }
    piVar1 = (int *)(*plVar9 + lVar12 * 0x10);
    func_0x00010bd3caf8();
    plVar6 = plVar4;
    plVar3 = plVar4;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar7 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar7);
      func_0x000107c280ac(plVar6,uVar7);
      plVar3 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar6 = iVar2;
      plVar3 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar10 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar6 = lVar10;
      plVar3 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *param_3;
        uVar8 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar8;
        func_0x000107c280a4();
        if (lVar11 <= lVar13 + ~((long)plVar4 + (long)(int)plVar6) + 0x10) {
          lVar10 = (long)plVar4 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar10 + -2) = (byte)uVar8 | 0x80;
            lVar10 = lVar10 + 1;
          }
          *(byte *)(lVar10 + -2) = (byte)uVar8;
          *(char *)(lVar10 + -1) = (char)lVar11;
          func_0x00010bd3cc08();
          _memcpy();
          plVar3 = (long *)(lVar10 + lVar11);
          break;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar10,plVar4);
      plVar3 = plVar6;
      break;
    case 4:
      uVar7 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar7);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar5,uVar7,param_3);
      func_0x00010bd3ca0c();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar6,uVar5);
      plVar3 = plVar6;
    }
    lVar12 = lVar12 + 1;
    plVar4 = plVar6;
  } while( true );
}



/* Entry: 10bce9e14; end: 10bce9f1b;  */

long FUN_10bce9e14(long param_1)

{
  undefined4 *puVar1;
  int extraout_w8;
  int extraout_w8_00;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010bceae70();
  func_0x00010bceac24();
  while (unaff_x22 != 0) {
    func_0x00010bceadf4();
    func_0x00010bceae58();
  }
  func_0x00010bceacd8(*(undefined8 *)(unaff_x19 + 0x28));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010bceacc4();
  }
  func_0x00010bceacd8(*(undefined8 *)(unaff_x19 + 0x30));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010bceacc4();
  }
  func_0x00010bceacd8(*(undefined8 *)(unaff_x19 + 0x38));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010bceacc4();
  }
  func_0x00010bceacd8(*(undefined8 *)(unaff_x19 + 0x40));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010bceacc4();
  }
  iVar2 = -9;
  if (*(int *)(unaff_x19 + 0x48) != 0) {
    func_0x00010bceadbc();
    iVar2 = extraout_w8;
  }
  if (*(int *)(unaff_x19 + 0x4c) != 0) {
    func_0x00010bceadbc();
    iVar2 = extraout_w8_00;
  }
  if (*(int *)(unaff_x19 + 0x50) != 0) {
    unaff_x20 = (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x50)) * iVar2 + 0x2c0U >> 6) +
                unaff_x20;
  }
  if (*(int *)(unaff_x19 + 0x54) != 0) {
    unaff_x20 = (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x54)) * iVar2 + 0x2c0U >> 6) +
                unaff_x20;
  }
  lVar3 = unaff_x20 + (ulong)*(byte *)(unaff_x19 + 0x58) * 2;
  puVar1 = (undefined4 *)(unaff_x19 + 0x5c);
  if ((*(byte *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10bd36610();
    }
    else {
      unaff_x19 = (*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_10bd37a78();
    *puVar1 = (int)(unaff_x19 + lVar3);
    return unaff_x19 + lVar3;
  }
  *puVar1 = (int)lVar3;
  return lVar3;
}



/* Entry: 10bce9f1c; end: 10bce9f4b;  */

void FUN_10bce9f1c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d9b230;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = &DAT_11383d918;
  param_1[10] = &DAT_11383d918;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



/* Entry: 10bce9f4c; end: 10bce9f77;  */

undefined8 FUN_10bce9f4c(undefined8 param_1)

{
  func_0x00010bcead38();
  FUN_10bce9f78(param_1);
  return param_1;
}



/* Entry: 10bce9f78; end: 10bce9fb7;  */

long FUN_10bce9f78(long param_1)

{
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10bceb134();
  }
  __ZdlPv();
  FUN_10bcea82c(param_1 + 0x30);
  FUN_10bcea8b8(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10bce9fb8; end: 10bce9fbb;  */

undefined8 FUN_10bce9fb8(undefined8 param_1)

{
  func_0x00010bcead38();
  FUN_10bce9f78(param_1);
  return param_1;
}



/* Entry: 10bce9fbc; end: 10bce9fcf;  */

void FUN_10bce9fbc(void)

{
  FUN_10bce9f4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bce9fd0; end: 10bce9fdb;  */

void FUN_10bce9fd0(void)

{
  Hint_Prefetch(0x113404e00,0,0,0);
  Hint_Prefetch(PTR_DAT_113404e00,0,0,0);
  return;
}



/* Entry: 10bce9fdc; end: 10bcea0c3;  */

void FUN_10bce9fdc(void)

{
  ulong *puVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong *puVar4;
  
  func_0x00010bceae28();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010bceae4c();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  plVar2 = (long *)(unaff_x20 + 0x30);
  FUN_10bce99d0();
  func_0x00010bceacfc(*(undefined8 *)(unaff_x20 + 0x48));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = plVar2[1];
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010bceace4();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010bceacfc(*(undefined8 *)(unaff_x20 + 0x50));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = plVar2[1];
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010bceace4();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x50);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x58);
    plVar2 = *(long **)(unaff_x20 + 0x58);
    if (puVar1 == (ulong *)0x0) {
      FUN_10bcea99c();
      *(ulong **)(unaff_x21 + 0x58) = puVar4;
      puVar1 = puVar4;
    }
    else {
      FUN_10bceb198();
    }
  }
  if (*(int *)(unaff_x20 + 0x60) != 0) {
    *(int *)(unaff_x21 + 0x60) = *(int *)(unaff_x20 + 0x60);
  }
  func_0x00010bcead14();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x00010bceae18();
    if ((*puVar1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(plVar2[1] - *plVar2) >> 4)) {
      func_0x00010bd374f4();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bcea0c4; end: 10bcea133;  */

void FUN_10bcea0c4(long param_1)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  FUN_10bcea988(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010bceb208(*(undefined8 *)(param_1 + 0x58));
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*puVar2 != puVar2[1]) {
    lVar1 = (long)((puVar2[1] - *puVar2) * 0x10000000) >> 0x20;
    lVar3 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*puVar2 + lVar1);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    puVar2[1] = *puVar2;
    return;
  }
  return;
}



/* Entry: 10bcea134; end: 10bcea33b;  */

long * FUN_10bcea134(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  func_0x00010bcead28();
  func_0x00010bceacf0(param_1[9]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10bcea170;
  }
  else if ((int)param_2 != 0) {
LAB_10bcea170:
    func_0x00010bceacbc();
    param_2 = (long *)0x1;
    param_1 = unaff_x19;
    func_0x00010bceabfc();
    unaff_x21 = param_1;
  }
  iVar2 = *(int *)(unaff_x20 + 0x20);
  while (iVar2 != 0) {
    func_0x00010bceabe0();
    param_3 = (long *)(ulong)*(uint *)((long)param_2 + 0x34);
    param_1 = (long *)0x2;
    func_0x00010bceac18();
    func_0x00010bceadfc();
  }
  iVar2 = *(int *)(unaff_x20 + 0x38);
  while (iVar2 != 0) {
    func_0x00010bceabe0();
    param_3 = (long *)(ulong)*(uint *)((long)param_2 + 0x14);
    param_1 = (long *)0x3;
    func_0x00010bceac18();
    func_0x00010bceadfc();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x58);
    param_3 = (long *)(ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x4;
    func_0x00010bceac18();
    unaff_x21 = param_1;
  }
  plVar3 = param_1;
  if (*(int *)(unaff_x20 + 0x60) != 0) {
    func_0x00010bceac3c();
    plVar3 = (long *)0x28;
    func_0x000107c280a8();
    func_0x00010bceaca8();
    param_2 = param_1;
    unaff_x21 = plVar3;
  }
  func_0x00010bceacf0(*(undefined8 *)(unaff_x20 + 0x50));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    uVar6 = uRam0000000000000000;
    if (lRam0000000000000008 == 0) goto LAB_10bcea264;
  }
  else {
    if ((int)param_2 == 0) goto LAB_10bcea264;
    uVar6 = 0;
  }
  func_0x00010bceacbc(uVar6);
  param_2 = (long *)0x6;
  func_0x00010bceabfc();
  plVar3 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10bcea264:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010bceac48();
  lVar11 = 0;
  plVar4 = plVar3;
  do {
    if ((int)((ulong)(plVar3[1] - *plVar3) >> 4) <= lVar11) {
      return param_2;
    }
    piVar1 = (int *)(*plVar3 + lVar11 * 0x10);
    func_0x00010bd3caf8();
    plVar7 = plVar4;
    param_2 = plVar4;
    switch(piVar1[1]) {
    case 0:
      plVar7 = *(long **)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar5);
      func_0x000107c280ac(plVar7,uVar5);
      param_2 = plVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar7 = iVar2;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar9 = *(long *)(piVar1 + 2);
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar7 = lVar9;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar9 = *(long *)(piVar1 + 2);
      lVar10 = (long)*(char *)(lVar9 + 0x17);
      if ((-1 < lVar10) || (lVar10 = *(long *)(lVar9 + 8), lVar10 < 0x80)) {
        lVar12 = *param_3;
        uVar8 = iVar2 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x000107c280a4();
        if (lVar10 <= lVar12 + ~((long)plVar4 + (long)(int)plVar7) + 0x10) {
          lVar9 = (long)plVar4 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar9 + -2) = (byte)uVar8 | 0x80;
            lVar9 = lVar9 + 1;
          }
          *(byte *)(lVar9 + -2) = (byte)uVar8;
          *(char *)(lVar9 + -1) = (char)lVar10;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar9 + lVar10);
          break;
        }
      }
      plVar7 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar9,plVar4);
      param_2 = plVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar6,uVar5,param_3);
      func_0x00010bd3ca0c();
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar7,uVar6);
      param_2 = plVar7;
    }
    lVar11 = lVar11 + 1;
    plVar4 = plVar7;
  } while( true );
}



/* Entry: 10bcea33c; end: 10bcea36f;  */

long FUN_10bcea33c(long param_1)

{
  func_0x00010bcead38();
  func_0x000107c30258(param_1 + 0x28);
  FUN_10bcea82c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bcea370; end: 10bcea373;  */

long FUN_10bcea370(long param_1)

{
  func_0x00010bcead38();
  func_0x000107c30258(param_1 + 0x28);
  FUN_10bcea82c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bcea374; end: 10bcea387;  */

void FUN_10bcea374(void)

{
  FUN_10bcea33c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcea388; end: 10bcea393;  */

void FUN_10bcea388(void)

{
  Hint_Prefetch(0x113404f98,0,0,0);
  Hint_Prefetch(PTR_DAT_113404f98,0,0,0);
  return;
}



/* Entry: 10bcea394; end: 10bcea447;  */

void FUN_10bcea394(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x22;
  
  lVar3 = param_2;
  func_0x00010bceae64();
  lVar3 = lVar3 + 0x10;
  FUN_10bce99d0();
  func_0x00010bceacfc(*(undefined8 *)(param_2 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(lVar3 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010bceace4();
    }
    func_0x000107c30248(unaff_x19 + 0x28);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(*(long *)(uVar2 + 0x10) - *(long *)(uVar2 + 8)) >> 4)) {
      func_0x00010bd374f4();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bcea448; end: 10bcea503;  */

long * FUN_10bcea448(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  func_0x00010bcead28();
  func_0x00010bceacf0(param_1[5]);
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10bcea4a0;
  }
  else if ((int)param_2 == 0) goto LAB_10bcea4a0;
  func_0x00010bceacbc();
  param_1 = unaff_x19;
  func_0x00010bceabfc();
  unaff_x21 = param_1;
LAB_10bcea4a0:
  plVar7 = (long *)(ulong)*(uint *)(unaff_x20 + 0x30);
  if (*(uint *)(unaff_x20 + 0x30) != 0) {
    func_0x00010598f43c();
    param_1 = unaff_x19;
    param_3 = unaff_x21;
    unaff_x21 = unaff_x19;
  }
  iVar2 = *(int *)(unaff_x20 + 0x18);
  while (iVar2 != 0) {
    func_0x00010bceabe0();
    param_3 = (long *)(ulong)*(uint *)((long)plVar7 + 0x14);
    param_1 = (long *)0x3;
    func_0x00010bceac18();
    func_0x00010bceadfc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010bceac48();
  lVar11 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar11) {
      return plVar7;
    }
    piVar1 = (int *)(*param_1 + lVar11 * 0x10);
    func_0x00010bd3caf8();
    plVar6 = plVar3;
    plVar7 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar4);
      func_0x000107c280ac(plVar6,uVar4);
      plVar7 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar6 = iVar2;
      plVar7 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar9 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar6 = lVar9;
      plVar7 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar9 = *(long *)(piVar1 + 2);
      lVar10 = (long)*(char *)(lVar9 + 0x17);
      if ((-1 < lVar10) || (lVar10 = *(long *)(lVar9 + 8), lVar10 < 0x80)) {
        lVar12 = *param_3;
        uVar8 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar8;
        func_0x000107c280a4();
        if (lVar10 <= lVar12 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar9 = (long)plVar3 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar9 + -2) = (byte)uVar8 | 0x80;
            lVar9 = lVar9 + 1;
          }
          *(byte *)(lVar9 + -2) = (byte)uVar8;
          *(char *)(lVar9 + -1) = (char)lVar10;
          func_0x00010bd3cc08();
          _memcpy();
          plVar7 = (long *)(lVar9 + lVar10);
          break;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar9,plVar3);
      plVar7 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar5,uVar4,param_3);
      func_0x00010bd3ca0c();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar6,uVar5);
      plVar7 = plVar6;
    }
    lVar11 = lVar11 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 10bcea504; end: 10bcea57f;  */

long FUN_10bcea504(long param_1)

{
  undefined4 *puVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010bceae70();
  func_0x00010bceac24();
  while (unaff_x22 != 0) {
    func_0x00010bceadf4();
    func_0x00010bceae58();
  }
  func_0x00010bceacd8(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010bceacc4();
  }
  if (*(int *)(unaff_x19 + 0x30) != 0) {
    unaff_x20 = (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x30)) * -9 + 0x2c0U >> 6) +
                unaff_x20;
  }
  puVar1 = (undefined4 *)(unaff_x19 + 0x34);
  if ((*(byte *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_10bd36610();
    }
    else {
      unaff_x19 = (*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_10bd37a78();
    *puVar1 = (int)(unaff_x19 + unaff_x20);
    return unaff_x19 + unaff_x20;
  }
  *puVar1 = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10bcea580; end: 10bcea5bb;  */

long FUN_10bcea580(long param_1)

{
  func_0x00010bcead38();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c3155c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10bcea5bc; end: 10bcea5bf;  */

long FUN_10bcea5bc(long param_1)

{
  func_0x00010bcead38();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c3155c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10bcea5c0; end: 10bcea5d3;  */

void FUN_10bcea5c0(void)

{
  FUN_10bcea580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcea5d4; end: 10bcea5df;  */

void FUN_10bcea5d4(void)

{
  Hint_Prefetch(0x1134050b8,0,0,0);
  Hint_Prefetch(PTR_DAT_1134050b8,0,0,0);
  return;
}



/* Entry: 10bcea5e0; end: 10bcea677;  */

void FUN_10bcea5e0(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010bceae28();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x00010bceacfc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = param_2[1];
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010bceace4();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    param_2 = *(long **)(unaff_x20 + 0x20);
    if (param_1 == (ulong *)0x0) {
      func_0x000107c2ac78();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10bceaeac();
    }
  }
  func_0x00010bcead14();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010bceae18();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x00010bd374f4();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bcea678; end: 10bcea6bf;  */

void FUN_10bcea678(long param_1)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010bceaf4c(*(undefined8 *)(param_1 + 0x20));
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*puVar2 != puVar2[1]) {
    lVar1 = (long)((puVar2[1] - *puVar2) * 0x10000000) >> 0x20;
    lVar3 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*puVar2 + lVar1);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    puVar2[1] = *puVar2;
    return;
  }
  return;
}



/* Entry: 10bcea6c0; end: 10bcea77b;  */

long * FUN_10bcea6c0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  plVar4 = param_2;
  func_0x00010bceacf0(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar4 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10bcea724;
  }
  else if ((int)plVar4 == 0) goto LAB_10bcea724;
  func_0x00010bceacbc();
  param_2 = param_3;
  func_0x000107c280a0(param_3,1);
LAB_10bcea724:
  plVar4 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar4 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar4;
  }
  uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  plVar1 = (long *)(uVar10 + 8);
  lVar13 = 0;
  plVar5 = plVar1;
  do {
    lVar11 = *plVar1;
    if ((int)((ulong)(*(long *)(uVar10 + 0x10) - lVar11) >> 4) <= lVar13) {
      return plVar4;
    }
    piVar2 = (int *)(lVar11 + lVar13 * 0x10);
    func_0x00010bd3caf8();
    plVar8 = plVar5;
    plVar4 = plVar5;
    switch(piVar2[1]) {
    case 0:
      plVar8 = *(long **)(piVar2 + 2);
      uVar6 = (ulong)(uint)(*piVar2 << 3);
      func_0x00010bd3c9d8(uVar6);
      func_0x000107c280ac(plVar8,uVar6);
      plVar4 = plVar8;
      break;
    case 1:
      iVar3 = piVar2[2];
      plVar8 = (long *)(ulong)(*piVar2 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar8 = iVar3;
      plVar4 = (long *)((long)plVar8 + 4);
      break;
    case 2:
      lVar11 = *(long *)(piVar2 + 2);
      plVar8 = (long *)(ulong)(*piVar2 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar8 = lVar11;
      plVar4 = plVar8 + 1;
      break;
    case 3:
      iVar3 = *piVar2;
      lVar11 = *(long *)(piVar2 + 2);
      lVar12 = (long)*(char *)(lVar11 + 0x17);
      if ((-1 < lVar12) || (lVar12 = *(long *)(lVar11 + 8), lVar12 < 0x80)) {
        lVar14 = *param_3;
        uVar9 = iVar3 << 3;
        plVar8 = (long *)(ulong)uVar9;
        func_0x000107c280a4();
        if (lVar12 <= lVar14 + ~((long)plVar5 + (long)(int)plVar8) + 0x10) {
          lVar11 = (long)plVar5 + 2;
          for (uVar9 = uVar9 | 2; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
            *(byte *)(lVar11 + -2) = (byte)uVar9 | 0x80;
            lVar11 = lVar11 + 1;
          }
          *(byte *)(lVar11 + -2) = (byte)uVar9;
          *(char *)(lVar11 + -1) = (char)lVar12;
          func_0x00010bd3cc08();
          _memcpy();
          plVar4 = (long *)(lVar11 + lVar12);
          break;
        }
      }
      plVar8 = param_3;
      func_0x00010b4d5120(param_3,iVar3,lVar11,plVar5);
      plVar4 = plVar8;
      break;
    case 4:
      uVar6 = (ulong)(*piVar2 << 3 | 3);
      func_0x00010bd3c9d8(uVar6);
      uVar7 = *(undefined8 *)(piVar2 + 2);
      FUN_10bd377f0(uVar7,uVar6,param_3);
      func_0x00010bd3ca0c();
      plVar8 = (long *)(ulong)(*piVar2 << 3 | 4);
      func_0x000107c280a8(plVar8,uVar7);
      plVar4 = plVar8;
    }
    lVar13 = lVar13 + 1;
    plVar5 = plVar8;
  } while( true );
}



/* Entry: 10bcea77c; end: 10bcea7d7;  */

long FUN_10bcea77c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long extraout_x8;
  long lVar4;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  lVar1 = param_1;
  func_0x00010bceacd8(*(undefined8 *)(param_1 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar1 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010b51df80();
    func_0x00010bceacc4();
  }
  func_0x00010bceae08();
  if ((*(byte *)(lVar1 + 8) & 1) == 0) {
    *param_3 = uVar2;
    return CONCAT44(uVar3,uVar2);
  }
  if ((*(ulong *)(lVar1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    lVar1 = (*(ulong *)(lVar1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  lVar1 = lVar1 + CONCAT44(uVar3,uVar2);
  *param_3 = (int)lVar1;
  return lVar1;
}



/* Entry: 10bcea7d8; end: 10bcea7ff;  */

void FUN_10bcea7d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110d9b0f0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10bcea800; end: 10bcea82b;  */

undefined8 * FUN_10bcea800(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10bce99d0(param_1,param_3);
  return param_1;
}



/* Entry: 10bcea82c; end: 10bcea857;  */

long * FUN_10bcea82c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010bceae44();
  }
  return param_1;
}



/* Entry: 10bcea858; end: 10bcea883;  */

long * FUN_10bcea858(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010bceae44();
  }
  return param_1;
}



/* Entry: 10bcea884; end: 10bcea8b7;  */

long FUN_10bcea884(long param_1)

{
  FUN_10bcea82c(param_1 + 0x38);
  func_0x000107c282b4(param_1 + 0x20);
  FUN_10bcea858(param_1 + 8);
  return param_1;
}



/* Entry: 10bcea8b8; end: 10bcea8e3;  */

long * FUN_10bcea8b8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010bceae44();
  }
  return param_1;
}



/* Entry: 10bcea8e4; end: 10bcea987;  */

long FUN_10bcea8e4(long param_1)

{
  FUN_10bcea82c(param_1 + 0x20);
  FUN_10bcea8b8(param_1 + 8);
  return param_1;
}



/* Entry: 10bcea988; end: 10bcea99b;  */

void FUN_10bcea988(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10bcea99c; end: 10bcea9df;  */

undefined8 * FUN_10bcea99c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d9b3a0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10bd2b19c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_2 = param_2 + 0x10;
  func_0x000107c2809c(param_2,param_1);
  puVar1[2] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  return puVar1;
}



/* Entry: 10bcea9e0; end: 10bceaaa7;  */

undefined8 * FUN_10bcea9e0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x60);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d9b140;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010bcead08();
  }
  FUN_10bcea800(puVar1 + 2,param_1,param_2 + 0x10);
  lVar2 = param_2 + 0x28;
  func_0x00010bcead98();
  puVar1[5] = lVar2;
  lVar2 = param_2 + 0x30;
  func_0x00010bcead98();
  puVar1[6] = lVar2;
  lVar2 = param_2 + 0x38;
  func_0x00010bcead98();
  puVar1[7] = lVar2;
  lVar2 = param_2 + 0x40;
  func_0x00010bcead98();
  puVar1[8] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x5c) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined1 *)(puVar1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  puVar1[10] = uVar4;
  puVar1[9] = uVar3;
  return puVar1;
}



/* Entry: 10bceaaa8; end: 10bceab3f;  */

undefined8 * FUN_10bceaaa8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d9b0f0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010bcead08();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[3] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c2ac78(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar1[4] = param_1;
  return puVar1;
}



/* Entry: 10bceab40; end: 10bceabdf;  */

undefined8 * FUN_10bceab40(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d9b190;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010bcead08();
  }
  FUN_10bcea800(puVar1 + 2,param_1,param_2 + 0x10);
  lVar2 = param_2 + 0x28;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[5] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x34) = 0;
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_2 + 0x30);
  return puVar1;
}



/* Entry: 10bceabe0; end: 10bceae7f;  */

void FUN_10bceabe0(void)

{
  return;
}



/* Entry: 10bceae80; end: 10bceae93;  */

void FUN_10bceae80(void)

{
  func_0x000107c3155c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bceae94; end: 10bceaeab;  */

void FUN_10bceae94(void)

{
  Hint_Prefetch(0x113405240,0,0,0);
  Hint_Prefetch(PTR_DAT_113405240,0,0,0);
  return;
}



/* Entry: 10bceaeac; end: 10bceaf8f;  */

void FUN_10bceaeac(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(*(long *)(uVar1 + 0x10) - *(long *)(uVar1 + 8)) >> 4)) {
      func_0x00010bd374f4();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bceaf90; end: 10bceb05b;  */

long * FUN_10bceaf90(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar10 = (long)*(char *)((long)puVar13 + 0x17);
  if (lVar10 < 0) {
    lVar10 = puVar13[1];
    if (lVar10 == 0) goto LAB_10bceaffc;
    puVar4 = (undefined8 *)*puVar13;
  }
  else {
    puVar4 = puVar13;
    if (*(char *)((long)puVar13 + 0x17) == '\0') goto LAB_10bceaffc;
  }
  func_0x000107c303d4(puVar4,lVar10,1,&UNK_10f83195c);
  plVar5 = param_3;
  func_0x000107c280a0(param_3,1,puVar13,param_2);
  param_2 = plVar5;
LAB_10bceaffc:
  uVar11 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar10 = (long)*(char *)(uVar11 + 0x17);
  if (lVar10 < 0) {
    lVar10 = *(long *)(uVar11 + 8);
  }
  plVar5 = param_2;
  if (lVar10 != 0) {
    plVar5 = param_3;
    func_0x000107c280a0(param_3,2,uVar11,param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar5;
  }
  uVar11 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  plVar1 = (long *)(uVar11 + 8);
  lVar10 = 0;
  plVar6 = plVar1;
  do {
    lVar14 = *plVar1;
    if ((int)((ulong)(*(long *)(uVar11 + 0x10) - lVar14) >> 4) <= lVar10) {
      return plVar5;
    }
    piVar2 = (int *)(lVar14 + lVar10 * 0x10);
    func_0x00010bd3caf8();
    plVar9 = plVar6;
    plVar5 = plVar6;
    switch(piVar2[1]) {
    case 0:
      plVar9 = *(long **)(piVar2 + 2);
      uVar7 = (ulong)(uint)(*piVar2 << 3);
      func_0x00010bd3c9d8(uVar7);
      func_0x000107c280ac(plVar9,uVar7);
      plVar5 = plVar9;
      break;
    case 1:
      iVar3 = piVar2[2];
      plVar9 = (long *)(ulong)(*piVar2 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar9 = iVar3;
      plVar5 = (long *)((long)plVar9 + 4);
      break;
    case 2:
      lVar14 = *(long *)(piVar2 + 2);
      plVar9 = (long *)(ulong)(*piVar2 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar9 = lVar14;
      plVar5 = plVar9 + 1;
      break;
    case 3:
      iVar3 = *piVar2;
      lVar14 = *(long *)(piVar2 + 2);
      lVar15 = (long)*(char *)(lVar14 + 0x17);
      if ((-1 < lVar15) || (lVar15 = *(long *)(lVar14 + 8), lVar15 < 0x80)) {
        lVar16 = *param_3;
        uVar12 = iVar3 << 3;
        plVar9 = (long *)(ulong)uVar12;
        func_0x000107c280a4();
        if (lVar15 <= lVar16 + ~((long)plVar6 + (long)(int)plVar9) + 0x10) {
          lVar14 = (long)plVar6 + 2;
          for (uVar12 = uVar12 | 2; 0x7f < uVar12; uVar12 = uVar12 >> 7) {
            *(byte *)(lVar14 + -2) = (byte)uVar12 | 0x80;
            lVar14 = lVar14 + 1;
          }
          *(byte *)(lVar14 + -2) = (byte)uVar12;
          *(char *)(lVar14 + -1) = (char)lVar15;
          func_0x00010bd3cc08();
          _memcpy();
          plVar5 = (long *)(lVar14 + lVar15);
          break;
        }
      }
      plVar9 = param_3;
      func_0x00010b4d5120(param_3,iVar3,lVar14,plVar6);
      plVar5 = plVar9;
      break;
    case 4:
      uVar7 = (ulong)(*piVar2 << 3 | 3);
      func_0x00010bd3c9d8(uVar7);
      uVar8 = *(undefined8 *)(piVar2 + 2);
      FUN_10bd377f0(uVar8,uVar7,param_3);
      func_0x00010bd3ca0c();
      plVar9 = (long *)(ulong)(*piVar2 << 3 | 4);
      func_0x000107c280a8(plVar9,uVar8);
      plVar5 = plVar9;
    }
    lVar10 = lVar10 + 1;
    plVar6 = plVar9;
  } while( true );
}



/* Entry: 10bceb05c; end: 10bceb0d3;  */

long FUN_10bceb05c(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10bceb094;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10bceb094:
    lVar4 = 0;
    goto LAB_10bceb098;
  }
  func_0x000107c282a0();
  lVar4 = uVar2 + 1;
LAB_10bceb098:
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c28098();
    lVar4 = lVar4 + uVar2 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)lVar4;
    return lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + lVar4);
  return param_1 + lVar4;
}



/* Entry: 10bceb0d4; end: 10bceb133;  */

undefined8 * FUN_10bceb0d4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d9b3a0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10bd2b19c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10bceb134; end: 10bceb167;  */

long FUN_10bceb134(long param_1)

{
  func_0x000107c30e04(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bceb168; end: 10bceb16b;  */

long FUN_10bceb168(long param_1)

{
  func_0x000107c30e04(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10bceb16c; end: 10bceb17f;  */

void FUN_10bceb16c(void)

{
  FUN_10bceb134();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bceb180; end: 10bceb197;  */

void FUN_10bceb180(void)

{
  Hint_Prefetch(0x1134053a0,0,0,0);
  Hint_Prefetch(PTR_DAT_1134053a0,0,0,0);
  return;
}



/* Entry: 10bceb198; end: 10bceb243;  */

void FUN_10bceb198(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(*(long *)(uVar1 + 0x10) - *(long *)(uVar1 + 8)) >> 4)) {
      func_0x00010bd374f4();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bceb244; end: 10bceb2e3;  */

long * FUN_10bceb244(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar12 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar9 = (long)*(char *)((long)puVar12 + 0x17);
  if (lVar9 < 0) {
    lVar9 = puVar12[1];
    if (lVar9 == 0) goto LAB_10bceb2b0;
    puVar3 = (undefined8 *)*puVar12;
  }
  else {
    puVar3 = puVar12;
    if (*(char *)((long)puVar12 + 0x17) == '\0') goto LAB_10bceb2b0;
  }
  func_0x000107c303d4(puVar3,lVar9,1,&UNK_10f83199e);
  plVar4 = param_3;
  func_0x000107c280a0(param_3,1,puVar12,param_2);
  param_2 = plVar4;
LAB_10bceb2b0:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar11 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  plVar4 = (long *)(uVar11 + 8);
  lVar9 = 0;
  plVar5 = plVar4;
  do {
    lVar13 = *plVar4;
    if ((int)((ulong)(*(long *)(uVar11 + 0x10) - lVar13) >> 4) <= lVar9) {
      return param_2;
    }
    piVar1 = (int *)(lVar13 + lVar9 * 0x10);
    func_0x00010bd3caf8();
    plVar8 = plVar5;
    param_2 = plVar5;
    switch(piVar1[1]) {
    case 0:
      plVar8 = *(long **)(piVar1 + 2);
      uVar6 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar6);
      func_0x000107c280ac(plVar8,uVar6);
      param_2 = plVar8;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar8 = iVar2;
      param_2 = (long *)((long)plVar8 + 4);
      break;
    case 2:
      lVar13 = *(long *)(piVar1 + 2);
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar8 = lVar13;
      param_2 = plVar8 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar13 = *(long *)(piVar1 + 2);
      lVar14 = (long)*(char *)(lVar13 + 0x17);
      if ((-1 < lVar14) || (lVar14 = *(long *)(lVar13 + 8), lVar14 < 0x80)) {
        lVar15 = *param_3;
        uVar10 = iVar2 << 3;
        plVar8 = (long *)(ulong)uVar10;
        func_0x000107c280a4();
        if (lVar14 <= lVar15 + ~((long)plVar5 + (long)(int)plVar8) + 0x10) {
          lVar13 = (long)plVar5 + 2;
          for (uVar10 = uVar10 | 2; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
            *(byte *)(lVar13 + -2) = (byte)uVar10 | 0x80;
            lVar13 = lVar13 + 1;
          }
          *(byte *)(lVar13 + -2) = (byte)uVar10;
          *(char *)(lVar13 + -1) = (char)lVar14;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar13 + lVar14);
          break;
        }
      }
      plVar8 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar13,plVar5);
      param_2 = plVar8;
      break;
    case 4:
      uVar6 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar6);
      uVar7 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar7,uVar6,param_3);
      func_0x00010bd3ca0c();
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar8,uVar7);
      param_2 = plVar8;
    }
    lVar9 = lVar9 + 1;
    plVar5 = plVar8;
  } while( true );
}



/* Entry: 10bceb2e4; end: 10bceb333;  */

long FUN_10bceb2e4(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10bceb31c;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10bceb31c:
    lVar3 = 0;
    goto LAB_10bceb320;
  }
  func_0x000107c282a0();
  lVar3 = uVar2 + 1;
LAB_10bceb320:
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)lVar3;
    return lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + lVar3);
  return param_1 + lVar3;
}



/* Entry: 10bceb334; end: 10bceb347;  */

void FUN_10bceb334(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    param_2 = 0x20;
    __Znwm();
  }
  else {
    func_0x00010b4d80e0(param_2,0x20);
  }
  func_0x00010bce93e4(&UNK_110d9b390);
  *(undefined8 *)(param_2 + 0x10) = extraout_x8;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10bceb348; end: 10bceb36b;  */

undefined8 FUN_10bceb348(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bceb36c; end: 10bceb3a7;  */

undefined8 FUN_10bceb36c(undefined8 param_1)

{
  func_0x00010bcec234(&PTR_FUN_110d9b5f0);
  func_0x00010bceb3cc();
  return param_1;
}



/* Entry: 10bceb3a8; end: 10bceb3ab;  */

undefined8 FUN_10bceb3a8(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bceb3ac; end: 10bceb3bf;  */

void FUN_10bceb3ac(void)

{
  FUN_10bceb348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bceb3c0; end: 10bceb3ff;  */

void FUN_10bceb3c0(void)

{
  Hint_Prefetch(0x1134055d0,0,0,0);
  Hint_Prefetch(PTR_DAT_1134055d0,0,0,0);
  return;
}



/* Entry: 10bceb400; end: 10bceb457;  */

long * FUN_10bceb400(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  func_0x00010bcec188();
  plVar3 = param_1;
  if (param_1[2] != 0) {
    func_0x00010bcec164();
    lVar9 = *(long *)(unaff_x20 + 0x10);
    plVar3 = (long *)0x9;
    func_0x000107c280a8(9,param_1);
    param_2 = plVar3 + 1;
    *plVar3 = lVar9;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010bcec138();
  lVar9 = 0;
  plVar4 = plVar3;
  do {
    if ((int)((ulong)(plVar3[1] - *plVar3) >> 4) <= lVar9) {
      return param_2;
    }
    piVar1 = (int *)(*plVar3 + lVar9 * 0x10);
    func_0x00010bd3caf8();
    plVar7 = plVar4;
    param_2 = plVar4;
    switch(piVar1[1]) {
    case 0:
      plVar7 = *(long **)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar5);
      func_0x000107c280ac(plVar7,uVar5);
      param_2 = plVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar7 = iVar2;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar10 = *(long *)(piVar1 + 2);
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar7 = lVar10;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar12 = *param_3;
        uVar8 = iVar2 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x000107c280a4();
        if (lVar11 <= lVar12 + ~((long)plVar4 + (long)(int)plVar7) + 0x10) {
          lVar10 = (long)plVar4 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar10 + -2) = (byte)uVar8 | 0x80;
            lVar10 = lVar10 + 1;
          }
          *(byte *)(lVar10 + -2) = (byte)uVar8;
          *(char *)(lVar10 + -1) = (char)lVar11;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar10 + lVar11);
          break;
        }
      }
      plVar7 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar10,plVar4);
      param_2 = plVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar6,uVar5,param_3);
      func_0x00010bd3ca0c();
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar7,uVar6);
      param_2 = plVar7;
    }
    lVar9 = lVar9 + 1;
    plVar4 = plVar7;
  } while( true );
}



/* Entry: 10bceb458; end: 10bceb46b;  */

long FUN_10bceb458(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = 9;
  }
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)lVar2;
    return lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + lVar2);
  return param_1 + lVar2;
}



/* Entry: 10bceb46c; end: 10bceb48f;  */

undefined8 FUN_10bceb46c(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bceb490; end: 10bceb4cf;  */

undefined8 * FUN_10bceb490(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d9b5a0;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010bceb4f4(param_1,param_3);
  return param_1;
}



/* Entry: 10bceb4d0; end: 10bceb4d3;  */

undefined8 FUN_10bceb4d0(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bceb4d4; end: 10bceb4e7;  */

void FUN_10bceb4d4(void)

{
  FUN_10bceb46c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bceb4e8; end: 10bceb527;  */

void FUN_10bceb4e8(void)

{
  Hint_Prefetch(0x113405680,0,0,0);
  Hint_Prefetch(PTR_DAT_113405680,0,0,0);
  return;
}



/* Entry: 10bceb528; end: 10bceb57f;  */

long * FUN_10bceb528(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  func_0x00010bcec188();
  plVar4 = param_1;
  if ((int)param_1[2] != 0) {
    func_0x00010bcec164();
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
    plVar4 = (long *)0xd;
    func_0x000107c280a8(0xd,param_1);
    param_2 = (long *)((long)plVar4 + 4);
    *(undefined4 *)plVar4 = uVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010bcec138();
  lVar12 = 0;
  plVar5 = plVar4;
  do {
    if ((int)((ulong)(plVar4[1] - *plVar4) >> 4) <= lVar12) {
      return param_2;
    }
    piVar1 = (int *)(*plVar4 + lVar12 * 0x10);
    func_0x00010bd3caf8();
    plVar8 = plVar5;
    param_2 = plVar5;
    switch(piVar1[1]) {
    case 0:
      plVar8 = *(long **)(piVar1 + 2);
      uVar6 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar6);
      func_0x000107c280ac(plVar8,uVar6);
      param_2 = plVar8;
      break;
    case 1:
      iVar3 = piVar1[2];
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar8 = iVar3;
      param_2 = (long *)((long)plVar8 + 4);
      break;
    case 2:
      lVar10 = *(long *)(piVar1 + 2);
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar8 = lVar10;
      param_2 = plVar8 + 1;
      break;
    case 3:
      iVar3 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *param_3;
        uVar9 = iVar3 << 3;
        plVar8 = (long *)(ulong)uVar9;
        func_0x000107c280a4();
        if (lVar11 <= lVar13 + ~((long)plVar5 + (long)(int)plVar8) + 0x10) {
          lVar10 = (long)plVar5 + 2;
          for (uVar9 = uVar9 | 2; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
            *(byte *)(lVar10 + -2) = (byte)uVar9 | 0x80;
            lVar10 = lVar10 + 1;
          }
          *(byte *)(lVar10 + -2) = (byte)uVar9;
          *(char *)(lVar10 + -1) = (char)lVar11;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar10 + lVar11);
          break;
        }
      }
      plVar8 = param_3;
      func_0x00010b4d5120(param_3,iVar3,lVar10,plVar5);
      param_2 = plVar8;
      break;
    case 4:
      uVar6 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar6);
      uVar7 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar7,uVar6,param_3);
      func_0x00010bd3ca0c();
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar8,uVar7);
      param_2 = plVar8;
    }
    lVar12 = lVar12 + 1;
    plVar5 = plVar8;
  } while( true );
}



/* Entry: 10bceb580; end: 10bceb593;  */

long FUN_10bceb580(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar2 = 5;
  }
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)lVar2;
    return lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + lVar2);
  return param_1 + lVar2;
}



/* Entry: 10bceb594; end: 10bceb5b7;  */

undefined8 FUN_10bceb594(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}



/* Entry: 10bceb5b8; end: 10bceb5f3;  */

undefined8 FUN_10bceb5b8(undefined8 param_1)

{
  func_0x00010bcec234(&PTR_FUN_110d9b500);
  func_0x00010bceb618();
  return param_1;
}



/* Entry: 10bceb5f4; end: 10bceb5f7;  */

undefined8 FUN_10bceb5f4(undefined8 param_1)

{
  func_0x00010bcec148();
  return param_1;
}


