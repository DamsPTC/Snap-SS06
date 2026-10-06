/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00400c5c; end: 00400cff;  */

void FUN_00400c5c(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  ulong uStack_40;
  undefined1 uStack_31;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x100) & 1) != 0) {
    FUN_0055293c();
  }
  __ZdlPv(param_1);
  if (lVar4 != 0) {
    uStack_40 = *param_2;
    if ((uStack_40 & 1) != 0) {
      piVar3 = (int *)(uStack_40 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_00342584(&uStack_31,lVar4,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 00400d00; end: 00400e7b;  */

void FUN_00400d00(undefined8 *param_1,char *param_2,long param_3,long param_4)

{
  ulong uVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  char cStack_60;
  undefined7 uStack_5f;
  ulong uStack_58;
  byte bStack_49;
  char cStack_41;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    do {
      cStack_60 = *param_2;
      plVar4 = *(long **)(param_4 + 0x18);
      cStack_41 = cStack_60;
      if (plVar4 == (long *)0x0) {
        FUN_0033e390();
LAB_00400e38:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x400e3c);
        (*pcVar3)();
      }
      (**(code **)(*plVar4 + 0x30))(plVar4,&cStack_60);
      if (((ulong)plVar4 & 1) == 0) {
        FUN_005730b4(&cStack_60,&cStack_41,1);
        uVar1 = uStack_58;
        if (-1 < (char)bStack_49) {
          uVar1 = (ulong)bStack_49;
        }
        if (uVar1 != 2) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/uri/uri_parser.cc"
                       ,0x91,2,"assertion failed: %s");
          _abort();
          goto LAB_00400e38;
        }
        func_0x00570964(&cStack_60);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x25);
        uVar1 = uStack_58;
        pcVar2 = (char *)CONCAT71(uStack_5f,cStack_60);
        if (-1 < (char)bStack_49) {
          uVar1 = (ulong)bStack_49;
          pcVar2 = &cStack_60;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,pcVar2,uVar1);
        if ((char)bStack_49 < '\0') {
          __ZdlPv(CONCAT71(uStack_5f,cStack_60));
        }
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(long)cStack_41);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 00400e7c; end: 00400f27;  */

uint FUN_00400e7c(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  FUN_00403284();
  uVar2 = (int)param_1 - 0x21;
  uVar1 = 0;
  if (uVar2 < 0x3d) {
    uVar1 = (uint)(0x1400000096000fe9 >> ((ulong)uVar2 & 0x3f)) & 1;
  }
  uVar2 = 1;
  if ((uVar3 & 1) == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 00400f28; end: 004011d3;  */

void FUN_00400f28(undefined8 *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  char ****ppppcVar2;
  code *pcVar3;
  bool bVar4;
  char **ppcVar5;
  undefined1 **ppuVar6;
  undefined8 *puVar7;
  char cVar8;
  ulong uVar9;
  undefined1 *puStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  char ***pppcStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  char *pcStack_d0;
  ulong uStack_c8;
  char *pcStack_a0;
  ulong uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_3 == 0) {
    *(undefined1 *)((long)param_1 + 0x17) = 0;
LAB_00401134:
    *(undefined1 *)((long)param_1 + param_3) = 0;
  }
  else {
    ppcVar5 = &pcStack_a0;
    pcStack_a0 = param_2;
    uStack_98 = param_3;
    FUN_003ddd64(ppcVar5,"%",1,0);
    if (ppcVar5 == (char **)0xffffffffffffffff) {
      if (0x7ffffffffffffff7 < param_3) goto LAB_00401174;
      if (param_3 < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)param_3;
        puVar7 = param_1;
      }
      else {
        uVar9 = (param_3 & 0xfffffffffffffff8) + 8;
        if ((param_3 | 7) != 0x17) {
          uVar9 = param_3 | 7;
        }
        puVar7 = (undefined8 *)(uVar9 + 1);
        __Znwm();
        param_1[1] = param_3;
        param_1[2] = uVar9 + 1 | 0x8000000000000000;
        *param_1 = puVar7;
      }
      _memmove(puVar7,param_2,param_3);
      param_1 = puVar7;
      goto LAB_00401134;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pppcStack_e8 = (char ***)0x0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,param_3);
    uVar9 = 0;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(&pppcStack_e8,"");
      cVar8 = param_2[uVar9];
      if ((param_3 < uVar9 + 3) || (cVar8 != '%')) {
LAB_004010a4:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(int)cVar8);
      }
      else {
        pcStack_a0 = "\\x";
        uStack_98 = 2;
        pcStack_d0 = param_2 + uVar9 + 1;
        uStack_c8 = param_3 - (uVar9 + 1);
        if (1 < uStack_c8) {
          uStack_c8 = 2;
        }
        FUN_00575d30(&puStack_100,&pcStack_a0,&pcStack_d0);
        uVar1 = uStack_f8;
        ppuVar6 = (undefined1 **)puStack_100;
        if (-1 < (char)bStack_e9) {
          uVar1 = (ulong)bStack_e9;
          ppuVar6 = &puStack_100;
        }
        FUN_00571d34(ppuVar6,uVar1,&pppcStack_e8,0);
        if ((int)ppuVar6 == 0) {
          bVar4 = false;
        }
        else {
          uVar1 = uStack_e0;
          if (-1 < (long)uStack_d8) {
            uVar1 = uStack_d8 >> 0x38;
          }
          bVar4 = uVar1 == 1;
        }
        if ((char)bStack_e9 < '\0') {
          __ZdlPv(puStack_100);
        }
        if (!bVar4) {
          cVar8 = param_2[uVar9];
          goto LAB_004010a4;
        }
        ppppcVar2 = (char ****)pppcStack_e8;
        if (-1 < (long)uStack_d8) {
          ppppcVar2 = &pppcStack_e8;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(long)*(char *)ppppcVar2);
        uVar9 = uVar9 + 2;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
    if ((long)uStack_d8 < 0) {
      __ZdlPv(pppcStack_e8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_00401174:
  func_0x0033b318(param_1);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x401180);
  (*pcVar3)();
}



/* Entry: 004011d4; end: 00401c03;  */

/* WARNING: Removing unreachable block (ram,0x00401928) */
/* WARNING: Removing unreachable block (ram,0x00401938) */

void FUN_004011d4(undefined8 *param_1,short *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  short sVar4;
  code *pcVar5;
  short *psVar6;
  char *****pppppcVar7;
  char *pcVar8;
  long lVar9;
  short **ppsVar10;
  short *psVar11;
  undefined8 *puVar12;
  short **ppsVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte bVar18;
  uint uVar19;
  byte bVar20;
  uint uVar21;
  undefined8 *puStack_278;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  byte bStack_261;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_240;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  byte bStack_229;
  undefined8 *puStack_228;
  undefined7 uStack_220;
  undefined1 uStack_219;
  undefined7 uStack_218;
  byte bStack_211;
  char ****ppppcStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  undefined8 *puStack_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  undefined7 uStack_1e8;
  byte bStack_1e1;
  undefined8 uStack_1e0;
  short **ppsStack_1d8;
  undefined1 uStack_1d0;
  char cStack_1c9;
  undefined8 uStack_1c8;
  char cStack_1b1;
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined8 auStack_198 [3];
  undefined8 uStack_180;
  char cStack_169;
  undefined8 *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  short *psStack_148;
  undefined8 *puStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  char ****ppppcStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  short *psStack_100;
  short **ppsStack_f8;
  undefined1 auStack_f0 [32];
  undefined7 uStack_d0;
  byte bStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [8];
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003bdeb4(auStack_f0);
  psStack_100 = param_2;
  ppsStack_f8 = (short **)param_3;
  if (param_3 == (undefined8 *)0x0) {
LAB_00401248:
    FUN_00401c04(&puStack_1f8,"scheme",6,param_2,param_3,"Scheme not found.",0x11);
    FUN_0035aa08(param_1,&puStack_1f8);
    if (((ulong)puStack_1f8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    psVar6 = param_2;
    _memchr(param_2,0x3a,param_3);
    puVar12 = (undefined8 *)((long)psVar6 - (long)param_2);
    if (psVar6 == (short *)0x0) {
      puVar12 = (undefined8 *)0xffffffffffffffff;
    }
    puVar1 = (undefined1 *)((long)puVar12 + 1);
    if (puVar1 < (undefined1 *)0x2) goto LAB_00401248;
    puVar16 = param_3;
    if (puVar12 <= param_3) {
      puVar16 = puVar12;
    }
    if ((undefined8 *)0x7ffffffffffffff7 < puVar16) goto LAB_00401a68;
    if ((undefined8 *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar16) {
      uVar15 = ((ulong)puVar16 & 0xfffffffffffffff8) + 8;
      if (((ulong)puVar16 | 7) != 0x17) {
        uVar15 = (ulong)puVar16 | 7;
      }
      pppppcVar7 = (char *****)(uVar15 + 1);
      __Znwm();
      uStack_108 = uVar15 + 1 | 0x8000000000000000;
      ppppcStack_118 = (char ****)pppppcVar7;
      puStack_110 = puVar16;
    }
    else {
      uStack_108 = CONCAT17((char)puVar16,(undefined7)uStack_108);
      pppppcVar7 = &ppppcStack_118;
    }
    _memmove(pppppcVar7,param_2,puVar16);
    *(char *)((long)pppppcVar7 + (long)puVar16) = '\0';
    puVar12 = puStack_110;
    pppppcVar7 = (char *****)ppppcStack_118;
    if (-1 < (long)uStack_108) {
      puVar12 = (undefined8 *)(uStack_108 >> 0x38);
      pppppcVar7 = &ppppcStack_118;
    }
    if (puVar12 != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
      do {
        pcVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-.";
        _memchr("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-.",
                (long)*(char *)((long)pppppcVar7 + (long)puVar16),0x41);
        if (pcVar8 == (char *)0x0) {
          if (puVar16 != (undefined8 *)0xffffffffffffffff) {
            FUN_00401c04(&puStack_1f8,"scheme",6,param_2,param_3,
                         "Scheme contains invalid characters.",0x23);
            FUN_0035aa08(param_1,&puStack_1f8);
            if (((ulong)puStack_1f8 & 1) != 0) {
              FUN_0055293c();
            }
            goto LAB_004017ec;
          }
          break;
        }
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar12 != puVar16);
    }
    cVar2 = *(char *)pppppcVar7;
    lVar9 = (long)cVar2;
    if (cVar2 < 0) {
      ___maskrune(lVar9,0x100);
      uVar19 = (uint)lVar9;
    }
    else {
      uVar19 = *(uint *)(PTR___DefaultRuneLocale_00999f28 + (ulong)(uint)(int)cVar2 * 4 + 0x3c) &
               0x100;
    }
    if (uVar19 == 0) {
      FUN_00401c04(&puStack_1f8,"scheme",6,param_2,param_3,
                   "Scheme must begin with an alpha character [A-Za-z].",0x33);
      FUN_0035aa08(param_1,&puStack_1f8);
      if (((ulong)puStack_1f8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      psStack_100 = (short *)((long)psStack_100 + (long)puVar1);
      ppsVar13 = (short **)((long)ppsStack_f8 - (long)puVar1);
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_81 = 0;
      ppsStack_f8 = (short **)((long)ppsVar13 + -2);
      if ((short **)((long)&MACH_HEADER.magic + 1) < ppsVar13) {
        if (*psStack_100 != 0x2f2f) {
          puVar12 = (undefined8 *)0x0;
          uVar19 = 0;
          ppsStack_f8 = ppsVar13;
          goto LAB_00401464;
        }
        psStack_100 = psStack_100 + 1;
        ppsVar13 = &psStack_100;
        FUN_00401cf4(ppsVar13,"/?#",0);
        ppsVar10 = ppsStack_f8;
        if (ppsVar13 <= ppsStack_f8) {
          ppsVar10 = ppsVar13;
        }
        FUN_00400f28(&puStack_1f8,psStack_100,ppsVar10);
        uStack_88 = (undefined7)CONCAT44(uStack_1ec,iStack_1f0);
        uStack_81 = uStack_1ec._3_1_;
        uStack_80 = uStack_1e8;
        uVar19 = (uint)bStack_1e1;
        puVar12 = puStack_1f8;
        if (ppsVar13 != (short **)0xffffffffffffffff) {
          psStack_100 = (short *)((long)psStack_100 + (long)ppsVar13);
          ppsVar13 = (short **)((long)ppsStack_f8 - (long)ppsVar13);
          goto LAB_004013f0;
        }
        bVar20 = 0;
        puVar16 = (undefined8 *)0x0;
        psStack_100 = (short *)0x8b6650;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_91 = 0;
        bVar18 = bStack_1e1;
LAB_00401634:
        ppsStack_f8 = (short **)0x0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
LAB_0040163c:
        bStack_261 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        bStack_c9 = 0;
        puStack_278 = (undefined8 *)0x0;
        bStack_229 = bVar20;
        bStack_211 = bVar18;
LAB_0040164c:
        puStack_208 = puStack_110;
        ppppcStack_210 = ppppcStack_118;
        uStack_200 = uStack_108;
        ppppcStack_118 = (char ****)0x0;
        puStack_110 = (undefined8 *)0x0;
        uStack_108 = 0;
        uStack_220 = uStack_88;
        uStack_219 = uStack_81;
        uStack_218 = uStack_80;
        uStack_88 = 0;
        uStack_81 = 0;
        uStack_80 = 0;
        uStack_230 = uStack_90;
        uStack_238 = uStack_98;
        uStack_231 = uStack_91;
        uStack_98 = 0;
        uStack_91 = 0;
        uStack_90 = 0;
        uStack_258 = uStack_128;
        uStack_260 = uStack_130;
        uStack_250 = uStack_120;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_268 = uStack_c8;
        uStack_270 = uStack_d0;
        uStack_269 = bStack_c9;
        uStack_d0 = 0;
        bStack_c9 = 0;
        uStack_c8 = 0;
        puStack_240 = puVar16;
        puStack_228 = puVar12;
        FUN_00402194(&puStack_1f8,&ppppcStack_210,&puStack_228,&puStack_240,&uStack_260,&puStack_278
                    );
        FUN_0035ae18(param_1 + 1,&puStack_1f8);
        *param_1 = 0;
        if (cStack_169 < '\0') {
          __ZdlPv(uStack_180);
        }
        puStack_168 = auStack_198;
        FUN_0035af5c(&puStack_168);
        FUN_0035ad28(auStack_1b0,uStack_1a8);
        if (cStack_1b1 < '\0') {
          __ZdlPv(uStack_1c8);
        }
        if (cStack_1c9 < '\0') {
          __ZdlPv(uStack_1e0);
        }
        if ((char)bStack_1e1 < '\0') {
          __ZdlPv(puStack_1f8);
        }
        if ((char)bStack_261 < '\0') {
          __ZdlPv(puStack_278);
        }
        puStack_168 = &uStack_260;
        FUN_0035af5c(&puStack_168);
        if ((char)bStack_229 < '\0') {
          __ZdlPv(puStack_240);
        }
        if ((char)bStack_211 < '\0') {
          __ZdlPv(puStack_228);
        }
        if ((long)uStack_200 < 0) {
          __ZdlPv(ppppcStack_210);
        }
        uVar21 = 0;
        puVar16 = (undefined8 *)0x0;
        uVar19 = 0;
        puVar12 = (undefined8 *)0x0;
      }
      else {
        uVar19 = 0;
        puVar12 = (undefined8 *)0x0;
LAB_004013f0:
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_91 = 0;
        ppsStack_f8 = ppsVar13;
        if (ppsVar13 == (short **)0x0) {
          puVar16 = (undefined8 *)0x0;
          bVar20 = 0;
          bVar18 = (byte)uVar19;
          goto LAB_00401634;
        }
LAB_00401464:
        bVar18 = (byte)uVar19;
        ppsVar10 = &psStack_100;
        FUN_00401cf4(ppsVar10,"?#",0);
        ppsVar13 = ppsStack_f8;
        if (ppsVar10 <= ppsStack_f8) {
          ppsVar13 = ppsVar10;
        }
        FUN_00400f28(&puStack_1f8,psStack_100,ppsVar13);
        bVar20 = bStack_1e1;
        puVar16 = puStack_1f8;
        uStack_98 = (undefined7)CONCAT44(uStack_1ec,iStack_1f0);
        uStack_91 = uStack_1ec._3_1_;
        uStack_90 = uStack_1e8;
        uVar21 = (uint)bStack_1e1;
        if (ppsVar10 == (short **)0xffffffffffffffff) {
          psStack_100 = (short *)0x8b6650;
          goto LAB_00401634;
        }
        psStack_100 = (short *)((long)psStack_100 + (long)ppsVar10);
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        ppsStack_f8 = (short **)((long)ppsStack_f8 - (long)ppsVar10);
        if (ppsStack_f8 == (short **)0x0) goto LAB_0040163c;
        if ((char)*psStack_100 != '?') {
          uStack_c8 = 0;
          uStack_d0 = 0;
          bStack_c9 = 0;
LAB_00401588:
          uStack_c8 = 0;
          bStack_c9 = 0;
          uStack_d0 = 0;
          if ((char)*psStack_100 == '#') {
            psVar6 = (short *)((long)psStack_100 + 1);
            puVar3 = (undefined8 *)((long)ppsStack_f8 - 1);
            psStack_100 = psVar6;
            ppsStack_f8 = (short **)puVar3;
            puVar14 = puVar3;
            psVar11 = psVar6;
            if (puVar3 != (undefined8 *)0x0) {
LAB_004015b4:
              sVar4 = *psVar11;
              uVar15 = (ulong)(char)sVar4;
              FUN_00403220();
              if (((char)sVar4 == '%') || ((uVar15 & 1) != 0)) goto LAB_004015cc;
              FUN_00401c04(&puStack_1f8,"fragment",8,param_2,param_3,
                           "Fragment contains invalid characters.",0x25);
              FUN_0035aa08(param_1,&puStack_1f8);
LAB_00401a44:
              FUN_0033c494(&puStack_1f8);
              goto LAB_004017c4;
            }
LAB_004015d8:
            FUN_00400f28(&puStack_1f8,psVar6,puVar3);
            uStack_d0 = (undefined7)CONCAT44(uStack_1ec,iStack_1f0);
            bStack_c9 = uStack_1ec._3_1_;
            uStack_c8 = uStack_1e8;
            puStack_278 = puStack_1f8;
            bStack_229 = bVar20;
            bStack_261 = bStack_1e1;
            bStack_211 = bVar18;
          }
          else {
LAB_00401610:
            uStack_c8 = 0;
            bStack_c9 = 0;
            uStack_d0 = 0;
            bStack_261 = 0;
            puStack_278 = (undefined8 *)0x0;
            bStack_229 = bVar20;
            bStack_211 = bVar18;
          }
          goto LAB_0040164c;
        }
        psVar6 = (short *)((long)psStack_100 + 1);
        puVar3 = (undefined8 *)((long)ppsStack_f8 - 1);
        psStack_100 = psVar6;
        ppsStack_f8 = (short **)puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          puVar14 = (undefined8 *)0xffffffffffffffff;
        }
        else {
          psVar11 = psVar6;
          _memchr(psVar6,0x23,puVar3);
          puVar14 = (undefined8 *)((long)psVar11 - (long)psVar6);
          if (psVar11 == (short *)0x0) {
            puVar14 = (undefined8 *)0xffffffffffffffff;
          }
        }
        if (puVar14 <= puVar3) {
          puVar3 = puVar14;
        }
        psVar11 = psVar6;
        puVar17 = puVar3;
        if (puVar3 != (undefined8 *)0x0) {
          do {
            sVar4 = *psVar11;
            uVar15 = (ulong)(char)sVar4;
            FUN_00403220();
            if (((char)sVar4 != '%') && ((uVar15 & 1) == 0)) {
              FUN_00401c04(&puStack_1f8,"query string",0xc,param_2,param_3,
                           "Query string contains invalid characters.",0x29);
              FUN_0035aa08(param_1,&puStack_1f8);
              goto LAB_00401a44;
            }
            puVar17 = (undefined8 *)((long)puVar17 - 1);
            psVar11 = (short *)((long)psVar11 + 1);
          } while (puVar17 != (undefined8 *)0x0);
          uStack_138 = 0x26;
          puStack_1f8 = (undefined8 *)0x0;
          iStack_1f0 = 0;
          uStack_1e8 = 0;
          bStack_1e1 = 0;
          uStack_1e0 = 0;
          ppsStack_1d8 = &psStack_148;
          uStack_1d0 = 0x26;
          psStack_148 = psVar6;
          puStack_140 = puVar3;
          FUN_00667b38(&puStack_1f8);
          puVar3 = puStack_140;
          while (iStack_1f0 != 2 || puStack_1f8 != puVar3) {
            uStack_c8 = (undefined7)uStack_1e0;
            uStack_c1 = (undefined1)((ulong)uStack_1e0 >> 0x38);
            uStack_d0 = uStack_1e8;
            bStack_c9 = bStack_1e1;
            uStack_c0 = 0x10000003d;
            auStack_b8[0] = 0;
            FUN_003dcea4(&puStack_168,&uStack_d0);
            if (lStack_160 != 0) {
              FUN_00400f28(&uStack_d0,puStack_168);
              FUN_00400f28(auStack_b8,uStack_158,uStack_150);
              FUN_00401d84(&uStack_130,&uStack_d0);
            }
            FUN_00667b38(&puStack_1f8);
          }
          if (puVar14 != (undefined8 *)0xffffffffffffffff) {
            psStack_100 = (short *)((long)psStack_100 + (long)puVar14);
            uStack_c8 = 0;
            uStack_d0 = 0;
            bStack_c9 = 0;
            ppsStack_f8 = (short **)((long)ppsStack_f8 - (long)puVar14);
            if (ppsStack_f8 != (short **)0x0) goto LAB_00401588;
            goto LAB_00401610;
          }
          psStack_100 = (short *)0x8b6650;
          ppsStack_f8 = (short **)0x0;
          goto LAB_0040163c;
        }
        FUN_00401c04(&puStack_1f8,&DAT_008ff0cd,5,param_2,param_3,"Invalid query string.",0x15);
        FUN_0035aa08(param_1,&puStack_1f8);
        if (((ulong)puStack_1f8 & 1) != 0) {
          FUN_0055293c();
        }
      }
LAB_004017c4:
      puStack_1f8 = &uStack_130;
      FUN_0035af5c(&puStack_1f8);
      if (uVar21 >> 7 != 0) {
        __ZdlPv(puVar16);
      }
      if (uVar19 >> 7 != 0) {
        __ZdlPv(puVar12);
      }
    }
LAB_004017ec:
    if ((long)uStack_108 < 0) {
      __ZdlPv(ppppcStack_118);
    }
  }
  FUN_0035d18c(auStack_f0);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_00401a68:
  func_0x0033b318(&ppppcStack_118);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x401a74);
  (*pcVar5)();
LAB_004015cc:
  puVar14 = (undefined8 *)((long)puVar14 - 1);
  psVar11 = (short *)((long)psVar11 + 1);
  if (puVar14 == (undefined8 *)0x0) goto LAB_004015d8;
  goto LAB_004015b4;
}



/* Entry: 00401c04; end: 00401cf3;  */

long ** FUN_00401c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  long lVar2;
  undefined8 **ppuVar3;
  long **pplVar4;
  char *pcVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 **ppuVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plStack_a0;
  char *pcStack_98;
  byte bStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_58 = &uStack_68;
  uStack_50 = 0x561238;
  puStack_48 = &uStack_78;
  uStack_40 = 0x561238;
  puStack_38 = &uStack_88;
  uStack_30 = 0x561238;
  ppuVar8 = &puStack_58;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_2;
  uStack_60 = param_3;
  FUN_0056189c(&plStack_a0,"Could not parse \'%s\' from uri \'%s\'. %s",0x26,ppuVar8,3);
  pcVar7 = pcStack_98;
  pplVar4 = (long **)plStack_a0;
  if (-1 < (char)bStack_89) {
    pcVar7 = (char *)(ulong)bStack_89;
    pplVar4 = &plStack_a0;
  }
  func_0x005535e8(param_1);
  if ((char)bStack_89 < '\0') {
    pplVar4 = (long **)plStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return pplVar4;
  }
  ___stack_chk_fail();
  if ((char)bStack_89 < '\0') {
    __ZdlPv(plStack_a0);
  }
  __Unwind_Resume();
  lVar2 = (long)*pplVar4;
  ppuVar3 = (undefined8 **)pplVar4[1];
  pcVar5 = pcVar7;
  _strlen();
  if (ppuVar8 < ppuVar3 && pcVar5 != (char *)0x0) {
    pcVar9 = (char *)(lVar2 + (long)ppuVar8);
    pcVar1 = (char *)(lVar2 + (long)ppuVar3);
    do {
      pcVar11 = pcVar5;
      pcVar12 = pcVar7;
      do {
        pcVar10 = pcVar9;
        if (*pcVar9 == *pcVar12) goto LAB_00401d68;
        pcVar12 = pcVar12 + 1;
        pcVar11 = pcVar11 + -1;
      } while (pcVar11 != (char *)0x0);
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar1;
    } while (pcVar9 != pcVar1);
LAB_00401d68:
    plVar6 = (long *)(pcVar10 + -lVar2);
    if (pcVar10 == pcVar1) {
      plVar6 = (long *)0xffffffffffffffff;
    }
  }
  else {
    plVar6 = (long *)0xffffffffffffffff;
  }
  return (long **)plVar6;
}



/* Entry: 00401cf4; end: 00401d83;  */

long FUN_00401cf4(long *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  lVar4 = *param_1;
  uVar2 = param_1[1];
  pcVar3 = param_2;
  _strlen();
  if (param_3 < uVar2 && pcVar3 != (char *)0x0) {
    pcVar5 = (char *)(lVar4 + param_3);
    pcVar1 = (char *)(lVar4 + uVar2);
    do {
      pcVar7 = pcVar3;
      pcVar8 = param_2;
      do {
        pcVar6 = pcVar5;
        if (*pcVar5 == *pcVar8) goto LAB_00401d68;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + -1;
      } while (pcVar7 != (char *)0x0);
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar1;
    } while (pcVar5 != pcVar1);
LAB_00401d68:
    lVar4 = (long)pcVar6 - lVar4;
    if (pcVar6 == pcVar1) {
      lVar4 = -1;
    }
  }
  else {
    lVar4 = -1;
  }
  return lVar4;
}



/* Entry: 00401d84; end: 00401eeb;  */

ulong *** FUN_00401d84(ulong ***param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong ***pppuVar2;
  ulong **ppuVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong **ppuVar9;
  ulong **ppuStack_58;
  ulong **ppuStack_50;
  ulong **ppuStack_48;
  ulong **ppuStack_40;
  ulong **ppuStack_38;
  
  pppuVar2 = param_1 + 2;
  ppuVar3 = param_1[1];
  if (ppuVar3 < *pppuVar2) {
    puVar8 = (ulong *)param_2[1];
    puVar7 = (ulong *)*param_2;
    ppuVar3[2] = (ulong *)param_2[2];
    ppuVar3[1] = puVar8;
    *ppuVar3 = puVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar8 = (ulong *)param_2[4];
    puVar7 = (ulong *)param_2[3];
    ppuVar3[5] = (ulong *)param_2[5];
    ppuVar3[4] = puVar8;
    ppuVar3[3] = puVar7;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    ppuVar3 = ppuVar3 + 6;
    param_1[1] = ppuVar3;
  }
  else {
    lVar4 = (long)ppuVar3 - (long)*param_1 >> 4;
    uVar1 = lVar4 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar1) {
      FUN_004033ec();
      FUN_0040357c(&ppuStack_58);
      __Unwind_Resume();
      if (*(char *)((long)param_1 + 0x2f) < '\0') {
        __ZdlPv(param_1[3]);
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      return param_1;
    }
    lVar5 = (long)*pppuVar2 - (long)*param_1 >> 4;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    ppuStack_38 = (ulong **)pppuVar2;
    if (uVar6 == 0) {
      ppuStack_58 = (ulong **)0x0;
    }
    else {
      FUN_00403400();
      ppuStack_58 = (ulong **)pppuVar2;
    }
    ppuStack_50 = ppuStack_58 + lVar4 * 2;
    ppuStack_40 = ppuStack_58 + uVar6 * 6;
    ppuVar9 = (ulong **)param_2[1];
    ppuVar3 = (ulong **)*param_2;
    ppuStack_50[2] = (ulong *)param_2[2];
    ppuStack_50[1] = (ulong *)ppuVar9;
    *ppuStack_50 = (ulong *)ppuVar3;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    ppuVar9 = (ulong **)param_2[4];
    ppuVar3 = (ulong **)param_2[3];
    ppuStack_50[5] = (ulong *)param_2[5];
    ppuStack_50[4] = (ulong *)ppuVar9;
    ppuStack_50[3] = (ulong *)ppuVar3;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    ppuStack_48 = ppuStack_50 + 6;
    FUN_00403378(param_1,&ppuStack_58);
    ppuVar3 = param_1[1];
    pppuVar2 = &ppuStack_58;
    FUN_0040357c(pppuVar2);
  }
  param_1[1] = ppuVar3;
  return pppuVar2;
}



/* Entry: 00401eec; end: 00401f2b;  */

undefined8 * FUN_00401eec(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 00401f2c; end: 00402193;  */

void FUN_00401f2c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong auStack_c8 [2];
  char cStack_b1;
  undefined8 uStack_b0;
  char cStack_99;
  undefined8 uStack_98;
  char cStack_81;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  char cStack_39;
  undefined8 *puStack_38;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    if (param_3[1] == 0) goto LAB_00401f8c;
  }
  else if (*(char *)((long)param_3 + 0x17) == '\0') goto LAB_00401f8c;
  if (param_4[0x17] < '\0') {
    if (*(long *)(param_4 + 8) == 0) goto LAB_00401f8c;
    pcVar1 = *(char **)param_4;
  }
  else {
    pcVar1 = param_4;
    if (param_4[0x17] == '\0') goto LAB_00401f8c;
  }
  if (*pcVar1 != '/') {
    func_0x005535e8(auStack_c8,"if authority is present, path must start with a \'/\'",0x33);
    FUN_0035aa08(param_1,auStack_c8);
    if ((auStack_c8[0] & 1) == 0) {
      return;
    }
    FUN_0055293c();
    return;
  }
LAB_00401f8c:
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  lStack_d0 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_f8 = param_3[1];
  uStack_100 = *param_3;
  lStack_f0 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uStack_118 = *(undefined8 *)(param_4 + 8);
  uStack_120 = *(undefined8 *)param_4;
  lStack_110 = *(long *)(param_4 + 0x10);
  param_4[8] = '\0';
  param_4[9] = '\0';
  param_4[10] = '\0';
  param_4[0xb] = '\0';
  param_4[0xc] = '\0';
  param_4[0xd] = '\0';
  param_4[0xe] = '\0';
  param_4[0xf] = '\0';
  param_4[0x10] = '\0';
  param_4[0x11] = '\0';
  param_4[0x12] = '\0';
  param_4[0x13] = '\0';
  param_4[0x14] = '\0';
  param_4[0x15] = '\0';
  param_4[0x16] = '\0';
  param_4[0x17] = '\0';
  param_4[0] = '\0';
  param_4[1] = '\0';
  param_4[2] = '\0';
  param_4[3] = '\0';
  param_4[4] = '\0';
  param_4[5] = '\0';
  param_4[6] = '\0';
  param_4[7] = '\0';
  uStack_138 = param_5[1];
  uStack_140 = *param_5;
  uStack_130 = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  uStack_158 = param_6[1];
  uStack_160 = *param_6;
  lStack_150 = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  FUN_00402194(auStack_c8,&uStack_e0,&uStack_100,&uStack_120,&uStack_140,&uStack_160);
  FUN_0035ae18(param_1 + 1,auStack_c8);
  *param_1 = 0;
  if (cStack_39 < '\0') {
    __ZdlPv(uStack_50);
  }
  puStack_38 = auStack_68;
  FUN_0035af5c(&puStack_38);
  FUN_0035ad28(auStack_80,uStack_78);
  if (cStack_81 < '\0') {
    __ZdlPv(uStack_98);
  }
  if (cStack_99 < '\0') {
    __ZdlPv(uStack_b0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(auStack_c8[0]);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  puStack_38 = &uStack_140;
  FUN_0035af5c(&puStack_38);
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if (lStack_f0 < 0) {
    __ZdlPv(uStack_100);
  }
  if (lStack_d0 < 0) {
    __ZdlPv(uStack_e0);
  }
  return;
}



/* Entry: 00402194; end: 00402367;  */

undefined8 *
FUN_00402194(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            long *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puStack_80;
  ulong uStack_78;
  undefined1 uStack_69;
  undefined8 **ppuStack_68;
  
  uVar10 = param_2[1];
  uVar8 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar10;
  *param_1 = uVar8;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar10 = param_3[1];
  uVar8 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar10;
  param_1[3] = uVar8;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar10 = param_4[1];
  uVar8 = *param_4;
  param_1[8] = param_4[2];
  param_1[7] = uVar10;
  param_1[6] = uVar8;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  plVar4 = param_1 + 0xc;
  *plVar4 = 0;
  param_1[10] = 0;
  puVar3 = param_1 + 9;
  *puVar3 = param_1 + 10;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar9 = *param_5;
  param_1[0xd] = param_5[1];
  *plVar4 = lVar9;
  param_1[0xe] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  uVar10 = param_6[1];
  uVar8 = *param_6;
  param_1[0x11] = param_6[2];
  param_1[0x10] = uVar10;
  param_1[0xf] = uVar8;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  puVar7 = (undefined8 *)*plVar4;
  puVar1 = (undefined8 *)param_1[0xd];
  if (puVar7 != puVar1) {
    do {
      if ((char)*(byte *)((long)puVar7 + 0x2f) < '\0') {
        puVar5 = (undefined8 *)puVar7[3];
        uVar6 = puVar7[4];
      }
      else {
        puVar5 = puVar7 + 3;
        uVar6 = (ulong)*(byte *)((long)puVar7 + 0x2f);
      }
      if ((char)*(byte *)((long)puVar7 + 0x17) < '\0') {
        puStack_80 = (undefined8 *)*puVar7;
        uStack_78 = puVar7[1];
      }
      else {
        uStack_78 = (ulong)*(byte *)((long)puVar7 + 0x17);
        puStack_80 = puVar7;
      }
      puVar2 = puVar3;
      ppuStack_68 = &puStack_80;
      FUN_004035f0(puVar3,&puStack_80,&UNK_008000a0,&ppuStack_68,&uStack_69);
      puVar2[6] = puVar5;
      puVar2[7] = uVar6;
      puVar7 = puVar7 + 6;
    } while (puVar7 != puVar1);
  }
  return param_1;
}



/* Entry: 00402368; end: 004031e7;  */

/* WARNING: Removing unreachable block (ram,0x00402cec) */
/* WARNING: Removing unreachable block (ram,0x004027a0) */
/* WARNING: Removing unreachable block (ram,0x00402628) */
/* WARNING: Removing unreachable block (ram,0x004028e0) */
/* WARNING: Removing unreachable block (ram,0x00402e28) */

void FUN_00402368(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 ****ppppuVar4;
  long **pplVar5;
  long **pplVar6;
  code *pcVar7;
  long ***ppplVar8;
  long *plVar9;
  undefined ***pppuVar10;
  long ****pppplVar11;
  undefined8 *puVar12;
  long ****pppplVar13;
  ulong uVar14;
  char *pcVar15;
  undefined8 uVar16;
  long ****pppplVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long **pplStack_238;
  long **pplStack_230;
  long **pplStack_228;
  long **pplStack_220;
  long ***ppplStack_218;
  long ***ppplStack_210;
  undefined8 ***pppuStack_208;
  ulong uStack_200;
  byte bStack_1f1;
  long ***ppplStack_1f0;
  long ***ppplStack_1e8;
  byte bStack_1d9;
  undefined8 ***pppuStack_1d8;
  ulong uStack_1d0;
  byte bStack_1c1;
  undefined **ppuStack_1c0;
  code *pcStack_1b8;
  undefined ***pppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined ***pppuStack_188;
  undefined **ppuStack_180;
  code *pcStack_178;
  undefined ***pppuStack_168;
  undefined **ppuStack_160;
  code *pcStack_158;
  undefined ***pppuStack_148;
  undefined **ppuStack_140;
  code *pcStack_138;
  undefined ***pppuStack_128;
  undefined8 ***pppuStack_120;
  ulong uStack_118;
  long **pplStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  undefined **ppuStack_c0;
  code *pcStack_b8;
  undefined ***pppuStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***appplStack_88 [2];
  char cStack_71;
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_00999f88;
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    puVar12 = (undefined8 *)*param_2;
    uVar14 = param_2[1];
  }
  else {
    uVar14 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar12 = param_2;
  }
  ppuStack_160 = &PTR_DAT_009e2158;
  pcStack_158 = FUN_004031e8;
  pppuStack_148 = &ppuStack_160;
  FUN_00400d00(&ppplStack_a0,puVar12,uVar14,&ppuStack_160);
  FUN_00353254(appplStack_88,":");
  pplStack_f0 = (long **)&pplStack_220;
  pplStack_220 = (long **)0x0;
  ppplStack_218 = (long ***)0x0;
  ppplStack_210 = (long ***)0x0;
  pplStack_e8 = (long **)((ulong)pplStack_e8 & 0xffffffffffffff00);
  ppplVar8 = (long ***)0x30;
  __Znwm();
  pppplVar13 = &ppplStack_210;
  ppplStack_210 = ppplVar8 + 6;
  pppplVar11 = pppplVar13;
  pplStack_220 = (long **)ppplVar8;
  ppplStack_218 = ppplVar8;
  FUN_003d5a10(pppplVar13,&ppplStack_a0,alStack_70,ppplVar8);
  lVar20 = 0;
  ppplStack_218 = (long ***)pppplVar11;
  do {
    if ((&cStack_71)[lVar20] < '\0') {
      __ZdlPv(*(undefined8 *)((long)appplStack_88 + lVar20));
    }
    lVar20 = lVar20 + -0x18;
  } while (lVar20 != -0x30);
  if (pppuStack_148 == &ppuStack_160) {
    lVar20 = 4;
    pppuVar10 = &ppuStack_160;
LAB_00402494:
    (*(code *)(*pppuVar10)[lVar20])();
  }
  else if (pppuStack_148 != (undefined ***)0x0) {
    lVar20 = 5;
    pppuVar10 = pppuStack_148;
    goto LAB_00402494;
  }
  ppplVar8 = ppplStack_218;
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    if (param_2[4] != 0) goto LAB_004024bc;
LAB_00402660:
    plVar9 = param_2 + 6;
    bVar2 = *(byte *)((long)param_2 + 0x47);
    if ((char)bVar2 < '\0') {
      uVar14 = param_2[7];
      if (uVar14 != 0) {
        plVar9 = (long *)*plVar9;
        goto LAB_00402684;
      }
    }
    else {
      uVar14 = (ulong)bVar2;
      if (bVar2 != 0) {
LAB_00402684:
        ppuStack_1a0 = &PTR_DAT_009e2158;
        uStack_198 = 0x400ec8;
        pppuStack_188 = &ppuStack_1a0;
        FUN_00400d00(&pplStack_f0,plVar9,uVar14,&ppuStack_1a0);
        if (ppplStack_218 < ppplStack_210) {
          ppplStack_218[2] = pplStack_e0;
          ppplStack_218[1] = pplStack_e8;
          *ppplStack_218 = pplStack_f0;
          pplStack_e8 = (long **)0x0;
          pplStack_e0 = (long **)0x0;
          pplStack_f0 = (long **)0x0;
          ppplStack_218 = ppplStack_218 + 3;
        }
        else {
          lVar20 = (long)ppplStack_218 - (long)pplStack_220 >> 3;
          uVar14 = lVar20 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar14) {
            FUN_0037b568(&pplStack_220);
            goto LAB_00402f08;
          }
          lVar18 = (long)ppplStack_210 - (long)pplStack_220 >> 3;
          uVar19 = lVar18 * 0x5555555555555556;
          if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
            uVar19 = uVar14;
          }
          if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
            uVar19 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar19 == 0) {
            pppplVar11 = (long ****)0x0;
            appplStack_88[1] = (long ***)pppplVar13;
          }
          else {
            pppplVar11 = pppplVar13;
            appplStack_88[1] = (long ***)pppplVar13;
            FUN_0037b57c();
          }
          pppplVar17 = pppplVar11 + lVar20;
          pppplVar17[2] = (long ***)pplStack_e0;
          pppplVar17[1] = (long ***)pplStack_e8;
          *pppplVar17 = (long ***)pplStack_f0;
          pplStack_e8 = (long **)0x0;
          pplStack_e0 = (long **)0x0;
          pplStack_f0 = (long **)0x0;
          ppplStack_90 = (long ***)(pppplVar17 + 3);
          ppplStack_a0 = (long ***)pppplVar11;
          ppplStack_98 = (long ***)pppplVar17;
          appplStack_88[0] = (long ***)(pppplVar11 + uVar19 * 3);
          FUN_0045a5fc(&pplStack_220,&ppplStack_a0);
          ppplVar8 = ppplStack_218;
          func_0x00427834(&ppplStack_a0);
          ppplStack_218 = ppplVar8;
        }
        if (pppuStack_188 == &ppuStack_1a0) {
          lVar20 = 4;
          pppuVar10 = &ppuStack_1a0;
        }
        else {
          if (pppuStack_188 == (undefined ***)0x0) goto LAB_004027d8;
          lVar20 = 5;
          pppuVar10 = pppuStack_188;
        }
        (*(code *)(*pppuVar10)[lVar20])();
      }
    }
LAB_004027d8:
    if (param_2[0xc] != param_2[0xd]) {
      FUN_00353254(&pplStack_f0,"?");
      pplVar6 = pplStack_e8;
      pplVar5 = pplStack_f0;
      if (ppplStack_218 < ppplStack_210) {
        ppplStack_218[2] = pplStack_e0;
        ppplStack_218[1] = pplVar6;
        *ppplStack_218 = pplVar5;
        ppplStack_218 = ppplStack_218 + 3;
      }
      else {
        lVar20 = (long)ppplStack_218 - (long)pplStack_220 >> 3;
        uVar14 = lVar20 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar14) {
          FUN_0037b568(&pplStack_220);
          goto LAB_00402f08;
        }
        lVar18 = (long)ppplStack_210 - (long)pplStack_220 >> 3;
        uVar19 = lVar18 * 0x5555555555555556;
        if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
          uVar19 = uVar14;
        }
        if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
          uVar19 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar19 == 0) {
          pppplVar11 = (long ****)0x0;
          appplStack_88[1] = (long ***)pppplVar13;
        }
        else {
          pppplVar11 = pppplVar13;
          appplStack_88[1] = (long ***)pppplVar13;
          FUN_0037b57c();
        }
        pppplVar17 = pppplVar11 + lVar20;
        pppplVar17[2] = (long ***)pplStack_e0;
        pppplVar17[1] = (long ***)pplStack_e8;
        *pppplVar17 = (long ***)pplStack_f0;
        pplStack_e8 = (long **)0x0;
        pplStack_e0 = (long **)0x0;
        pplStack_f0 = (long **)0x0;
        ppplStack_90 = (long ***)(pppplVar17 + 3);
        ppplStack_a0 = (long ***)pppplVar11;
        ppplStack_98 = (long ***)pppplVar17;
        appplStack_88[0] = (long ***)(pppplVar11 + uVar19 * 3);
        FUN_0045a5fc(&pplStack_220,&ppplStack_a0);
        ppplVar8 = ppplStack_218;
        func_0x00427834(&ppplStack_a0);
        ppplStack_218 = ppplVar8;
      }
      puVar12 = (undefined8 *)param_2[0xc];
      puVar1 = (undefined8 *)param_2[0xd];
      pplStack_230 = (long **)0x0;
      pplStack_228 = (long **)0x0;
      pplStack_238 = (long **)0x0;
      if (puVar12 != puVar1) {
        uVar16 = 0;
        pcVar15 = "";
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pplStack_238,pcVar15,uVar16);
          uVar14 = puVar12[1];
          puVar3 = (undefined8 *)*puVar12;
          if (-1 < (char)*(byte *)((long)puVar12 + 0x17)) {
            uVar14 = (ulong)*(byte *)((long)puVar12 + 0x17);
            puVar3 = puVar12;
          }
          ppuStack_c0 = &PTR_DAT_009e2158;
          pcStack_b8 = FUN_0040386c;
          pppuStack_a8 = &ppuStack_c0;
          FUN_00400d00(&ppplStack_1f0,puVar3,uVar14,&ppuStack_c0);
          ppplStack_98 = ppplStack_1e8;
          ppplStack_a0 = ppplStack_1f0;
          if (-1 < (char)bStack_1d9) {
            ppplStack_98 = (long ***)(ulong)bStack_1d9;
            ppplStack_a0 = (long ***)&ppplStack_1f0;
          }
          pplStack_f0 = (long **)0x8e52f8;
          pplStack_e8 = (long **)0x1;
          uVar14 = puVar12[4];
          puVar3 = (undefined8 *)puVar12[3];
          if (-1 < (char)*(byte *)((long)puVar12 + 0x2f)) {
            uVar14 = (ulong)*(byte *)((long)puVar12 + 0x2f);
            puVar3 = puVar12 + 3;
          }
          ppuStack_140 = &PTR_DAT_009e2158;
          pcStack_138 = FUN_0040386c;
          pppuStack_128 = &ppuStack_140;
          FUN_00400d00(&pppuStack_208,puVar3,uVar14,&ppuStack_140);
          uStack_118 = uStack_200;
          pppuStack_120 = pppuStack_208;
          if (-1 < (char)bStack_1f1) {
            uStack_118 = (ulong)bStack_1f1;
            pppuStack_120 = &pppuStack_208;
          }
          FUN_00575ddc(&pppuStack_1d8,&ppplStack_a0,&pplStack_f0,&pppuStack_120);
          uVar14 = uStack_1d0;
          ppppuVar4 = (undefined8 ****)pppuStack_1d8;
          if (-1 < (char)bStack_1c1) {
            uVar14 = (ulong)bStack_1c1;
            ppppuVar4 = &pppuStack_1d8;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pplStack_238,ppppuVar4,uVar14);
          if ((char)bStack_1c1 < '\0') {
            __ZdlPv(pppuStack_1d8);
          }
          if ((char)bStack_1f1 < '\0') {
            __ZdlPv(pppuStack_208);
          }
          if (pppuStack_128 == &ppuStack_140) {
            pppuVar10 = &ppuStack_140;
            lVar20 = 4;
LAB_00402a70:
            (*(code *)(*pppuVar10)[lVar20])();
          }
          else if (pppuStack_128 != (undefined ***)0x0) {
            lVar20 = 5;
            pppuVar10 = pppuStack_128;
            goto LAB_00402a70;
          }
          if ((char)bStack_1d9 < '\0') {
            __ZdlPv(ppplStack_1f0);
          }
          if (pppuStack_a8 == &ppuStack_c0) {
            pppuVar10 = &ppuStack_c0;
            lVar20 = 4;
LAB_00402ab0:
            (*(code *)(*pppuVar10)[lVar20])();
          }
          else if (pppuStack_a8 != (undefined ***)0x0) {
            lVar20 = 5;
            pppuVar10 = pppuStack_a8;
            goto LAB_00402ab0;
          }
          puVar12 = puVar12 + 6;
          uVar16 = 1;
          pcVar15 = "&";
        } while (puVar12 != puVar1);
      }
      if (ppplStack_218 < ppplStack_210) {
        ppplStack_218[2] = pplStack_228;
        ppplStack_218[1] = pplStack_230;
        *ppplStack_218 = pplStack_238;
        ppplStack_218 = ppplStack_218 + 3;
      }
      else {
        lVar20 = (long)ppplStack_218 - (long)pplStack_220 >> 3;
        uVar14 = lVar20 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar14) {
          FUN_0037b568(&pplStack_220);
          goto LAB_00402f08;
        }
        lVar18 = (long)ppplStack_210 - (long)pplStack_220 >> 3;
        uVar19 = lVar18 * 0x5555555555555556;
        if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
          uVar19 = uVar14;
        }
        if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
          uVar19 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar19 == 0) {
          pppplVar11 = (long ****)0x0;
          appplStack_88[1] = (long ***)pppplVar13;
        }
        else {
          pppplVar11 = pppplVar13;
          appplStack_88[1] = (long ***)pppplVar13;
          FUN_0037b57c();
        }
        pppplVar17 = pppplVar11 + lVar20;
        pppplVar17[2] = (long ***)pplStack_228;
        pppplVar17[1] = (long ***)pplStack_230;
        *pppplVar17 = (long ***)pplStack_238;
        pplStack_230 = (long **)0x0;
        pplStack_228 = (long **)0x0;
        pplStack_238 = (long **)0x0;
        ppplStack_90 = (long ***)(pppplVar17 + 3);
        ppplStack_a0 = (long ***)pppplVar11;
        ppplStack_98 = (long ***)pppplVar17;
        appplStack_88[0] = (long ***)(pppplVar11 + uVar19 * 3);
        FUN_0045a5fc(&pplStack_220,&ppplStack_a0);
        ppplVar8 = ppplStack_218;
        func_0x00427834(&ppplStack_a0);
        ppplStack_218 = ppplVar8;
        if ((long)pplStack_228 < 0) {
          __ZdlPv(pplStack_238);
        }
      }
    }
    if (*(char *)((long)param_2 + 0x8f) < '\0') {
      if (param_2[0x10] != 0) goto LAB_00402bf0;
    }
    else if (*(char *)((long)param_2 + 0x8f) != '\0') {
LAB_00402bf0:
      FUN_00353254(&pplStack_f0,&DAT_00915f84);
      pplVar6 = pplStack_e8;
      pplVar5 = pplStack_f0;
      if (ppplStack_218 < ppplStack_210) {
        ppplStack_218[2] = pplStack_e0;
        ppplStack_218[1] = pplVar6;
        *ppplStack_218 = pplVar5;
        ppplStack_218 = ppplStack_218 + 3;
      }
      else {
        lVar20 = (long)ppplStack_218 - (long)pplStack_220 >> 3;
        uVar14 = lVar20 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar14) {
          FUN_0037b568(&pplStack_220);
          goto LAB_00402f08;
        }
        lVar18 = (long)ppplStack_210 - (long)pplStack_220 >> 3;
        uVar19 = lVar18 * 0x5555555555555556;
        if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
          uVar19 = uVar14;
        }
        if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
          uVar19 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar19 == 0) {
          pppplVar11 = (long ****)0x0;
          appplStack_88[1] = (long ***)pppplVar13;
        }
        else {
          pppplVar11 = pppplVar13;
          appplStack_88[1] = (long ***)pppplVar13;
          FUN_0037b57c();
        }
        pppplVar17 = pppplVar11 + lVar20;
        pppplVar17[2] = (long ***)pplStack_e0;
        pppplVar17[1] = (long ***)pplStack_e8;
        *pppplVar17 = (long ***)pplStack_f0;
        pplStack_e8 = (long **)0x0;
        pplStack_e0 = (long **)0x0;
        pplStack_f0 = (long **)0x0;
        ppplStack_90 = (long ***)(pppplVar17 + 3);
        ppplStack_a0 = (long ***)pppplVar11;
        ppplStack_98 = (long ***)pppplVar17;
        appplStack_88[0] = (long ***)(pppplVar11 + uVar19 * 3);
        FUN_0045a5fc(&pplStack_220,&ppplStack_a0);
        ppplVar8 = ppplStack_218;
        func_0x00427834(&ppplStack_a0);
        ppplStack_218 = ppplVar8;
      }
      if ((char)*(byte *)((long)param_2 + 0x8f) < '\0') {
        puVar12 = (undefined8 *)param_2[0xf];
        uVar14 = param_2[0x10];
      }
      else {
        puVar12 = param_2 + 0xf;
        uVar14 = (ulong)*(byte *)((long)param_2 + 0x8f);
      }
      ppuStack_1c0 = &PTR_DAT_009e2158;
      pcStack_1b8 = FUN_00403220;
      pppuStack_1a8 = &ppuStack_1c0;
      FUN_00400d00(&pplStack_f0,puVar12,uVar14,&ppuStack_1c0);
      if (ppplStack_218 < ppplStack_210) {
        ppplStack_218[2] = pplStack_e0;
        ppplStack_218[1] = pplStack_e8;
        *ppplStack_218 = pplStack_f0;
        pplStack_e8 = (long **)0x0;
        pplStack_e0 = (long **)0x0;
        pplStack_f0 = (long **)0x0;
        ppplStack_218 = ppplStack_218 + 3;
      }
      else {
        lVar20 = (long)ppplStack_218 - (long)pplStack_220 >> 3;
        uVar14 = lVar20 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar14) {
          FUN_0037b568(&pplStack_220);
          goto LAB_00402f08;
        }
        lVar18 = (long)ppplStack_210 - (long)pplStack_220 >> 3;
        uVar19 = lVar18 * 0x5555555555555556;
        if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
          uVar19 = uVar14;
        }
        if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
          uVar19 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar19 == 0) {
          ppplStack_a0 = (long ***)0x0;
          appplStack_88[1] = (long ***)pppplVar13;
        }
        else {
          appplStack_88[1] = (long ***)pppplVar13;
          FUN_0037b57c();
          ppplStack_a0 = (long ***)pppplVar13;
        }
        pppplVar13 = (long ****)(ppplStack_a0 + lVar20);
        pppplVar13[2] = (long ***)pplStack_e0;
        pppplVar13[1] = (long ***)pplStack_e8;
        *pppplVar13 = (long ***)pplStack_f0;
        pplStack_e8 = (long **)0x0;
        pplStack_e0 = (long **)0x0;
        pplStack_f0 = (long **)0x0;
        ppplStack_90 = (long ***)(pppplVar13 + 3);
        ppplStack_98 = (long ***)pppplVar13;
        appplStack_88[0] = ppplStack_a0 + uVar19 * 3;
        FUN_0045a5fc(&pplStack_220,&ppplStack_a0);
        ppplVar8 = ppplStack_218;
        func_0x00427834(&ppplStack_a0);
        ppplStack_218 = ppplVar8;
      }
      if (pppuStack_1a8 == &ppuStack_1c0) {
        lVar20 = 4;
        pppuVar10 = &ppuStack_1c0;
      }
      else {
        if (pppuStack_1a8 == (undefined ***)0x0) goto LAB_00402e60;
        lVar20 = 5;
        pppuVar10 = pppuStack_1a8;
      }
      (*(code *)(*pppuVar10)[lVar20])();
    }
LAB_00402e60:
    FUN_0037b5c0(param_1,pplStack_220,ppplStack_218,"",0);
    ppplStack_a0 = &pplStack_220;
    FUN_0037b728(&ppplStack_a0);
    if (*(long *)PTR____stack_chk_guard_00999f88 == alStack_70[0]) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(char *)((long)param_2 + 0x2f) == '\0') goto LAB_00402660;
LAB_004024bc:
    if (ppplStack_218 < ppplStack_210) {
      FUN_00353254(ppplStack_218,"//");
      pppplVar11 = (long ****)(ppplVar8 + 3);
    }
    else {
      pppplVar11 = (long ****)&pplStack_220;
      FUN_00403768(pppplVar11,"//");
    }
    if ((char)*(byte *)((long)param_2 + 0x2f) < '\0') {
      puVar12 = (undefined8 *)param_2[3];
      uVar14 = param_2[4];
    }
    else {
      puVar12 = param_2 + 3;
      uVar14 = (ulong)*(byte *)((long)param_2 + 0x2f);
    }
    ppuStack_180 = &PTR_DAT_009e2158;
    pcStack_178 = FUN_00400e7c;
    pppuStack_168 = &ppuStack_180;
    ppplStack_218 = (long ***)pppplVar11;
    FUN_00400d00(&pplStack_f0,puVar12,uVar14,&ppuStack_180);
    if (ppplStack_218 < ppplStack_210) {
      ppplStack_218[2] = pplStack_e0;
      ppplStack_218[1] = pplStack_e8;
      *ppplStack_218 = pplStack_f0;
      pplStack_e8 = (long **)0x0;
      pplStack_e0 = (long **)0x0;
      pplStack_f0 = (long **)0x0;
      ppplStack_218 = ppplStack_218 + 3;
LAB_00402630:
      if (pppuStack_168 == &ppuStack_180) {
        lVar20 = 4;
        pppuVar10 = &ppuStack_180;
      }
      else {
        if (pppuStack_168 == (undefined ***)0x0) goto LAB_00402660;
        lVar20 = 5;
        pppuVar10 = pppuStack_168;
      }
      (*(code *)(*pppuVar10)[lVar20])();
      goto LAB_00402660;
    }
    lVar20 = (long)ppplStack_218 - (long)pplStack_220 >> 3;
    uVar14 = lVar20 * -0x5555555555555555 + 1;
    if (uVar14 < 0xaaaaaaaaaaaaaab) {
      lVar18 = (long)ppplStack_210 - (long)pplStack_220 >> 3;
      uVar19 = lVar18 * 0x5555555555555556;
      if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
        uVar19 = uVar14;
      }
      if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
        uVar19 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar19 == 0) {
        pppplVar11 = (long ****)0x0;
        appplStack_88[1] = (long ***)pppplVar13;
      }
      else {
        pppplVar11 = pppplVar13;
        appplStack_88[1] = (long ***)pppplVar13;
        FUN_0037b57c();
      }
      pppplVar17 = pppplVar11 + lVar20;
      pppplVar17[2] = (long ***)pplStack_e0;
      pppplVar17[1] = (long ***)pplStack_e8;
      *pppplVar17 = (long ***)pplStack_f0;
      pplStack_e8 = (long **)0x0;
      pplStack_e0 = (long **)0x0;
      pplStack_f0 = (long **)0x0;
      ppplStack_90 = (long ***)(pppplVar17 + 3);
      ppplStack_a0 = (long ***)pppplVar11;
      ppplStack_98 = (long ***)pppplVar17;
      appplStack_88[0] = (long ***)(pppplVar11 + uVar19 * 3);
      FUN_0045a5fc(&pplStack_220,&ppplStack_a0);
      ppplVar8 = ppplStack_218;
      func_0x00427834(&ppplStack_a0);
      ppplStack_218 = ppplVar8;
      goto LAB_00402630;
    }
  }
  FUN_0037b568(&pplStack_220);
LAB_00402f08:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x402f0c);
  (*pcVar7)();
}



/* Entry: 004031e8; end: 0040321f;  */

uint FUN_004031e8(ulong param_1)

{
  uint uVar1;
  
  if (((byte)(&UNK_00811470)[param_1 & 0xff] >> 2 & 1) == 0) {
    uVar1 = 0;
    if ((uint)param_1 < 0x2f) {
      uVar1 = (uint)(0x680000000000 >> (param_1 & 0x3f)) & 1;
    }
    return uVar1;
  }
  return 1;
}



/* Entry: 00403220; end: 00403283;  */

bool FUN_00403220(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = param_1;
  FUN_00403284();
  uVar3 = (uint)param_1;
  if (((uVar2 & 1) == 0) &&
     ((0x1c < uVar3 - 0x21 || ((0x14000fe9U >> (ulong)(uVar3 - 0x21 & 0x1f) & 1) == 0)))) {
    bVar1 = uVar3 == 0x3a || uVar3 == 0x40;
  }
  else {
    bVar1 = true;
  }
  if ((uVar3 & 0xffffffef) == 0x2f) {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 00403284; end: 004032cb;  */

bool FUN_00403284(ulong param_1)

{
  int iVar1;
  
  if (((byte)(&UNK_00811470)[param_1 & 0xff] >> 2 & 1) == 0) {
    iVar1 = (int)param_1;
    return iVar1 - 0x2dU < 2 || (iVar1 == 0x5f || iVar1 == 0x7e);
  }
  return true;
}



/* Entry: 004032cc; end: 00403303;  */

void FUN_004032cc(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_DAT_009e2158;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 00403304; end: 0040332f;  */

void FUN_00403304(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_009e2158;
  param_2[1] = uVar1;
  return;
}



/* Entry: 00403330; end: 0040336b;  */

long FUN_00403330(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009e21d8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0040336c; end: 00403377;  */

undefined ** FUN_0040336c(void)

{
  return &PTR_DAT_009e21d8;
}



/* Entry: 00403378; end: 004033eb;  */

void FUN_00403378(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  func_0x00403444(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 004033ec; end: 004033ff;  */

undefined1  [16]
FUN_004033ec(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char *pcStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 < 0x555555555555556) {
    lVar2 = param_2 * 0x30;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  FUN_00349558();
  puStack_88 = &uStack_70;
  puStack_80 = &uStack_60;
  lStack_58 = param_7;
  lVar2 = param_7;
  for (; param_3 != param_5; param_3 = param_3 + -0x30) {
    uVar4 = *(undefined8 *)(param_3 + -0x28);
    uVar3 = *(undefined8 *)(param_3 + -0x30);
    *(undefined8 *)(lStack_58 + -0x20) = *(undefined8 *)(param_3 + -0x20);
    *(undefined8 *)(lStack_58 + -0x28) = uVar4;
    *(undefined8 *)(lStack_58 + -0x30) = uVar3;
    *(undefined8 *)(param_3 + -0x28) = 0;
    *(undefined8 *)(param_3 + -0x20) = 0;
    *(undefined8 *)(param_3 + -0x30) = 0;
    uVar4 = *(undefined8 *)(param_3 + -0x10);
    uVar3 = *(undefined8 *)(param_3 + -0x18);
    *(undefined8 *)(lStack_58 + -8) = *(undefined8 *)(param_3 + -8);
    *(undefined8 *)(lStack_58 + -0x10) = uVar4;
    *(undefined8 *)(lStack_58 + -0x18) = uVar3;
    lStack_58 = lStack_58 + -0x30;
    *(undefined8 *)(param_3 + -0x10) = 0;
    *(undefined8 *)(param_3 + -8) = 0;
    *(undefined8 *)(param_3 + -0x18) = 0;
    lVar2 = lVar2 + -0x30;
  }
  uStack_78 = 1;
  pcStack_90 = pcVar1;
  uStack_70 = param_6;
  lStack_68 = param_7;
  uStack_60 = param_6;
  FUN_004034f8(&pcStack_90);
  auVar6._8_8_ = lVar2;
  auVar6._0_8_ = param_6;
  return auVar6;
}



/* Entry: 00403400; end: 004034f7;  */

undefined1  [16]
FUN_00403400(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_2 < 0x555555555555556) {
    lVar1 = param_2 * 0x30;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  FUN_00349558();
  puStack_78 = &uStack_60;
  puStack_70 = &uStack_50;
  lStack_48 = param_7;
  lVar1 = param_7;
  for (; param_3 != param_5; param_3 = param_3 + -0x30) {
    uVar3 = *(undefined8 *)(param_3 + -0x28);
    uVar2 = *(undefined8 *)(param_3 + -0x30);
    *(undefined8 *)(lStack_48 + -0x20) = *(undefined8 *)(param_3 + -0x20);
    *(undefined8 *)(lStack_48 + -0x28) = uVar3;
    *(undefined8 *)(lStack_48 + -0x30) = uVar2;
    *(undefined8 *)(param_3 + -0x28) = 0;
    *(undefined8 *)(param_3 + -0x20) = 0;
    *(undefined8 *)(param_3 + -0x30) = 0;
    uVar3 = *(undefined8 *)(param_3 + -0x10);
    uVar2 = *(undefined8 *)(param_3 + -0x18);
    *(undefined8 *)(lStack_48 + -8) = *(undefined8 *)(param_3 + -8);
    *(undefined8 *)(lStack_48 + -0x10) = uVar3;
    *(undefined8 *)(lStack_48 + -0x18) = uVar2;
    lStack_48 = lStack_48 + -0x30;
    *(undefined8 *)(param_3 + -0x10) = 0;
    *(undefined8 *)(param_3 + -8) = 0;
    *(undefined8 *)(param_3 + -0x18) = 0;
    lVar1 = lVar1 + -0x30;
  }
  uStack_68 = 1;
  uStack_80 = param_1;
  uStack_60 = param_6;
  lStack_58 = param_7;
  uStack_50 = param_6;
  FUN_004034f8(&uStack_80);
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = param_6;
  return auVar5;
}



/* Entry: 004034f8; end: 0040352b;  */

long FUN_004034f8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_0040352c(param_1);
  }
  return param_1;
}



/* Entry: 0040352c; end: 0040357b;  */

void FUN_0040352c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1[2] + 8);
  lVar3 = *(long *)(param_1[1] + 8);
  if (lVar1 != lVar3) {
    uVar2 = *param_1;
    do {
      FUN_0035add4(uVar2,lVar1);
      lVar1 = lVar1 + 0x30;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 0040357c; end: 004035ef;  */

long * FUN_0040357c(long *param_1)

{
  func_0x004035ac();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 004035f0; end: 00403677;  */

undefined1  [16] FUN_004035f0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_00403678(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x40;
    __Znwm();
    uVar4 = *(undefined8 *)*param_4;
    *(undefined8 *)(lVar3 + 0x28) = ((undefined8 *)*param_4)[1];
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    FUN_00403714(param_1,uStack_38,plVar2,lVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = lVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 00403678; end: 00403713;  */

long * FUN_00403678(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar1 = (long *)*plVar3;
    do {
      while( true ) {
        plVar3 = plVar1;
        lVar2 = param_1;
        func_0x0034082c(param_1,param_3,plVar3 + 4);
        if ((int)lVar2 == 0) break;
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_004036f8;
      }
      lVar2 = param_1;
      func_0x0034082c(param_1,plVar3 + 4,param_3);
      if ((int)lVar2 == 0) break;
      plVar4 = plVar3 + 1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_004036f8:
  *param_2 = plVar3;
  return plVar4;
}



/* Entry: 00403714; end: 00403767;  */

void FUN_00403714(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 00403768; end: 0040386b;  */

ulong FUN_00403768(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar7 = lVar5 * -0x5555555555555555 + 1;
  if (uVar7 < 0xaaaaaaaaaaaaaab) {
    plVar2 = param_1 + 2;
    lVar4 = *plVar2 - *param_1 >> 3;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_38 = plVar2;
    if (uVar6 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_0037b57c();
      plStack_58 = plVar2;
    }
    plStack_50 = plStack_58 + lVar5;
    plStack_40 = plStack_58 + uVar6 * 3;
    plStack_48 = plStack_50;
    FUN_00353254(plStack_50,param_2);
    plStack_48 = plStack_48 + 3;
    FUN_0045a5fc(param_1,&plStack_58);
    uVar7 = param_1[1];
    func_0x00427834(&plStack_58);
    return uVar7;
  }
  FUN_0037b568();
  func_0x00427834(&plStack_58);
  __Unwind_Resume();
  uVar1 = (uint)param_1;
  if ((uVar1 != 0x26) && (uVar1 != 0x3d)) {
    FUN_00403284();
    if ((((ulong)param_1 & 1) == 0) &&
       ((0x1c < uVar1 - 0x21 || ((0x14000fe9U >> (ulong)(uVar1 - 0x21 & 0x1f) & 1) == 0)))) {
      uVar3 = (uint)(uVar1 == 0x3a || uVar1 == 0x40);
    }
    else {
      uVar3 = 1;
    }
    if ((uVar1 & 0xffffffef) == 0x2f) {
      uVar3 = 1;
    }
    return (ulong)uVar3;
  }
  return 0;
}



/* Entry: 0040386c; end: 00403887;  */

bool FUN_0040386c(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if ((uVar2 != 0x26) && (uVar2 != 0x3d)) {
    FUN_00403284();
    if (((param_1 & 1) == 0) &&
       ((0x1c < uVar2 - 0x21 || ((0x14000fe9U >> (ulong)(uVar2 - 0x21 & 0x1f) & 1) == 0)))) {
      bVar1 = uVar2 == 0x3a || uVar2 == 0x40;
    }
    else {
      bVar1 = true;
    }
    if ((uVar2 & 0xffffffef) == 0x2f) {
      bVar1 = true;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 00403888; end: 004038d3;  */

void FUN_00403888(void)

{
  FUN_003f8b58(0x3584f8,0x358514);
  FUN_003f8b58(FUN_0035d88c,FUN_0035d908);
  FUN_003f8b58(0x36122c,0x361230);
  return;
}



/* Entry: 004038d4; end: 00403987;  */

void FUN_004038d4(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **appuStack_d8 [3];
  undefined ***pppuStack_c0;
  undefined **appuStack_b8 [3];
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  FUN_003fd2a4();
  FUN_003ff4cc(param_1);
  FUN_00358528(param_1);
  FUN_003e3c90(param_1);
  FUN_0037c3e8(param_1);
  FUN_0033cf70(param_1);
  FUN_0035d008(param_1);
  FUN_0037cb20(param_1);
  FUN_00377c6c(param_1);
  FUN_0038011c(param_1);
  FUN_00370578(param_1);
  FUN_003d5c58(param_1);
  func_0x00378498(param_1);
  FUN_00361228(param_1);
  FUN_00361240(param_1);
  FUN_00363afc(param_1);
  FUN_00362934(param_1);
  FUN_003f8828(param_1);
  FUN_00403988(param_1);
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  param_1 = param_1 + 0x18;
  ppuStack_58 = &PTR_FUN_009de508;
  pcStack_50 = FUN_003ac418;
  pppuStack_40 = &ppuStack_58;
  FUN_003f517c(param_1,1,&UNK_00002710,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_58;
LAB_003edf7c:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_40;
    goto LAB_003edf7c;
  }
  ppuStack_78 = &PTR_FUN_009de508;
  pcStack_70 = FUN_003ac418;
  pppuStack_60 = &ppuStack_78;
  FUN_003f517c(param_1,3,&UNK_00002710,&ppuStack_78);
  if (pppuStack_60 == &ppuStack_78) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_78;
LAB_003edfc8:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_60;
    goto LAB_003edfc8;
  }
  ppuStack_98 = &PTR_FUN_009de508;
  pcStack_90 = FUN_003ac418;
  pppuStack_80 = &ppuStack_98;
  FUN_003f517c(param_1,4,&UNK_00002710,&ppuStack_98);
  if (pppuStack_80 == &ppuStack_98) {
    lVar3 = 4;
    pppuVar1 = &ppuStack_98;
LAB_003ee014:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_80 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_80;
    goto LAB_003ee014;
  }
  appuStack_b8[0] = &PTR_FUN_009e1720;
  pppuStack_a0 = appuStack_b8;
  FUN_003f517c(param_1,2,&UNK_00002710,appuStack_b8);
  if (pppuStack_a0 == appuStack_b8) {
    lVar3 = 4;
    pppuVar1 = appuStack_b8;
LAB_003ee068:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_a0 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_a0;
    goto LAB_003ee068;
  }
  appuStack_d8[0] = &PTR_DAT_009e17a0;
  pppuStack_c0 = appuStack_d8;
  FUN_003f517c(param_1,4,0x7fffffff,appuStack_d8);
  if (pppuStack_c0 == appuStack_d8) {
    lVar3 = 4;
    pppuVar1 = appuStack_d8;
LAB_003ee0bc:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else {
    pppuVar1 = pppuStack_c0;
    if (pppuStack_c0 != (undefined ***)0x0) {
      lVar3 = 5;
      goto LAB_003ee0bc;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_c0 == appuStack_d8) {
    lVar3 = 4;
    pppuVar2 = appuStack_d8;
  }
  else {
    if (pppuStack_c0 == (undefined ***)0x0) goto LAB_003ee198;
    lVar3 = 5;
    pppuVar2 = pppuStack_c0;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_003ee198:
  __Unwind_Resume(pppuVar1);
  return;
}



/* Entry: 00403988; end: 004039c3;  */

void FUN_00403988(void)

{
  return;
}



/* Entry: 004039c4; end: 00403a27;  */

undefined8 FUN_004039c4(undefined8 *param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = 2;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/local_transport_security.cc"
                 ,0xa3,2,"Invalid arguments to local_tsi_handshaker_create()");
  }
  else {
    pdVar1 = &MACH_HEADER.ncmds;
    func_0x00338c94();
    uVar2 = 0;
    *(undefined **)pdVar1 = &UNK_009e21f8;
    *param_1 = pdVar1;
  }
  return uVar2;
}



/* Entry: 00403a28; end: 00403a33;  */

void FUN_00403a28(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)();
    return;
  }
  return;
}



/* Entry: 00403a34; end: 00403af7;  */

undefined8
FUN_00403a34(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  dword *pdVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 2;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/local_transport_security.cc"
                 ,0x80,2,"Invalid arguments to handshaker_next()");
  }
  else {
    *param_5 = 0;
    if (param_6 == (undefined8 *)0x0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/local_transport_security.cc"
                   ,0x68,2,"Invalid arguments to create_handshaker_result()");
      uVar3 = 0;
    }
    else {
      pdVar1 = &MACH_HEADER.flags;
      func_0x00338c94();
      if (param_3 != 0) {
        lVar2 = param_3;
        func_0x00338c74();
        *(long *)(pdVar1 + 2) = lVar2;
        _memcpy();
      }
      uVar3 = 0;
      *(long *)(pdVar1 + 4) = param_3;
      *(undefined ***)pdVar1 = &PTR_FUN_009e2238;
      *param_6 = pdVar1;
    }
  }
  return uVar3;
}



/* Entry: 00403af8; end: 00403b0f;  */

undefined8 FUN_00403af8(void)

{
  return 0;
}



/* Entry: 00403b10; end: 00403b9b;  */

undefined8 FUN_00403b10(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((param_1 == 0) || (param_2 == (undefined8 *)0x0)) || (param_3 == (undefined8 *)0x0)) {
    uVar2 = 2;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/local_transport_security.cc"
                 ,0x47,2,"Invalid arguments to get_unused_bytes()");
  }
  else {
    uVar2 = 0;
    uVar1 = *(undefined8 *)(param_1 + 8);
    *param_3 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = uVar1;
  }
  return uVar2;
}



/* Entry: 00403b9c; end: 00403e2f;  */

void FUN_00403b9c(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  int *piVar9;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 ***apppuStack_58 [2];
  char cStack_41;
  
  func_0x00339d8c(param_1 + 0x10);
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar2 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    if (uVar2 != 0) {
      FUN_00403e30(apppuStack_58,uVar2 + 2,&uStack_60);
      ppppuVar7 = (undefined8 ****)apppuStack_58[0];
      if (-1 < cStack_41) {
        ppppuVar7 = apppuStack_58;
      }
      plVar1 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar1 = param_3;
      }
      _memmove(ppppuVar7,plVar1,uVar2);
      *(undefined2 *)((long)ppppuVar7 + uVar2) = 0xa0d;
      *(undefined1 *)((undefined2 *)((long)ppppuVar7 + uVar2) + 1) = 0;
      ppppuVar7 = (undefined8 ****)apppuStack_58[0];
      if (-1 < cStack_41) {
        ppppuVar7 = apppuStack_58;
      }
      uVar2 = param_3[1];
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
      }
      _fwrite(ppppuVar7,1,uVar2 + 1,*(undefined8 *)(param_1 + 0x50));
      ppppuVar3 = (undefined8 ****)param_3[1];
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        ppppuVar3 = (undefined8 ****)(ulong)*(byte *)((long)param_3 + 0x17);
      }
      ppppuVar8 = ppppuVar7;
      if (cStack_41 < '\0') {
        ppppuVar8 = (undefined8 ****)apppuStack_58[0];
        __ZdlPv();
      }
      if (ppppuVar7 < ppppuVar3) {
        ___error();
        FUN_003be008(&uStack_68,apppuStack_58,*(undefined4 *)ppppuVar8,"fwrite");
        uVar2 = uStack_68;
        if (uStack_68 == 0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                       ,0xd5,2,"assertion failed: %s");
          _abort();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x403db4);
          (*pcVar6)();
        }
        uStack_68 = 0x36;
        uStack_60 = uVar2;
        uStack_70 = uVar2;
        if ((uVar2 & 1) != 0) {
          piVar9 = (int *)(uVar2 - 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar5) {
              *piVar9 = *piVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_003be004(apppuStack_58,&uStack_70);
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl/key_logging/ssl_key_logging.cc"
                     ,0x5a,2,"Error Appending to TLS session key log file: %s");
        if (cStack_41 < '\0') {
          __ZdlPv(apppuStack_58[0]);
        }
        if ((uStack_70 & 1) != 0) {
          FUN_0055293c();
        }
        _fclose(*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(param_1 + 0x50) = 0;
        if ((uVar2 & 1) != 0) {
          FUN_0055293c(uVar2);
        }
      }
      else {
        _fflush(*(undefined8 *)(param_1 + 0x50));
      }
    }
  }
  func_0x00339da8(param_1 + 0x10);
  return;
}



/* Entry: 00403e30; end: 00403eb3;  */

dword * FUN_00403e30(dword *param_1,ulong param_2)

{
  ulong uVar1;
  dword *pdVar2;
  undefined8 *extraout_x8;
  ulong uVar3;
  
  if (param_2 < 0x7ffffffffffffff8) {
    if (param_2 < 0x17) {
      *(ulong *)(param_1 + 2) = 0;
      *(ulong *)(param_1 + 4) = 0;
      *(ulong *)param_1 = 0;
      *(char *)((long)param_1 + 0x17) = (char)param_2;
    }
    else {
      uVar3 = (param_2 & 0xfffffffffffffff8) + 8;
      if ((param_2 | 7) != 0x17) {
        uVar3 = param_2 | 7;
      }
      uVar1 = uVar3 + 1;
      __Znwm();
      *(ulong *)(param_1 + 2) = param_2;
      *(ulong *)(param_1 + 4) = uVar3 + 1 | 0x8000000000000000;
      *(ulong *)param_1 = uVar1;
    }
    return param_1;
  }
  func_0x0033b318();
  pdVar2 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar3 = *(ulong *)param_1;
  *(ulong *)param_1 = 0;
  *(undefined ***)pdVar2 = &PTR_DAT_009e2278;
  *(ulong *)(pdVar2 + 2) = uVar3;
  *extraout_x8 = pdVar2;
  return pdVar2;
}



/* Entry: 00403eb4; end: 00403f8b;  */

void FUN_00403eb4(undefined8 *param_1,undefined8 *param_2)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *param_2;
  *param_2 = 0;
  *(undefined ***)pdVar1 = &PTR_DAT_009e2278;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  *param_1 = pdVar1;
  return;
}



/* Entry: 00403f8c; end: 00403fb3;  */

void FUN_00403f8c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x006c2db8();
  }
  return;
}



/* Entry: 00403fb4; end: 0040402b;  */

long FUN_00403fb4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x70;
  FUN_00404524();
  if (param_1 + 0x78 == lVar3) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x38);
    FUN_0040402c(param_1,lVar3);
    lVar2 = *(long *)(param_1 + 0x58);
    plVar1 = (long *)(param_1 + 0x60);
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0x28);
    }
    *plVar1 = lVar3;
    *(long *)(param_1 + 0x58) = lVar3;
    *(long *)(lVar3 + 0x20) = lVar2;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  }
  return lVar3;
}



/* Entry: 0040402c; end: 0040407b;  */

void FUN_0040402c(char *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  char *pcVar5;
  qword qVar6;
  long lVar7;
  long lStack_88;
  long lStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  char *pcStack_60;
  long lStack_58;
  
  lVar7 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 == 0) {
    *(long *)(param_1 + 0x58) = lVar7;
  }
  else {
    *(long *)(lVar2 + 0x20) = lVar7;
    lVar7 = *(long *)(param_2 + 0x20);
  }
  plVar4 = (long *)(param_1 + 0x60);
  if (lVar7 != 0) {
    plVar4 = (long *)(lVar7 + 0x28);
  }
  *plVar4 = lVar2;
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
    return;
  }
  func_0x00775e9c();
  lStack_58 = param_2;
  func_0x00339d8c(param_1 + 0x10);
  FUN_00353254(auStack_78,param_2);
  pcVar5 = param_1;
  FUN_00403fb4(param_1,auStack_78);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  pcStack_60 = pcVar5;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = segment_command_00000020.segname + 8;
    __Znwm();
    FUN_00353254(auStack_78,param_2);
    lStack_88 = *param_3;
    *param_3 = 0;
    FUN_00404454(pcVar5,auStack_78,&lStack_88);
    lVar7 = lStack_88;
    lStack_88 = 0;
    pcStack_60 = pcVar5;
    if (lVar7 != 0) {
      func_0x006c2db8();
    }
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    qVar6 = *(qword *)(param_1 + 0x58);
    puVar1 = (undefined8 *)(param_1 + 0x60);
    if (qVar6 != 0) {
      puVar1 = (undefined8 *)(qVar6 + 0x28);
    }
    *puVar1 = pcVar5;
    *(char **)(param_1 + 0x58) = pcVar5;
    *(qword *)(pcVar5 + 0x20) = qVar6;
    *(undefined8 *)(pcVar5 + 0x28) = 0;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    FUN_004045b0((long)param_1 + 0x70,&lStack_58,&pcStack_60);
    if (*(ulong *)(param_1 + 0x50) < *(ulong *)(param_1 + 0x68)) {
      pcVar5 = *(char **)(param_1 + 0x60);
      if (pcVar5 == (char *)0x0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl/session_cache/ssl_session_cache.cc"
                     ,0x6b,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x404260);
        (*pcVar3)();
      }
      pcStack_60 = pcVar5;
      FUN_0040402c(param_1);
      func_0x00404820((long)param_1 + 0x70,pcStack_60);
      pcVar5 = pcStack_60;
      if (pcStack_60 != (char *)0x0) {
        plVar4 = *(long **)(pcStack_60 + 0x18);
        *(qword *)(pcStack_60 + 0x18) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        if (pcVar5[0x17] < '\0') {
          __ZdlPv(*(undefined8 *)pcVar5);
        }
        __ZdlPv(pcVar5);
      }
    }
  }
  else {
    lStack_80 = *param_3;
    *param_3 = 0;
    FUN_004042e4(pcVar5,&lStack_80);
    lVar7 = lStack_80;
    lStack_80 = 0;
    if (lVar7 != 0) {
      func_0x006c2db8();
    }
  }
  func_0x00339da8(param_1 + 0x10);
  return;
}



/* Entry: 0040407c; end: 004042e3;  */

void FUN_0040407c(char *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  char *pcVar5;
  qword qVar6;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  char *pcStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_2;
  func_0x00339d8c(param_1 + 0x10);
  FUN_00353254(auStack_68,param_2);
  pcVar5 = param_1;
  FUN_00403fb4(param_1,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  pcStack_50 = pcVar5;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = segment_command_00000020.segname + 8;
    __Znwm();
    FUN_00353254(auStack_68,param_2);
    lStack_78 = *param_3;
    *param_3 = 0;
    FUN_00404454(pcVar5,auStack_68,&lStack_78);
    lVar2 = lStack_78;
    lStack_78 = 0;
    pcStack_50 = pcVar5;
    if (lVar2 != 0) {
      func_0x006c2db8();
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    qVar6 = *(qword *)(param_1 + 0x58);
    puVar1 = (undefined8 *)(param_1 + 0x60);
    if (qVar6 != 0) {
      puVar1 = (undefined8 *)(qVar6 + 0x28);
    }
    *puVar1 = pcVar5;
    *(char **)(param_1 + 0x58) = pcVar5;
    *(qword *)(pcVar5 + 0x20) = qVar6;
    *(undefined8 *)(pcVar5 + 0x28) = 0;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    FUN_004045b0((long)param_1 + 0x70,&uStack_48,&pcStack_50);
    if (*(ulong *)(param_1 + 0x50) < *(ulong *)(param_1 + 0x68)) {
      pcVar5 = *(char **)(param_1 + 0x60);
      if (pcVar5 == (char *)0x0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl/session_cache/ssl_session_cache.cc"
                     ,0x6b,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x404260);
        (*pcVar3)();
      }
      pcStack_50 = pcVar5;
      FUN_0040402c(param_1);
      func_0x00404820((long)param_1 + 0x70,pcStack_50);
      pcVar5 = pcStack_50;
      if (pcStack_50 != (char *)0x0) {
        plVar4 = *(long **)(pcStack_50 + 0x18);
        *(qword *)(pcStack_50 + 0x18) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        if (pcVar5[0x17] < '\0') {
          __ZdlPv(*(undefined8 *)pcVar5);
        }
        __ZdlPv(pcVar5);
      }
    }
  }
  else {
    lStack_70 = *param_3;
    *param_3 = 0;
    FUN_004042e4(pcVar5,&lStack_70);
    lVar2 = lStack_70;
    lStack_70 = 0;
    if (lVar2 != 0) {
      func_0x006c2db8();
    }
  }
  func_0x00339da8(param_1 + 0x10);
  return;
}



/* Entry: 004042e4; end: 00404383;  */

void FUN_004042e4(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_2;
  *param_2 = 0;
  FUN_00403eb4(&plStack_28,&lStack_30);
  plVar2 = plStack_28;
  plStack_28 = (long *)0x0;
  plVar3 = *(long **)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = plVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    plVar2 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  lVar1 = lStack_30;
  lStack_30 = 0;
  if (lVar1 != 0) {
    func_0x006c2db8();
  }
  return;
}



/* Entry: 00404384; end: 00404453;  */

void FUN_00404384(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = param_2 + 0x10;
  func_0x00339d8c(lVar1);
  FUN_00353254(auStack_48,param_3);
  FUN_00403fb4(param_2,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x10))(param_1);
  }
  func_0x00339da8(lVar1);
  return;
}



/* Entry: 00404454; end: 00404523;  */

undefined8 * FUN_00404454(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(param_1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lStack_38 = *param_3;
  *param_3 = 0;
  FUN_004042e4(param_1,&lStack_38);
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    func_0x006c2db8();
  }
  return param_1;
}



/* Entry: 00404524; end: 004045af;  */

long * FUN_00404524(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar3 = plVar4;
    do {
      lVar2 = param_1;
      FUN_003494f0(param_1,plVar5 + 4,param_2);
      plVar1 = plVar5 + 1;
      if ((int)lVar2 == 0) {
        plVar3 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) && (FUN_003494f0(param_1,param_2,plVar3 + 4), (int)param_1 == 0)) {
      return plVar3;
    }
  }
  return plVar4;
}



/* Entry: 004045b0; end: 00404657;  */

undefined1  [16] FUN_004045b0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  long lStack_38;
  undefined1 auStack_30 [16];
  
  FUN_00404658(&lStack_38);
  plVar2 = param_1;
  FUN_004046e4(param_1,&uStack_40,lStack_38 + 0x20);
  lVar1 = lStack_38;
  lVar4 = *plVar2;
  if (lVar4 == 0) {
    func_0x00404780(param_1,uStack_40,plVar2,lStack_38);
    uVar3 = 1;
    lVar4 = lStack_38;
  }
  else {
    lStack_38 = 0;
    uVar3 = 0;
    if (lVar1 != 0) {
      func_0x004047d4(auStack_30);
      uVar3 = 0;
    }
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = lVar4;
  return auVar5;
}



/* Entry: 00404658; end: 004046e3;  */

void FUN_00404658(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00353254(lVar1 + 0x20,*param_3);
  *(undefined8 *)(lVar1 + 0x38) = *param_4;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 004046e4; end: 0040477f;  */

long * FUN_004046e4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar1 = (long *)*plVar3;
    do {
      while( true ) {
        plVar3 = plVar1;
        lVar2 = param_1;
        FUN_003494f0(param_1,param_3,plVar3 + 4);
        if ((int)lVar2 == 0) break;
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00404764;
      }
      lVar2 = param_1;
      FUN_003494f0(param_1,plVar3 + 4,param_3);
      if ((int)lVar2 == 0) break;
      plVar4 = plVar3 + 1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_00404764:
  *param_2 = plVar3;
  return plVar4;
}



/* Entry: 00404780; end: 00404913;  */

void FUN_00404780(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 00404914; end: 00404d1b;  */

dword * FUN_00404914(dword *param_1,int param_2,dword *param_3)

{
  bool bVar1;
  dword *pdVar2;
  char *pcVar3;
  dword *pdVar4;
  dword *pdVar5;
  char *pcVar6;
  dword **ppdVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  uint uStack_6c;
  dword *pdStack_68;
  
  pdVar2 = param_1;
  func_0x00709070(param_1,0x55,0,0);
  if (pdVar2 == (dword *)0x0) {
    uVar9 = 0;
    bVar11 = 0;
    pdVar5 = (dword *)((long)&MACH_HEADER.magic + 3);
    if (param_2 != 0) {
      pdVar5 = &MACH_HEADER.cputype;
    }
  }
  else {
    pcVar3 = (char *)pdVar2;
    func_0x00705ee0();
    if ((int)pcVar3 < 0) {
      func_0x00775f28();
      goto LAB_00404d18;
    }
    lVar13 = 3;
    if (param_2 != 0) {
      lVar13 = 4;
    }
    uVar9 = (ulong)pcVar3 & 0xffffffff;
    pdVar5 = (dword *)(lVar13 + ((ulong)pcVar3 & 0xffffffff));
    if ((int)pcVar3 == 0) {
      bVar11 = 0;
    }
    else {
      uVar10 = 0;
      do {
        pdVar4 = pdVar2;
        func_0x00705eec(pdVar2,uVar10);
        if (*pdVar4 < 8 && (1 << (ulong)(*pdVar4 & 0x1f) & 0xc6U) != 0) {
          pdVar5 = (dword *)((long)pdVar5 + 1);
        }
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
      bVar11 = 1;
    }
  }
  FUN_00407ad0(pdVar5,param_3);
  if ((int)pdVar5 != 0) {
    return pdVar5;
  }
  if (param_2 == 0) {
    uVar12 = 0;
LAB_00404a2c:
    lVar13 = *(long *)param_3;
    pcVar3 = (char *)param_1;
    uStack_6c = uVar12 + 1;
    FUN_00708bbc();
    if ((dword *)pcVar3 == (dword *)0x0) {
      pcVar3 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
      ;
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x14e,1,"Could not get subject name from certificate.");
      pcVar6 = (char *)((long)&MACH_HEADER.cpusubtype + 1);
    }
    else {
      FUN_006d1e78();
      FUN_006d17d4();
      FUN_007081c8();
      pdVar5 = (dword *)pcVar3;
      func_0x006d1e84(pcVar3,&pdStack_68);
      if ((long)pdVar5 < 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,0x156,2,"Could not get subject entry from certificate.");
LAB_00404b48:
        func_0x006d1850();
      }
      else {
        pcVar6 = "x509_subject";
        func_0x00407a80("x509_subject",pdStack_68,pdVar5,lVar13 + (ulong)uVar12 * 0x18);
        func_0x006d1850();
        if ((int)pcVar6 != 0) goto LAB_00404b54;
        lVar13 = *(long *)param_3;
        uStack_6c = uVar12 | 2;
        FUN_00708bbc();
        if (param_1 == (dword *)0x0) {
          pcVar3 = "Could not get subject name from certificate.";
          uVar8 = 0x115;
LAB_00404bdc:
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                       ,uVar8,1,pcVar3);
          uVar10 = 0;
          pdStack_68 = (dword *)0x0;
LAB_00404bf0:
          pdVar5 = (dword *)"";
          if (pdStack_68 != (dword *)0x0) {
            pdVar5 = pdStack_68;
          }
          pcVar6 = "x509_subject_common_name";
          func_0x00407a80("x509_subject_common_name",pdVar5,uVar10,
                          lVar13 + (ulong)(uVar12 + 1) * 0x18);
          pcVar3 = (char *)pdStack_68;
          func_0x00701ed0();
          if ((int)pcVar6 == 0) {
            lVar13 = *(long *)param_3;
            uStack_6c = uVar12 + 3;
            FUN_006d1e78();
            FUN_006d17d4();
            pdVar5 = (dword *)pcVar3;
            FUN_00704310();
            if ((int)pdVar5 == 0) goto LAB_00404b48;
            pdVar5 = (dword *)pcVar3;
            func_0x006d1e84(pcVar3,&pdStack_68);
            if ((long)pdVar5 < 1) {
              pcVar6 = (char *)((long)&MACH_HEADER.cputype + 3);
            }
            else {
              pcVar6 = "x509_pem_cert";
              func_0x00407a80("x509_pem_cert",pdStack_68,pdVar5,lVar13 + (ulong)(uVar12 | 2) * 0x18)
              ;
            }
            func_0x006d1850();
            bVar1 = (bool)(bVar11 ^ 1);
            if ((int)pcVar6 != 0) {
              bVar1 = true;
            }
            if (!bVar1) {
              pcVar3 = (char *)param_3;
              FUN_0040634c(param_3,pdVar2,uVar9,&uStack_6c);
              pcVar6 = pcVar3;
            }
          }
          goto LAB_00404b54;
        }
        pdVar5 = param_1;
        FUN_0070cc54();
        if ((int)pdVar5 == -1) {
          pcVar3 = "Could not get common name of subject from certificate.";
          uVar8 = 0x11b;
          goto LAB_00404bdc;
        }
        func_0x0070cc1c(param_1,pdVar5);
        if (param_1 != (dword *)0x0) {
          func_0x0070cc10();
          if (param_1 == (dword *)0x0) {
            pcVar6 = "Could not get common name entry asn1 from certificate.";
            uVar8 = 0x125;
            goto LAB_00404cac;
          }
          ppdVar7 = &pdStack_68;
          FUN_006cceb8(ppdVar7,param_1);
          if ((int)ppdVar7 < 0) {
            pcVar3 = 
            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
            ;
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                         ,299,2,"Could not extract utf8 from asn1 string.");
            pcVar6 = (char *)&MACH_HEADER.filetype;
            goto LAB_00404b54;
          }
          uVar10 = (ulong)ppdVar7 & 0xffffffff;
          goto LAB_00404bf0;
        }
        pcVar6 = "Could not get common name entry from certificate.";
        uVar8 = 0x120;
LAB_00404cac:
        pcVar3 = 
        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
        ;
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,uVar8,2,pcVar6);
      }
      pcVar6 = (char *)((long)&MACH_HEADER.cputype + 3);
    }
  }
  else {
    uVar12 = 1;
    uStack_6c = 1;
    pcVar3 = "certificate_type";
    func_0x00407a20("certificate_type","X509",*(undefined8 *)param_3);
    pcVar6 = pcVar3;
    if ((int)pcVar3 == 0) goto LAB_00404a2c;
  }
LAB_00404b54:
  if (pdVar2 != (dword *)0x0) {
    FUN_00705f40(pdVar2,FUN_0040668c,0x71296c);
    pcVar3 = (char *)pdVar2;
  }
  if ((int)pcVar6 != 0) {
    pcVar3 = (char *)param_3;
    FUN_00407978();
  }
  if (uStack_6c == param_3[2]) {
    return (dword *)pcVar6;
  }
LAB_00404d18:
  func_0x00775ef4();
  if ((dword *)pcVar3 == (dword *)0x0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,0x3eb,2,"The root certificates are empty.");
  }
  else {
    pdVar2 = &MACH_HEADER.cpusubtype;
    func_0x00338c94();
    if (pdVar2 == (dword *)0x0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x3f1,2,"Could not allocate buffer for ssl_root_certs_store.");
      return (dword *)0x0;
    }
    pdVar5 = pdVar2;
    FUN_00709154();
    *(dword **)pdVar2 = pdVar5;
    if (pdVar5 == (dword *)0x0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x3f6,2,"Could not allocate buffer for X509_STORE.");
    }
    else {
      pdVar4 = (dword *)pcVar3;
      _strlen(pcVar3);
      FUN_00404e18(pdVar5,pcVar3,pdVar4,0);
      if ((int)pdVar5 == 0) {
        return pdVar2;
      }
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x3fd,2,"Could not load root certificates.");
      FUN_0070926c(*(undefined8 *)pdVar2);
    }
    FUN_00338cb8(pdVar2);
  }
  return (dword *)0x0;
}



/* Entry: 00404d1c; end: 00404e17;  */

dword * FUN_00404d1c(long param_1)

{
  dword *pdVar1;
  dword *pdVar2;
  long lVar3;
  
  if (param_1 == 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,0x3eb,2,"The root certificates are empty.");
  }
  else {
    pdVar1 = &MACH_HEADER.cpusubtype;
    func_0x00338c94();
    if (pdVar1 == (dword *)0x0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x3f1,2,"Could not allocate buffer for ssl_root_certs_store.");
      return (dword *)0x0;
    }
    pdVar2 = pdVar1;
    FUN_00709154();
    *(dword **)pdVar1 = pdVar2;
    if (pdVar2 == (dword *)0x0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x3f6,2,"Could not allocate buffer for X509_STORE.");
    }
    else {
      lVar3 = param_1;
      _strlen(param_1);
      FUN_00404e18(pdVar2,param_1,lVar3,0);
      if ((int)pdVar2 == 0) {
        return pdVar1;
      }
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x3fd,2,"Could not load root certificates.");
      FUN_0070926c(*(undefined8 *)pdVar1);
    }
    FUN_00338cb8(pdVar1);
  }
  return (dword *)0x0;
}



/* Entry: 00404e18; end: 0040501f;  */

char * FUN_00404e18(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_98;
  
  if (param_3 >> 0x1f != 0) {
    func_0x00775f5c();
    lVar2 = param_1;
    FUN_006d1e78();
    func_0x006d17d4();
    lVar7 = param_1;
    func_0x00705ee0();
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        lVar3 = param_1;
        func_0x00705eec(param_1,lVar6);
        lVar4 = lVar2;
        FUN_00704310(lVar2,lVar3);
        if ((int)lVar4 == 0) {
          func_0x006d1850(lVar2);
          return "\x01";
        }
        lVar6 = lVar6 + 1;
      } while (lVar7 != lVar6);
    }
    lVar7 = lVar2;
    func_0x006d1e84(lVar2,&uStack_98);
    if (lVar7 < 1) {
      pcVar5 = "\x01";
    }
    else {
      pcVar5 = "x509_pem_cert_chain";
      func_0x00407a80("x509_pem_cert_chain",uStack_98,lVar7,param_2);
    }
    func_0x006d1850(lVar2);
    return pcVar5;
  }
  FUN_006d1dfc(param_2,param_3);
  if (param_1 == 0) {
    return (char *)0x2;
  }
  if (param_2 == 0) {
    return "\x06";
  }
  if (param_4 != (long *)0x0) {
    lVar2 = param_2;
    FUN_00705ed8();
    *param_4 = lVar2;
    if (lVar2 == 0) {
      return "\x06";
    }
  }
  lVar2 = param_2;
  FUN_00704358(param_2,0,0,"");
  if (lVar2 == 0) {
    FUN_006de5b0();
  }
  else {
    lVar7 = 0;
    do {
      if (param_4 != (long *)0x0) {
        lVar6 = lVar2;
        FUN_00708bbc();
        if (lVar6 == 0) {
          pcVar5 = (char *)0x2;
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                       ,0x30c,2,"Could not get name from root certificate.");
        }
        else {
          func_0x0070db30();
          if (lVar6 != 0) {
            func_0x00706268(*param_4,lVar6);
            goto LAB_00404ec0;
          }
          pcVar5 = "\x06";
        }
joined_r0x00404fb4:
        if (lVar7 == 0) {
          pcVar5 = (char *)0x2;
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                       ,0x326,2,"Could not load any root certificate.");
        }
        func_0x0070e584(lVar2);
        goto joined_r0x00404fec;
      }
LAB_00404ec0:
      FUN_006de5b0();
      lVar6 = param_1;
      FUN_00709540(param_1,lVar2);
      uVar1 = (uint)lVar6;
      if ((uVar1 == 0) && (func_0x006de46c(), (uVar1 & 0xff000fff) != 0xb000069)) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,0x31d,2,"Could not add root certificate to ssl context.");
        pcVar5 = "\x01";
        goto joined_r0x00404fb4;
      }
      func_0x0070e584(lVar2);
      lVar2 = param_2;
      func_0x0070435c(param_2,0,0,"");
      lVar7 = lVar7 + -1;
    } while (lVar2 != 0);
    FUN_006de5b0();
    if (lVar7 != 0) {
      pcVar5 = (char *)0x0;
      goto LAB_00404f70;
    }
  }
  pcVar5 = (char *)0x2;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
               ,0x326,2,"Could not load any root certificate.");
joined_r0x00404fec:
  if (param_4 != (long *)0x0) {
    FUN_00705f40(*param_4,0x6c49ec,0x70db24);
    *param_4 = 0;
  }
LAB_00404f70:
  func_0x006d1850(param_2);
  return pcVar5;
}



/* Entry: 00405020; end: 004050f3;  */

char * FUN_00405020(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  FUN_006d1e78();
  FUN_006d17d4();
  lVar2 = param_1;
  func_0x00705ee0();
  if (lVar2 != 0) {
    lVar6 = 0;
    do {
      lVar3 = param_1;
      func_0x00705eec(param_1,lVar6);
      lVar4 = lVar1;
      FUN_00704310(lVar1,lVar3);
      if ((int)lVar4 == 0) {
        func_0x006d1850(lVar1);
        return "\x01";
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
  }
  lVar2 = lVar1;
  func_0x006d1e84(lVar1,&uStack_48);
  if (lVar2 < 1) {
    pcVar5 = "\x01";
  }
  else {
    pcVar5 = "x509_pem_cert_chain";
    func_0x00407a80("x509_pem_cert_chain",uStack_48,lVar2,param_2);
  }
  func_0x006d1850(lVar1);
  return pcVar5;
}



/* Entry: 004050f4; end: 00405113;  */

/* WARNING: Removing unreachable block (ram,0x004052a0) */

undefined8
FUN_004050f4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  qword qVar1;
  qword qVar2;
  undefined8 *puVar3;
  qword qVar4;
  qword *pqVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  qVar1 = *(qword *)(param_1 + 0x10);
  qVar2 = qVar1;
  func_0x006c0540();
  uStack_68 = 0;
  uStack_60 = 0;
  *param_5 = 0;
  if (qVar1 == 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,0x692,2,"SSL Context is null. Should never happen.");
LAB_0040539c:
    uVar6 = 7;
  }
  else {
    if (qVar2 != 0) {
      func_0x006c12b8(qVar2,0x406698);
      puVar3 = &uStack_60;
      FUN_006d26f0(puVar3,param_3,&uStack_68,param_4);
      if ((int)puVar3 != 0) {
        func_0x006c0934(qVar2,uStack_68,uStack_68);
        func_0x006c08e4();
        if ((param_2 == 0) || (qVar1 = qVar2, func_0x006c1140(qVar2,param_2), (int)qVar1 != 0)) {
          lVar8 = *(long *)(param_1 + 0x28);
          if ((lVar8 != 0) &&
             ((qVar1 = qVar2, func_0x006c1118(qVar2,0), qVar1 != 0 &&
              (FUN_00404384(&lStack_58,lVar8,qVar1), lStack_58 != 0)))) {
            func_0x006c2ef4(qVar2);
            lVar8 = lStack_58;
            lStack_58 = 0;
            if (lVar8 != 0) {
              func_0x006c2db8();
            }
          }
          FUN_006de5b0();
          qVar1 = qVar2;
          func_0x006c09e4(qVar2);
          qVar4 = qVar2;
          func_0x006c0ee8(qVar2,qVar1);
          switch(qVar4 & 0xffffffff) {
          case 1:
            break;
          case 2:
            pqVar5 = &segment_command_00000020.vmsize;
            func_0x00338c94();
            pqVar5[2] = qVar2;
            pqVar5[3] = uStack_60;
            *(dword *)(pqVar5 + 4) = 0xb;
            pqVar5[6] = 0x400;
            uVar6 = 0x400;
            func_0x00338c94();
            pqVar5[5] = uVar6;
            *pqVar5 = (qword)&UNK_009e22b8;
            if (param_1 != 0) {
              func_0x00339cfc(param_1 + 8,1);
            }
            pqVar5[7] = param_1;
            *param_5 = pqVar5;
            return 0;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
            break;
          case 8:
          }
          pcVar7 = "Unexpected error received from first SSL_do_handshake call: %s";
          uVar6 = 0x6b7;
        }
        else {
          pcVar7 = "Invalid server name indication %s.";
          uVar6 = 0x6a6;
        }
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,uVar6,2,pcVar7);
        func_0x006c0854(qVar2);
        func_0x006d1850(uStack_60);
        goto LAB_0040539c;
      }
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x69c,2,"BIO_new_bio_pair failed.");
      func_0x006c0854(qVar2);
    }
    uVar6 = 0xc;
  }
  return uVar6;
}



/* Entry: 00405114; end: 004053d7;  */

undefined8
FUN_00405114(qword param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
            long param_6,undefined8 *param_7)

{
  qword qVar1;
  undefined8 *puVar2;
  qword qVar3;
  qword qVar4;
  qword *pqVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  qVar1 = param_1;
  func_0x006c0540();
  uStack_68 = 0;
  uStack_60 = 0;
  *param_7 = 0;
  if (param_1 == 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,0x692,2,"SSL Context is null. Should never happen.");
LAB_0040539c:
    uVar6 = 7;
  }
  else {
    if (qVar1 != 0) {
      func_0x006c12b8(qVar1,0x406698);
      puVar2 = &uStack_60;
      FUN_006d26f0(puVar2,param_4,&uStack_68,param_5);
      if ((int)puVar2 != 0) {
        func_0x006c0934(qVar1,uStack_68,uStack_68);
        if (param_2 == 0) {
          func_0x006c0900(qVar1);
code_r0x004052a4:
          pqVar5 = &segment_command_00000020.vmsize;
          func_0x00338c94();
          pqVar5[2] = qVar1;
          pqVar5[3] = uStack_60;
          *(dword *)(pqVar5 + 4) = 0xb;
          pqVar5[6] = 0x400;
          uVar6 = 0x400;
          func_0x00338c94();
          pqVar5[5] = uVar6;
          *pqVar5 = (qword)&UNK_009e22b8;
          if (param_6 != 0) {
            func_0x00339cfc(param_6 + 8,1);
          }
          pqVar5[7] = param_6;
          *param_7 = pqVar5;
          return 0;
        }
        func_0x006c08e4();
        if ((param_3 == 0) || (qVar3 = qVar1, func_0x006c1140(qVar1,param_3), (int)qVar3 != 0)) {
          lVar8 = *(long *)(param_6 + 0x28);
          if ((lVar8 != 0) &&
             ((qVar3 = qVar1, func_0x006c1118(qVar1,0), qVar3 != 0 &&
              (FUN_00404384(&lStack_58,lVar8,qVar3), lStack_58 != 0)))) {
            func_0x006c2ef4(qVar1);
            lVar8 = lStack_58;
            lStack_58 = 0;
            if (lVar8 != 0) {
              func_0x006c2db8();
            }
          }
          FUN_006de5b0();
          qVar3 = qVar1;
          func_0x006c09e4(qVar1);
          qVar4 = qVar1;
          func_0x006c0ee8(qVar1,qVar3);
          switch(qVar4 & 0xffffffff) {
          case 1:
            break;
          case 2:
            goto code_r0x004052a4;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
            break;
          case 8:
          }
          pcVar7 = "Unexpected error received from first SSL_do_handshake call: %s";
          uVar6 = 0x6b7;
        }
        else {
          pcVar7 = "Invalid server name indication %s.";
          uVar6 = 0x6a6;
        }
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,uVar6,2,pcVar7);
        func_0x006c0854(qVar1);
        func_0x006d1850(uStack_60);
        goto LAB_0040539c;
      }
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x69c,2,"BIO_new_bio_pair failed.");
      func_0x006c0854(qVar1);
    }
    uVar6 = 0xc;
  }
  return uVar6;
}



/* Entry: 004053d8; end: 004053e3;  */

void FUN_004053d8(undefined8 *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = (int)param_1 + 8;
    FUN_00339d14();
    if (((iVar1 != 0) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) &&
       (UNRECOVERED_JUMPTABLE = *(code **)*param_1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00405420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 004053e4; end: 0040542f;  */

void FUN_004053e4(undefined8 *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = (int)param_1 + 8;
    FUN_00339d14();
    if (((iVar1 != 0) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) &&
       (UNRECOVERED_JUMPTABLE = *(code **)*param_1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00405420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 00405430; end: 00405807;  */

char * FUN_00405430(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  pcVar10 = (char *)0xafb158;
  func_0x00339fa0(0xafb158,FUN_00405808);
  if ((param_2 == (undefined8 *)0x0) || ((*param_2 = 0, param_1[1] == 0 && (param_1[2] == 0)))) {
    return (char *)0x2;
  }
  func_0x006ca3f0();
  func_0x006c0118();
  if (pcVar10 == (char *)0x0) {
    FUN_00405850();
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,0x7ed,2,"Could not create ssl context.");
    return (char *)0x2;
  }
  pcVar6 = pcVar10;
  FUN_004058ec();
  if ((int)pcVar6 != 0) {
    return pcVar6;
  }
  pqVar4 = &segment_command_00000020.vmaddr;
  func_0x00338c94();
  FUN_00405990();
  *pqVar4 = (qword)&PTR_FUN_00afb168;
  pqVar4[2] = (qword)pcVar10;
  lVar12 = param_1[6];
  if (lVar12 != 0) {
    plVar5 = (long *)(lVar12 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5 = (long *)pqVar4[5];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    pqVar4[5] = lVar12;
    func_0x006c2fd0(pcVar10,FUN_004059b8);
    func_0x006c10a8(pcVar10,1);
  }
  lVar12 = param_1[7];
  if (lVar12 != 0) {
    plVar5 = (long *)(lVar12 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5 = (long *)pqVar4[6];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    pqVar4[6] = lVar12;
    func_0x006c130c(pcVar10,FUN_00405a54);
  }
  if ((param_1[6] != 0) || (param_1[7] != 0)) {
    func_0x006c12fc(pcVar10,iRam0000000000afb170,pqVar4);
  }
  pcVar6 = pcVar10;
  FUN_00405ae8(pcVar10,*param_1,param_1[3]);
  if ((int)pcVar6 != 0) goto LAB_004056cc;
  if ((undefined8 *)param_1[2] == (undefined8 *)0x0) {
LAB_004055d0:
    uVar13 = param_1[1];
    uVar8 = uVar13;
    _strlen(uVar13);
    pcVar6 = pcVar10;
    FUN_00405d6c(pcVar10,uVar13,uVar8,0);
    if ((int)pcVar6 == 0) goto LAB_00405640;
    pcVar10 = "Cannot load server root certificates.";
    uVar8 = 0x825;
    goto LAB_004056c4;
  }
  FUN_00709250(*(undefined8 *)param_1[2]);
  func_0x006c4640(pcVar10,*(undefined8 *)param_1[2]);
  if (param_1[2] == 0) goto LAB_004055d0;
LAB_00405640:
  if (param_1[5] == 0) {
LAB_00405708:
    if (*(char *)(param_1 + 8) == '\0') {
      uVar8 = 0;
    }
    else {
      uVar8 = 0x405f08;
    }
    func_0x006c462c(pcVar10,1,uVar8);
    if (((char *)param_1[10] != (char *)0x0) && (*(char *)param_1[10] != '\0')) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x84e,1,"enabling client CRL checking with path: %s");
      func_0x006c4638();
      func_0x00709b8c();
      pcVar6 = pcVar10;
      FUN_00708f90(pcVar10,0,param_1[10]);
      if ((int)pcVar6 == 0) {
        pcVar10 = "Failed to load CRL File from directory.";
        uVar8 = 0x854;
        uVar13 = 2;
      }
      else {
        func_0x00709b84(pcVar10);
        FUN_0070c94c();
        pcVar10 = "enabled client side CRL checking.";
        uVar8 = 0x858;
        uVar13 = 1;
      }
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,uVar8,uVar13,pcVar10);
    }
    *param_2 = pqVar4;
    return (char *)0x0;
  }
  pcVar6 = (char *)param_1[4];
  FUN_00405dbc(pcVar6,(uint)param_1[5] & 0xffff,pqVar4 + 3,pqVar4 + 4);
  if ((int)pcVar6 == 0) {
    if (0xfffffffe < pqVar4[4]) {
      func_0x00775f90();
      func_0x006c0100(0,0);
      pcVar10 = (char *)0x0;
      iVar7 = 0;
      iVar9 = 0;
      func_0x006c12c0();
      iRam0000000000afb170 = (int)pcVar10;
      if (iRam0000000000afb170 != -1) {
        return pcVar10;
      }
      func_0x00775fc4();
      lVar12 = *(long *)PTR____stack_chk_guard_00999f88;
      func_0x006de46c();
      if ((int)pcVar10 != 0) {
        do {
          FUN_006de770();
          iVar7 = 0x213;
          iVar9 = 2;
          pcVar10 = 
          "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
          ;
          FUN_00339074();
          func_0x006de46c();
        } while ((int)pcVar10 != 0);
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar12) {
        return pcVar10;
      }
      ___stack_chk_fail();
      if (iVar7 == 0) {
        uVar8 = 0x303;
LAB_00405918:
        func_0x006c39ec(pcVar10,uVar8);
        if (iVar9 == 1) {
          uVar8 = 0x304;
        }
        else {
          if (iVar9 != 0) {
            uVar8 = 0x3df;
            goto LAB_00405978;
          }
          uVar8 = 0x303;
        }
        func_0x006c3a2c(pcVar10,uVar8);
        pcVar10 = (char *)0x0;
      }
      else {
        if (iVar7 == 1) {
          uVar8 = 0x304;
          goto LAB_00405918;
        }
        uVar8 = 0x3cc;
LAB_00405978:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,uVar8,1,"TLS version is not supported.");
        pcVar10 = "";
      }
      return pcVar10;
    }
    pcVar6 = pcVar10;
    func_0x006c11dc(pcVar10,pqVar4[3]);
    if ((int)pcVar6 == 0) {
      func_0x006c11d0(pcVar10,FUN_00405ee8,pqVar4);
      goto LAB_00405708;
    }
    pcVar10 = "Could not set alpn protocol list to context.";
    pcVar6 = (char *)0x2;
    uVar8 = 0x838;
  }
  else {
    func_0x00407688();
    pcVar10 = "Building alpn list failed with error %s.";
    uVar8 = 0x82f;
  }
LAB_004056c4:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
               ,uVar8,2,pcVar10);
LAB_004056cc:
  FUN_004053e4(pqVar4);
  return pcVar6;
}



/* Entry: 00405808; end: 0040584f;  */

char * FUN_00405808(void)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  func_0x006c0100(0,0);
  pcVar1 = (char *)0x0;
  iVar2 = 0;
  iVar4 = 0;
  func_0x006c12c0();
  iRam0000000000afb170 = (int)pcVar1;
  if (iRam0000000000afb170 != -1) {
    return pcVar1;
  }
  func_0x00775fc4();
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x006de46c();
  if ((int)pcVar1 != 0) {
    do {
      FUN_006de770();
      iVar2 = 0x213;
      iVar4 = 2;
      pcVar1 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
      ;
      FUN_00339074();
      func_0x006de46c();
    } while ((int)pcVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
    return pcVar1;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    uVar3 = 0x303;
LAB_00405918:
    func_0x006c39ec(pcVar1,uVar3);
    if (iVar4 == 1) {
      uVar3 = 0x304;
    }
    else {
      if (iVar4 != 0) {
        uVar3 = 0x3df;
        goto LAB_00405978;
      }
      uVar3 = 0x303;
    }
    func_0x006c3a2c(pcVar1,uVar3);
    pcVar1 = (char *)0x0;
  }
  else {
    if (iVar2 == 1) {
      uVar3 = 0x304;
      goto LAB_00405918;
    }
    uVar3 = 0x3cc;
LAB_00405978:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,uVar3,1,"TLS version is not supported.");
    pcVar1 = "";
  }
  return pcVar1;
}



/* Entry: 00405850; end: 004058eb;  */

char * FUN_00405850(char *param_1,int param_2,int param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x006de46c();
  if ((int)param_1 != 0) {
    do {
      FUN_006de770();
      param_2 = 0x213;
      param_3 = 2;
      param_1 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
      ;
      FUN_00339074();
      func_0x006de46c();
    } while ((int)param_1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    uVar2 = 0x303;
LAB_00405918:
    func_0x006c39ec(param_1,uVar2);
    if (param_3 == 1) {
      uVar2 = 0x304;
    }
    else {
      if (param_3 != 0) {
        uVar2 = 0x3df;
        goto LAB_00405978;
      }
      uVar2 = 0x303;
    }
    func_0x006c3a2c(param_1,uVar2);
    pcVar1 = (char *)0x0;
  }
  else {
    if (param_2 == 1) {
      uVar2 = 0x304;
      goto LAB_00405918;
    }
    uVar2 = 0x3cc;
LAB_00405978:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,uVar2,1,"TLS version is not supported.");
    pcVar1 = "";
  }
  return pcVar1;
}



/* Entry: 004058ec; end: 0040598f;  */

undefined8 FUN_004058ec(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x303;
LAB_00405918:
    func_0x006c39ec(param_1,uVar1);
    if (param_3 == 1) {
      uVar1 = 0x304;
    }
    else {
      if (param_3 != 0) {
        uVar1 = 0x3df;
        goto LAB_00405978;
      }
      uVar1 = 0x303;
    }
    func_0x006c3a2c(param_1,uVar1);
    uVar1 = 0;
  }
  else {
    if (param_2 == 1) {
      uVar1 = 0x304;
      goto LAB_00405918;
    }
    uVar1 = 0x3cc;
LAB_00405978:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,uVar1,1,"TLS version is not supported.");
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 00405990; end: 004059b7;  */

void FUN_00405990(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lStack_48;
  
  if (param_1 == (undefined8 *)0x0) {
    func_0x00775ff8();
    puVar2 = param_1;
    func_0x006c12b0();
    if (puVar2 != (undefined8 *)0x0) {
      func_0x006c1304();
      func_0x006c1118(param_1,0);
      if (param_1 != (undefined8 *)0x0) {
        lStack_48 = param_2;
        FUN_0040407c(puVar2[5],param_1,&lStack_48);
        lVar1 = lStack_48;
        lStack_48 = 0;
        if (lVar1 != 0) {
          func_0x006c2db8();
        }
      }
    }
    return;
  }
  *param_1 = 0xb5f4e8;
  param_1[1] = 1;
  return;
}



/* Entry: 004059b8; end: 00405a53;  */

void FUN_004059b8(long param_1,long param_2)

{
  long lVar1;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x006c12b0();
  if (lVar1 != 0) {
    func_0x006c1304();
    func_0x006c1118(param_1,0);
    if (param_1 != 0) {
      lStack_38 = param_2;
      FUN_0040407c(*(undefined8 *)(lVar1 + 0x28),param_1,&lStack_38);
      lVar1 = lStack_38;
      lStack_38 = 0;
      if (lVar1 != 0) {
        func_0x006c2db8();
      }
    }
  }
  return;
}



/* Entry: 00405a54; end: 00405ae7;  */

dword * FUN_00405a54(long param_1,dword *param_2,ulong param_3,char *param_4)

{
  bool bVar1;
  uint uVar2;
  dword *pdVar3;
  dword *pdVar4;
  undefined8 uVar5;
  dword *pdVar6;
  ulong uVar7;
  char *pcVar8;
  dword *pdVar9;
  dword *pdVar10;
  dword *pdVar11;
  undefined1 *puVar12;
  dword *unaff_x23;
  long lVar13;
  dword *unaff_x24;
  undefined8 uStack_148;
  dword *pdStack_140;
  dword *pdStack_138;
  dword *pdStack_130;
  dword *pdStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined1 ***pppuStack_110;
  code *pcStack_108;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  undefined1 *puStack_60;
  code *pcStack_58;
  dword *apdStack_48 [2];
  char cStack_31;
  
  pdVar9 = param_2;
  func_0x006c12b0();
  if (param_1 != 0) {
    lVar13 = param_1;
    func_0x006c1304();
    pdVar9 = *(dword **)(lVar13 + 0x30);
    FUN_00353254(apdStack_48,param_2);
    FUN_00403b9c(pdVar9,param_1,apdStack_48);
    if (cStack_31 < '\0') {
      __ZdlPv(apdStack_48[0]);
      pdVar9 = apdStack_48[0];
    }
    return pdVar9;
  }
  func_0x0077602c();
  if (cStack_31 < '\0') {
    __ZdlPv(apdStack_48[0]);
  }
  __Unwind_Resume();
  pcStack_58 = FUN_00405ae8;
  puStack_60 = &stack0xfffffffffffffff0;
  if (pdVar9 == (dword *)0x0) {
LAB_00405c64:
    if ((param_3 == 0) || (lVar13 = param_1, func_0x006c10fc(param_1,param_3), (int)lVar13 != 0)) {
      uVar5 = 0x19f;
      func_0x006eca3c(0x19f);
      lVar13 = param_1;
      func_0x006c132c(param_1,uVar5);
      if ((int)lVar13 != 0) {
        func_0x006c0fdc(param_1,0);
        func_0x006eca8c(uVar5);
        return (dword *)0x0;
      }
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x362,2,"Could not set ephemeral ECDH key.");
      func_0x006eca8c(uVar5);
      return (dword *)((long)&MACH_HEADER.cputype + 3);
    }
    pcVar8 = "Invalid cipher list: %s.";
    pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
    uVar5 = 0x35c;
    uStack_b0 = param_3;
    goto LAB_00405d3c;
  }
  pdVar11 = *(dword **)(pdVar9 + 2);
  pdVar6 = pdVar9;
  uVar7 = param_3;
  pdVar10 = pdVar11;
  if (pdVar11 != (dword *)0x0) {
    pdVar4 = pdVar11;
    _strlen();
    if ((ulong)pdVar4 >> 0x1f == 0) {
      FUN_006d1dfc(pdVar11,pdVar4);
      if (pdVar11 == (dword *)0x0) {
        pdVar10 = &MACH_HEADER.filetype;
      }
      else {
        param_4 = "";
        uVar7 = 0;
        unaff_x24 = pdVar11;
        FUN_00704358();
        if (unaff_x24 == (dword *)0x0) {
          func_0x006d1850(pdVar11);
          pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
        }
        else {
          lVar13 = param_1;
          pdVar6 = unaff_x24;
          func_0x006c4668();
          if ((int)lVar13 != 0) {
            do {
              pdVar6 = (dword *)0x0;
              uVar7 = 0;
              pdVar10 = pdVar11;
              param_4 = "";
              func_0x007042e8();
              if (pdVar10 == (dword *)0x0) {
                FUN_006de5b0();
                pdVar10 = (dword *)0x0;
                bVar1 = true;
                goto LAB_00405bd8;
              }
              lVar13 = param_1;
              pdVar6 = pdVar10;
              func_0x006c46dc();
            } while ((int)lVar13 != 0);
            func_0x0070e584(pdVar10);
          }
          bVar1 = false;
          pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
LAB_00405bd8:
          func_0x0070e584(unaff_x24);
          func_0x006d1850(pdVar11);
          unaff_x23 = pdVar11;
          if (bVar1) goto LAB_00405bec;
        }
      }
      pcVar8 = "Invalid cert chain file.";
      uVar5 = 0x34d;
      goto LAB_00405d3c;
    }
    func_0x00776094();
FUN_00404e18:
    func_0x00776060();
    pcStack_b8 = FUN_00405d6c;
    ppuStack_c0 = &puStack_60;
    func_0x006c4638();
    FUN_00709b64();
    pppuStack_110 = &ppuStack_c0;
    if (uVar7 >> 0x1f != 0) {
      func_0x00775f5c();
      pcStack_108 = FUN_00405020;
      pdVar10 = pdVar4;
      pdStack_140 = unaff_x24;
      pdStack_138 = unaff_x23;
      pdStack_130 = pdVar11;
      pdStack_128 = pdVar9;
      uStack_120 = param_3;
      lStack_118 = param_1;
      FUN_006d1e78();
      func_0x006d17d4();
      pdVar9 = pdVar4;
      func_0x00705ee0();
      if (pdVar9 != (dword *)0x0) {
        puVar12 = (undefined1 *)0x0;
        do {
          pdVar11 = pdVar4;
          func_0x00705eec(pdVar4,puVar12);
          pdVar3 = pdVar10;
          FUN_00704310(pdVar10,pdVar11);
          if ((int)pdVar3 == 0) {
            func_0x006d1850(pdVar10);
            return (dword *)((long)&MACH_HEADER.cputype + 3);
          }
          puVar12 = puVar12 + 1;
        } while (pdVar9 != (dword *)puVar12);
      }
      pdVar9 = pdVar10;
      func_0x006d1e84(pdVar10,&uStack_148);
      if ((long)pdVar9 < 1) {
        pcVar8 = (char *)((long)&MACH_HEADER.cputype + 3);
      }
      else {
        pcVar8 = "x509_pem_cert_chain";
        func_0x00407a80("x509_pem_cert_chain",uStack_148,pdVar9,pdVar6);
      }
      func_0x006d1850(pdVar10);
      return (dword *)pcVar8;
    }
    FUN_006d1dfc(pdVar6,uVar7);
    if (pdVar4 == (dword *)0x0) {
      return (dword *)((long)&MACH_HEADER.magic + 2);
    }
    if (pdVar6 == (dword *)0x0) {
LAB_00404f24:
      return &MACH_HEADER.filetype;
    }
    if (param_4 != (char *)0x0) {
      pdVar9 = pdVar6;
      FUN_00705ed8();
      *(dword **)param_4 = pdVar9;
      if (pdVar9 == (dword *)0x0) goto LAB_00404f24;
    }
    pdVar9 = pdVar6;
    func_0x0070435c(pdVar6,0,0,"");
    if (pdVar9 == (dword *)0x0) {
      FUN_006de5b0();
    }
    else {
      lVar13 = 0;
      do {
        if (param_4 != (char *)0x0) {
          pdVar10 = pdVar9;
          FUN_00708bbc();
          if (pdVar10 == (dword *)0x0) {
            pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                         ,0x30c,2,"Could not get name from root certificate.");
          }
          else {
            func_0x0070db30();
            if (pdVar10 != (dword *)0x0) {
              func_0x00706268(*(undefined8 *)param_4,pdVar10);
              goto LAB_00404ec0;
            }
            pdVar10 = &MACH_HEADER.filetype;
          }
joined_r0x00404fb4:
          if (lVar13 == 0) {
            pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                         ,0x326,2,"Could not load any root certificate.");
          }
          func_0x0070e584(pdVar9);
          goto joined_r0x00404fec;
        }
LAB_00404ec0:
        FUN_006de5b0();
        pdVar10 = pdVar4;
        FUN_00709540(pdVar4,pdVar9);
        uVar2 = (uint)pdVar10;
        if ((uVar2 == 0) && (func_0x006de46c(), (uVar2 & 0xff000fff) != 0xb000069)) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                       ,0x31d,2,"Could not add root certificate to ssl context.");
          pdVar10 = (dword *)((long)&MACH_HEADER.cputype + 3);
          goto joined_r0x00404fb4;
        }
        func_0x0070e584(pdVar9);
        pdVar9 = pdVar6;
        func_0x0070435c(pdVar6,0,0,"");
        lVar13 = lVar13 + -1;
      } while (pdVar9 != (dword *)0x0);
      FUN_006de5b0();
      if (lVar13 != 0) {
        pdVar10 = (dword *)0x0;
        goto LAB_00404f70;
      }
    }
    pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,0x326,2,"Could not load any root certificate.");
joined_r0x00404fec:
    if (param_4 != (char *)0x0) {
      FUN_00705f40(*(undefined8 *)param_4,0x6c49ec,0x70db24);
      param_4[0] = '\0';
      param_4[1] = '\0';
      param_4[2] = '\0';
      param_4[3] = '\0';
      param_4[4] = '\0';
      param_4[5] = '\0';
      param_4[6] = '\0';
      param_4[7] = '\0';
    }
LAB_00404f70:
    func_0x006d1850(pdVar6);
    return pdVar10;
  }
LAB_00405bec:
  pdVar9 = *(dword **)pdVar9;
  if (pdVar9 == (dword *)0x0) goto LAB_00405c64;
  pdVar4 = pdVar9;
  _strlen();
  pdVar11 = pdVar10;
  if ((ulong)pdVar4 >> 0x1f != 0) goto FUN_00404e18;
  FUN_006d1dfc(pdVar9,pdVar4);
  if (pdVar9 == (dword *)0x0) {
    pdVar10 = &MACH_HEADER.filetype;
  }
  else {
    pdVar6 = pdVar9;
    FUN_00704098();
    if (pdVar6 == (dword *)0x0) {
LAB_00405d14:
      func_0x006d1850(pdVar9);
    }
    else {
      lVar13 = param_1;
      func_0x006c1b24(param_1,pdVar6);
      func_0x006df294(pdVar6);
      if ((int)lVar13 == 0) goto LAB_00405d14;
      func_0x006d1850(pdVar9);
      lVar13 = param_1;
      func_0x006c1004();
      if ((int)lVar13 != 0) goto LAB_00405c64;
    }
    pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
  }
  pcVar8 = "Invalid private key.";
  uVar5 = 0x355;
LAB_00405d3c:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
               ,uVar5,2,pcVar8);
  return pdVar10;
}



/* Entry: 00405ae8; end: 00405d6b;  */

dword * FUN_00405ae8(undefined8 param_1,dword *param_2,ulong param_3,char *param_4)

{
  bool bVar1;
  uint uVar2;
  dword *pdVar3;
  dword *pdVar4;
  dword *pdVar5;
  undefined8 uVar6;
  dword *pdVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  dword *pdVar11;
  dword *pdVar12;
  undefined1 *puVar13;
  dword *unaff_x23;
  long lVar14;
  dword *unaff_x24;
  undefined8 uStack_f8;
  dword *pdStack_f0;
  dword *pdStack_e8;
  dword *pdStack_e0;
  dword *pdStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_60;
  
  if (param_2 == (dword *)0x0) {
LAB_00405c64:
    if ((param_3 == 0) || (uVar8 = param_1, func_0x006c10fc(param_1,param_3), (int)uVar8 != 0)) {
      uVar6 = 0x19f;
      func_0x006eca3c(0x19f);
      uVar8 = param_1;
      func_0x006c132c(param_1,uVar6);
      if ((int)uVar8 != 0) {
        func_0x006c0fdc(param_1,0);
        func_0x006eca8c(uVar6);
        return (dword *)0x0;
      }
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x362,2,"Could not set ephemeral ECDH key.");
      func_0x006eca8c(uVar6);
      return (dword *)((long)&MACH_HEADER.cputype + 3);
    }
    pcVar10 = "Invalid cipher list: %s.";
    pdVar12 = (dword *)((long)&MACH_HEADER.magic + 2);
    uVar8 = 0x35c;
    uStack_60 = param_3;
    goto LAB_00405d3c;
  }
  pdVar11 = *(dword **)(param_2 + 2);
  pdVar7 = param_2;
  uVar9 = param_3;
  pdVar12 = pdVar11;
  if (pdVar11 != (dword *)0x0) {
    pdVar5 = pdVar11;
    _strlen();
    if ((ulong)pdVar5 >> 0x1f == 0) {
      FUN_006d1dfc(pdVar11,pdVar5);
      if (pdVar11 == (dword *)0x0) {
        pdVar12 = &MACH_HEADER.filetype;
      }
      else {
        param_4 = "";
        uVar9 = 0;
        unaff_x24 = pdVar11;
        FUN_00704358();
        if (unaff_x24 == (dword *)0x0) {
          func_0x006d1850(pdVar11);
          pdVar12 = (dword *)((long)&MACH_HEADER.magic + 2);
        }
        else {
          uVar8 = param_1;
          pdVar7 = unaff_x24;
          func_0x006c4668();
          if ((int)uVar8 != 0) {
            do {
              pdVar7 = (dword *)0x0;
              uVar9 = 0;
              pdVar12 = pdVar11;
              param_4 = "";
              func_0x007042e8();
              if (pdVar12 == (dword *)0x0) {
                FUN_006de5b0();
                pdVar12 = (dword *)0x0;
                bVar1 = true;
                goto LAB_00405bd8;
              }
              uVar8 = param_1;
              pdVar7 = pdVar12;
              func_0x006c46dc();
            } while ((int)uVar8 != 0);
            func_0x0070e584(pdVar12);
          }
          bVar1 = false;
          pdVar12 = (dword *)((long)&MACH_HEADER.magic + 2);
LAB_00405bd8:
          func_0x0070e584(unaff_x24);
          func_0x006d1850(pdVar11);
          unaff_x23 = pdVar11;
          if (bVar1) goto LAB_00405bec;
        }
      }
      pcVar10 = "Invalid cert chain file.";
      uVar8 = 0x34d;
      goto LAB_00405d3c;
    }
    func_0x00776094();
FUN_00404e18:
    func_0x00776060();
    pcStack_68 = FUN_00405d6c;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x006c4638();
    FUN_00709b64();
    ppuStack_c0 = &puStack_70;
    if (uVar9 >> 0x1f != 0) {
      func_0x00775f5c();
      pcStack_b8 = FUN_00405020;
      pdVar12 = pdVar5;
      pdStack_f0 = unaff_x24;
      pdStack_e8 = unaff_x23;
      pdStack_e0 = pdVar11;
      pdStack_d8 = param_2;
      uStack_d0 = param_3;
      uStack_c8 = param_1;
      FUN_006d1e78();
      func_0x006d17d4();
      pdVar11 = pdVar5;
      func_0x00705ee0();
      if (pdVar11 != (dword *)0x0) {
        puVar13 = (undefined1 *)0x0;
        do {
          pdVar3 = pdVar5;
          func_0x00705eec(pdVar5,puVar13);
          pdVar4 = pdVar12;
          FUN_00704310(pdVar12,pdVar3);
          if ((int)pdVar4 == 0) {
            func_0x006d1850(pdVar12);
            return (dword *)((long)&MACH_HEADER.cputype + 3);
          }
          puVar13 = puVar13 + 1;
        } while (pdVar11 != (dword *)puVar13);
      }
      pdVar11 = pdVar12;
      func_0x006d1e84(pdVar12,&uStack_f8);
      if ((long)pdVar11 < 1) {
        pcVar10 = (char *)((long)&MACH_HEADER.cputype + 3);
      }
      else {
        pcVar10 = "x509_pem_cert_chain";
        func_0x00407a80("x509_pem_cert_chain",uStack_f8,pdVar11,pdVar7);
      }
      func_0x006d1850(pdVar12);
      return (dword *)pcVar10;
    }
    FUN_006d1dfc(pdVar7,uVar9);
    if (pdVar5 == (dword *)0x0) {
      return (dword *)((long)&MACH_HEADER.magic + 2);
    }
    if (pdVar7 == (dword *)0x0) {
LAB_00404f24:
      return &MACH_HEADER.filetype;
    }
    if (param_4 != (char *)0x0) {
      pdVar12 = pdVar7;
      FUN_00705ed8();
      *(dword **)param_4 = pdVar12;
      if (pdVar12 == (dword *)0x0) goto LAB_00404f24;
    }
    pdVar12 = pdVar7;
    func_0x0070435c(pdVar7,0,0,"");
    if (pdVar12 == (dword *)0x0) {
      FUN_006de5b0();
    }
    else {
      lVar14 = 0;
      do {
        if (param_4 != (char *)0x0) {
          pdVar11 = pdVar12;
          FUN_00708bbc();
          if (pdVar11 == (dword *)0x0) {
            pdVar11 = (dword *)((long)&MACH_HEADER.magic + 2);
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                         ,0x30c,2,"Could not get name from root certificate.");
          }
          else {
            func_0x0070db30();
            if (pdVar11 != (dword *)0x0) {
              func_0x00706268(*(undefined8 *)param_4,pdVar11);
              goto LAB_00404ec0;
            }
            pdVar11 = &MACH_HEADER.filetype;
          }
joined_r0x00404fb4:
          if (lVar14 == 0) {
            pdVar11 = (dword *)((long)&MACH_HEADER.magic + 2);
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                         ,0x326,2,"Could not load any root certificate.");
          }
          func_0x0070e584(pdVar12);
          goto joined_r0x00404fec;
        }
LAB_00404ec0:
        FUN_006de5b0();
        pdVar11 = pdVar5;
        FUN_00709540(pdVar5,pdVar12);
        uVar2 = (uint)pdVar11;
        if ((uVar2 == 0) && (func_0x006de46c(), (uVar2 & 0xff000fff) != 0xb000069)) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                       ,0x31d,2,"Could not add root certificate to ssl context.");
          pdVar11 = (dword *)((long)&MACH_HEADER.cputype + 3);
          goto joined_r0x00404fb4;
        }
        func_0x0070e584(pdVar12);
        pdVar12 = pdVar7;
        func_0x0070435c(pdVar7,0,0,"");
        lVar14 = lVar14 + -1;
      } while (pdVar12 != (dword *)0x0);
      FUN_006de5b0();
      if (lVar14 != 0) {
        pdVar11 = (dword *)0x0;
        goto LAB_00404f70;
      }
    }
    pdVar11 = (dword *)((long)&MACH_HEADER.magic + 2);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,0x326,2,"Could not load any root certificate.");
joined_r0x00404fec:
    if (param_4 != (char *)0x0) {
      FUN_00705f40(*(undefined8 *)param_4,0x6c49ec,0x70db24);
      param_4[0] = '\0';
      param_4[1] = '\0';
      param_4[2] = '\0';
      param_4[3] = '\0';
      param_4[4] = '\0';
      param_4[5] = '\0';
      param_4[6] = '\0';
      param_4[7] = '\0';
    }
LAB_00404f70:
    func_0x006d1850(pdVar7);
    return pdVar11;
  }
LAB_00405bec:
  param_2 = *(dword **)param_2;
  if (param_2 == (dword *)0x0) goto LAB_00405c64;
  pdVar5 = param_2;
  _strlen();
  pdVar11 = pdVar12;
  if ((ulong)pdVar5 >> 0x1f != 0) goto FUN_00404e18;
  FUN_006d1dfc(param_2,pdVar5);
  if (param_2 == (dword *)0x0) {
    pdVar12 = &MACH_HEADER.filetype;
  }
  else {
    pdVar7 = param_2;
    FUN_00704098();
    if (pdVar7 == (dword *)0x0) {
LAB_00405d14:
      func_0x006d1850(param_2);
    }
    else {
      uVar8 = param_1;
      func_0x006c1b24(param_1,pdVar7);
      func_0x006df294(pdVar7);
      if ((int)uVar8 == 0) goto LAB_00405d14;
      func_0x006d1850(param_2);
      uVar8 = param_1;
      func_0x006c1004();
      if ((int)uVar8 != 0) goto LAB_00405c64;
    }
    pdVar12 = (dword *)((long)&MACH_HEADER.magic + 2);
  }
  pcVar10 = "Invalid private key.";
  uVar8 = 0x355;
LAB_00405d3c:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
               ,uVar8,2,pcVar10);
  return pdVar12;
}



/* Entry: 00405d6c; end: 00405dbb;  */

char * FUN_00405d6c(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_98;
  
  func_0x006c4638();
  FUN_00709b64();
  if (param_3 >> 0x1f != 0) {
    func_0x00775f5c();
    lVar2 = param_1;
    FUN_006d1e78();
    func_0x006d17d4();
    lVar7 = param_1;
    func_0x00705ee0();
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        lVar3 = param_1;
        func_0x00705eec(param_1,lVar6);
        lVar4 = lVar2;
        FUN_00704310(lVar2,lVar3);
        if ((int)lVar4 == 0) {
          func_0x006d1850(lVar2);
          return "\x01";
        }
        lVar6 = lVar6 + 1;
      } while (lVar7 != lVar6);
    }
    lVar7 = lVar2;
    func_0x006d1e84(lVar2,&uStack_98);
    if (lVar7 < 1) {
      pcVar5 = "\x01";
    }
    else {
      pcVar5 = "x509_pem_cert_chain";
      func_0x00407a80("x509_pem_cert_chain",uStack_98,lVar7,param_2);
    }
    func_0x006d1850(lVar2);
    return pcVar5;
  }
  FUN_006d1dfc(param_2,param_3);
  if (param_1 == 0) {
    return (char *)0x2;
  }
  if (param_2 == 0) {
    return "\x06";
  }
  if (param_4 != (long *)0x0) {
    lVar2 = param_2;
    FUN_00705ed8();
    *param_4 = lVar2;
    if (lVar2 == 0) {
      return "\x06";
    }
  }
  lVar2 = param_2;
  FUN_00704358(param_2,0,0,"");
  if (lVar2 == 0) {
    FUN_006de5b0();
  }
  else {
    lVar7 = 0;
    do {
      if (param_4 != (long *)0x0) {
        lVar6 = lVar2;
        FUN_00708bbc();
        if (lVar6 == 0) {
          pcVar5 = (char *)0x2;
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                       ,0x30c,2,"Could not get name from root certificate.");
        }
        else {
          func_0x0070db30();
          if (lVar6 != 0) {
            func_0x00706268(*param_4,lVar6);
            goto LAB_00404ec0;
          }
          pcVar5 = "\x06";
        }
joined_r0x00404fb4:
        if (lVar7 == 0) {
          pcVar5 = (char *)0x2;
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                       ,0x326,2,"Could not load any root certificate.");
        }
        func_0x0070e584(lVar2);
        goto joined_r0x00404fec;
      }
LAB_00404ec0:
      FUN_006de5b0();
      lVar6 = param_1;
      FUN_00709540(param_1,lVar2);
      uVar1 = (uint)lVar6;
      if ((uVar1 == 0) && (func_0x006de46c(), (uVar1 & 0xff000fff) != 0xb000069)) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,0x31d,2,"Could not add root certificate to ssl context.");
        pcVar5 = "\x01";
        goto joined_r0x00404fb4;
      }
      func_0x0070e584(lVar2);
      lVar2 = param_2;
      func_0x0070435c(param_2,0,0,"");
      lVar7 = lVar7 + -1;
    } while (lVar2 != 0);
    FUN_006de5b0();
    if (lVar7 != 0) {
      pcVar5 = (char *)0x0;
      goto LAB_00404f70;
    }
  }
  pcVar5 = (char *)0x2;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
               ,0x326,2,"Could not load any root certificate.");
joined_r0x00404fec:
  if (param_4 != (long *)0x0) {
    FUN_00705f40(*param_4,0x6c49ec,0x70db24);
    *param_4 = 0;
  }
LAB_00404f70:
  func_0x006d1850(param_2);
  return pcVar5;
}



/* Entry: 00405dbc; end: 00405ee7;  */

undefined4 FUN_00405dbc(long *param_1,uint param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  *param_3 = 0;
  *param_4 = 0;
  if (param_2 == 0) {
    uVar2 = 2;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    uVar5 = (ulong)param_2;
    plVar4 = param_1;
    uVar6 = uVar5;
    do {
      lVar1 = *plVar4;
      if ((lVar1 == 0) || (_strlen(), 0xfe < lVar1 - 1U)) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,0x38e,2,"Invalid protocol name length: %d.");
        return 2;
      }
      puVar3 = puVar3 + lVar1 + 1;
      *param_4 = (ulong)puVar3;
      plVar4 = plVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    FUN_00338c74();
    *param_3 = (ulong)puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      uVar2 = 0xc;
    }
    else {
      do {
        lVar1 = *param_1;
        _strlen();
        *puVar3 = (char)lVar1;
        _memcpy(puVar3 + 1,*param_1,lVar1);
        puVar3 = puVar3 + 1 + lVar1;
        uVar5 = uVar5 - 1;
        param_1 = param_1 + 1;
      } while (uVar5 != 0);
      uVar2 = 7;
      if (((undefined1 *)*param_3 <= puVar3) &&
         (uVar2 = 0, (long)puVar3 - (long)*param_3 != *param_4)) {
        uVar2 = 7;
      }
    }
  }
  return uVar2;
}



/* Entry: 00405ee8; end: 00405f0f;  */

byte * FUN_00405ee8(undefined8 param_1,undefined8 *param_2,byte *param_3,byte *param_4,ulong param_5
                   ,long param_6)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar1 = *(byte **)(param_6 + 0x18);
  uVar2 = *(ulong *)(param_6 + 0x20);
  pbVar5 = pbVar1;
  if (uVar2 == 0) {
    return (byte *)((long)&MACH_HEADER.magic + 3);
  }
  do {
    pbVar6 = pbVar5 + 1;
    bVar3 = *pbVar5;
    pbVar5 = param_4;
    if ((param_5 & 0xffffffff) != 0) {
      do {
        pbVar7 = pbVar5 + 1;
        bVar4 = *pbVar5;
        if ((bVar3 == bVar4) &&
           (pbVar5 = pbVar6, _memcmp(pbVar6,pbVar7,(ulong)bVar3), (int)pbVar5 == 0)) {
          *param_2 = pbVar7;
          *param_3 = bVar3;
          return pbVar5;
        }
        pbVar5 = pbVar7 + bVar4;
      } while (param_4 <= pbVar5 && (ulong)((long)pbVar5 - (long)param_4) < (param_5 & 0xffffffff));
    }
    pbVar5 = pbVar6 + bVar3;
    if (uVar2 <= (uint)((int)(pbVar6 + bVar3) - (int)pbVar1)) {
      return (byte *)((long)&MACH_HEADER.magic + 3);
    }
  } while( true );
}



/* Entry: 00405f10; end: 00405f8b;  */

undefined8 FUN_00405f10(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  FUN_0070b2d8();
  if (param_2 != 0) {
    if (param_2 == 3) {
      pcVar3 = "Certificate verification failed to get CRL files. Ignoring error.";
      param_1 = 1;
      uVar1 = 0x7b9;
      uVar2 = 1;
    }
    else {
      pcVar3 = "Certificate verify failed with code %d";
      uVar1 = 0x7be;
      uVar2 = 2;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,uVar1,uVar2,pcVar3);
  }
  return param_1;
}



/* Entry: 00405f8c; end: 00406177;  */

undefined8 FUN_00405f8c(long *param_1,byte *param_2,ulong param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  uint uStack_64;
  
  if (param_3 == 0) {
    uStack_64 = 0;
  }
  else {
    bVar9 = *param_2;
    if (bVar9 == 0x3a) {
      uVar6 = 0;
      uVar7 = 0;
      bVar2 = true;
    }
    else {
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 1;
      bVar2 = true;
      do {
        if ((char)bVar9 < '0') {
          if (((bVar9 != 0x2e) || (3 < uVar6)) || (uVar7 == 0)) goto LAB_00406050;
          uVar7 = 0;
          uVar6 = uVar6 + 1;
        }
        else {
          if ((0x39 < bVar9) || (3 < uVar7)) {
LAB_00406050:
            uVar8 = 0;
            goto LAB_00406058;
          }
          uVar7 = uVar7 + 1;
        }
        bVar2 = uVar8 < param_3;
        if (param_3 == uVar8) goto LAB_00406058;
        bVar9 = param_2[uVar8];
        uVar8 = uVar8 + 1;
      } while (bVar9 != 0x3a);
    }
    uVar8 = 1;
LAB_00406058:
    uStack_64 = (uint)uVar8;
    if (!bVar2) {
      uStack_64 = (uint)(2 < uVar6 && uVar7 != 0);
    }
  }
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    lVar15 = 0;
    uVar6 = 0;
    lVar14 = 0;
    plVar12 = (long *)0x0;
    do {
      lVar10 = *param_1;
      plVar1 = (long *)(lVar10 + lVar15);
      lVar11 = *plVar1;
      plVar13 = plVar12;
      if (lVar11 != 0) {
        lVar3 = lVar11;
        _strcmp(lVar11,"x509_subject_alternative_name");
        if ((int)lVar3 == 0) {
          lVar14 = lVar14 + 1;
          lVar10 = lVar10 + lVar15;
          uVar5 = *(undefined8 *)(lVar10 + 8);
          uVar8 = *(ulong *)(lVar10 + 0x10);
          if (uStack_64 == 0) {
            FUN_00406178(uVar5,uVar8,param_2,param_3);
            if ((int)uVar5 != 0) {
              return 1;
            }
            uVar7 = param_1[1];
          }
          else if ((param_3 == uVar8) &&
                  (pbVar4 = param_2, _memcmp(param_2,uVar5), (int)pbVar4 == 0)) {
            return 1;
          }
        }
        else {
          _strcmp(lVar11,"x509_subject_common_name");
          plVar13 = plVar1;
          if ((int)lVar11 != 0) {
            plVar13 = plVar12;
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar15 = lVar15 + 0x18;
      plVar12 = plVar13;
    } while (uVar6 < uVar7);
    if (((lVar14 == 0) && (plVar13 != (long *)0x0)) && (uStack_64 == 0)) {
      lVar15 = plVar13[1];
      FUN_00406178(lVar15,plVar13[2],param_2,param_3);
      if ((int)lVar15 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 00406178; end: 0040634b;  */

dword * FUN_00406178(char *param_1,int *param_2,ulong param_3,long param_4)

{
  char *pcVar1;
  dword dVar2;
  int iVar3;
  dword *pdVar4;
  char *pcVar5;
  dword *pdVar6;
  dword *pdVar7;
  char *pcVar8;
  char *UNRECOVERED_JUMPTABLE;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  bool bVar17;
  dword *pdStack_100;
  dword *pdStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_c8;
  undefined8 auStack_58 [2];
  char cStack_41;
  dword *pdStack_40;
  long lStack_38;
  
  if (param_2 != (int *)0x0) {
    piVar13 = (int *)((long)param_2 + -1);
    if ((param_1[(long)piVar13] != '.') || (param_2 = piVar13, piVar13 != (int *)0x0)) {
      uVar14 = param_4 - (ulong)(*(char *)(param_4 + param_3 + -1) == '.');
      uVar15 = param_3;
      piVar13 = param_2;
      FUN_00574800(param_3,uVar14,param_1);
      if ((uVar15 & 1) != 0) {
        return (dword *)((long)&MACH_HEADER.magic + 1);
      }
      if (*param_1 == '*') {
        if ((param_2 < (int *)((long)&MACH_HEADER.magic + 3)) || (param_1[1] != '.')) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                       ,0x74f,2,"Invalid wildchar entry.");
        }
        else if (uVar14 != 0) {
          pdVar4 = (dword *)(segment_command_00000020.segname + 6);
          uVar15 = param_3;
          uVar9 = uVar14;
          _memchr();
          uVar10 = uVar15 - param_3;
          if ((uVar15 != 0 && uVar10 != 0xffffffffffffffff) && uVar10 < uVar14 - 2) {
            if (uVar14 <= uVar10) {
              pcVar5 = "string_view::substr";
              FUN_0033b2a4();
              if (cStack_41 < '\0') {
                __ZdlPv(auStack_58[0]);
              }
              __Unwind_Resume();
              lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
              UNRECOVERED_JUMPTABLE = pcVar5;
              pdVar6 = pdVar4;
              if (uVar9 != 0) {
                uVar15 = 0;
                pcVar1 = "x509_subject_alternative_name";
                do {
                  pdVar6 = pdVar4;
                  func_0x00705eec(pdVar4,uVar15);
                  dVar2 = *pdVar6;
                  if (dVar2 - 1 < 2) {
LAB_004063d4:
                    pdStack_100 = (dword *)0x0;
                    pdStack_f8 = (dword *)0x0;
                    uStack_f0 = 0;
                    lStack_e8 = 0;
                    if (*pdVar6 == 1) {
                      iVar16 = (int)&pdStack_100;
                      FUN_006cceb8(&pdStack_100,*(undefined8 *)(pdVar6 + 2));
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                                (&pdStack_f8,"x509_email");
                    }
                    else if (*pdVar6 == 2) {
                      iVar16 = (int)&pdStack_100;
                      FUN_006cceb8(&pdStack_100,*(undefined8 *)(pdVar6 + 2));
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                                (&pdStack_f8,"x509_dns");
                    }
                    else {
                      iVar16 = (int)&pdStack_100;
                      FUN_006cceb8(&pdStack_100,*(undefined8 *)(pdVar6 + 2));
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                                (&pdStack_f8,"x509_uri");
                    }
                    if (iVar16 < 0) {
                      UNRECOVERED_JUMPTABLE =
                           "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ;
                      pdVar6 = &section_00000158.reloff;
                      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                                   ,400,2,"Could not get utf8 from asn1 string.");
                      bVar17 = false;
                      pdVar7 = (dword *)((long)&MACH_HEADER.cputype + 3);
                    }
                    else {
                      lVar12 = *(long *)pcVar5;
                      iVar3 = *piVar13;
                      *piVar13 = iVar3 + 1;
                      pdVar7 = (dword *)pcVar1;
                      pdVar6 = pdStack_100;
                      func_0x00407a80("x509_subject_alternative_name",pdStack_100,iVar16,
                                      lVar12 + (long)iVar3 * 0x18);
                      if ((int)pdVar7 == 0) {
                        pdVar7 = pdStack_f8;
                        if (-1 < lStack_e8) {
                          pdVar7 = (dword *)&pdStack_f8;
                        }
                        lVar12 = *(long *)pcVar5;
                        iVar3 = *piVar13;
                        *piVar13 = iVar3 + 1;
                        pdVar6 = pdStack_100;
                        func_0x00407a80(pdVar7,pdStack_100,iVar16,lVar12 + (long)iVar3 * 0x18);
                        UNRECOVERED_JUMPTABLE = (char *)pdStack_100;
                        func_0x00701ed0();
                        bVar17 = true;
                      }
                      else {
                        UNRECOVERED_JUMPTABLE = (char *)pdStack_100;
                        func_0x00701ed0();
                        bVar17 = false;
                      }
                    }
                    if (lStack_e8 < 0) {
                      UNRECOVERED_JUMPTABLE = (char *)pdStack_f8;
                      __ZdlPv();
                    }
                    if (!bVar17) goto LAB_004065e4;
                    iVar16 = (int)pdVar7;
                  }
                  else {
                    UNRECOVERED_JUMPTABLE = pcVar1;
                    if (dVar2 == 7) {
                      iVar16 = **(int **)(pdVar6 + 2);
                      if (iVar16 == 4) {
                        pdVar7 = &MACH_HEADER.magic;
LAB_00406568:
                        pcVar8 = (char *)((long)pdVar7 + 2);
                        _inet_ntop(pcVar8,*(undefined8 *)(*(int **)(pdVar6 + 2) + 2),&pdStack_f8,
                                   0x2e);
                        if ((dword *)pcVar8 != (dword *)0x0) {
                          lVar12 = *(long *)pcVar5;
                          iVar16 = *piVar13;
                          *piVar13 = iVar16 + 1;
                          pdVar6 = (dword *)pcVar8;
                          func_0x00407a20("x509_subject_alternative_name",pcVar8,
                                          lVar12 + (long)iVar16 * 0x18);
                          pdVar7 = (dword *)UNRECOVERED_JUMPTABLE;
                          if ((int)UNRECOVERED_JUMPTABLE == 0) {
                            lVar12 = *(long *)pcVar5;
                            iVar16 = *piVar13;
                            *piVar13 = iVar16 + 1;
                            UNRECOVERED_JUMPTABLE = "x509_ip";
                            func_0x00407a20("x509_ip",pcVar8,lVar12 + (long)iVar16 * 0x18);
                            goto LAB_004065cc;
                          }
                          goto LAB_004065e4;
                        }
                        UNRECOVERED_JUMPTABLE =
                             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                        ;
                        pdVar6 = (dword *)(section_000001a8.sectname + 9);
                        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                                     ,0x1b1,2,"Could not get IP string from asn1 octet.");
                      }
                      else {
                        if (iVar16 == 0x10) {
                          pdVar7 = &MACH_HEADER.reserved;
                          goto LAB_00406568;
                        }
                        UNRECOVERED_JUMPTABLE =
                             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                        ;
                        pdVar6 = (dword *)(section_000001a8.sectname + 2);
                        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                                     ,0x1aa,2,"SAN IP Address contained invalid IP");
                      }
                      pdVar7 = (dword *)((long)&MACH_HEADER.cputype + 3);
                      goto LAB_004065e4;
                    }
                    if (dVar2 == 6) goto LAB_004063d4;
                    lVar12 = *(long *)pcVar5;
                    iVar16 = *piVar13;
                    *piVar13 = iVar16 + 1;
                    pcVar8 = "other types of SAN";
                    func_0x00407a20("x509_subject_alternative_name","other types of SAN",
                                    lVar12 + (long)iVar16 * 0x18);
LAB_004065cc:
                    iVar16 = (int)UNRECOVERED_JUMPTABLE;
                    pdVar6 = (dword *)pcVar8;
                    pdVar7 = (dword *)UNRECOVERED_JUMPTABLE;
                  }
                  if (iVar16 != 0) goto LAB_004065e4;
                  uVar15 = uVar15 + 1;
                } while (uVar9 != uVar15);
              }
              pdVar7 = (dword *)0x0;
LAB_004065e4:
              if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_c8) {
                ___stack_chk_fail();
                __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00406694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)UNRECOVERED_JUMPTABLE)(pdVar6);
                return pdVar6;
              }
              return pdVar7;
            }
            pdVar4 = (dword *)(param_3 + uVar10 + 1);
            lVar12 = uVar14 - (uVar10 + 1);
            pdStack_40 = pdVar4;
            lStack_38 = lVar12;
            if (lVar12 != 0) {
              pdVar6 = pdVar4;
              _memchr(pdVar4,0x2e,lVar12);
              if ((pdVar6 != (dword *)0x0 && (long)pdVar6 - (long)pdVar4 != -1) &&
                 (lVar11 = lVar12 + -1, (long)pdVar6 - (long)pdVar4 != lVar11)) {
                if (*(char *)((long)pdVar4 + lVar11) != '.') {
                  lVar11 = lVar12;
                }
                func_0x00574804(pdVar4,lVar11,param_1 + 2,(long)param_2 + -2);
                return pdVar4;
              }
            }
            FUN_004075d8(auStack_58,&pdStack_40);
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                         ,0x75a,2,"Invalid toplevel subdomain: %s");
            if (cStack_41 < '\0') {
              __ZdlPv(auStack_58[0]);
            }
          }
        }
      }
    }
  }
  return (dword *)0x0;
}



/* Entry: 0040634c; end: 0040668b;  */

dword * FUN_0040634c(dword *param_1,dword *param_2,long param_3,int *param_4)

{
  char *pcVar1;
  dword dVar2;
  int iVar3;
  dword *pdVar4;
  dword *pdVar5;
  char *pcVar6;
  char *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long lVar8;
  int iVar9;
  bool bVar10;
  dword *pdStack_a0;
  dword *pdStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  UNRECOVERED_JUMPTABLE = (char *)param_1;
  pdVar4 = param_2;
  if (param_3 != 0) {
    lVar8 = 0;
    pcVar1 = "x509_subject_alternative_name";
    do {
      pdVar4 = param_2;
      func_0x00705eec(param_2,lVar8);
      dVar2 = *pdVar4;
      if (dVar2 - 1 < 2) {
LAB_004063d4:
        pdStack_a0 = (dword *)0x0;
        pdStack_98 = (dword *)0x0;
        uStack_90 = 0;
        lStack_88 = 0;
        if (*pdVar4 == 1) {
          iVar9 = (int)&pdStack_a0;
          FUN_006cceb8(&pdStack_a0,*(undefined8 *)(pdVar4 + 2));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (&pdStack_98,"x509_email");
        }
        else if (*pdVar4 == 2) {
          iVar9 = (int)&pdStack_a0;
          FUN_006cceb8(&pdStack_a0,*(undefined8 *)(pdVar4 + 2));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (&pdStack_98,"x509_dns");
        }
        else {
          iVar9 = (int)&pdStack_a0;
          FUN_006cceb8(&pdStack_a0,*(undefined8 *)(pdVar4 + 2));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (&pdStack_98,"x509_uri");
        }
        if (iVar9 < 0) {
          UNRECOVERED_JUMPTABLE =
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
          ;
          pdVar4 = &section_00000158.reloff;
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                       ,400,2,"Could not get utf8 from asn1 string.");
          bVar10 = false;
          pdVar5 = (dword *)((long)&MACH_HEADER.cputype + 3);
        }
        else {
          lVar7 = *(long *)param_1;
          iVar3 = *param_4;
          *param_4 = iVar3 + 1;
          pdVar5 = (dword *)pcVar1;
          pdVar4 = pdStack_a0;
          func_0x00407a80("x509_subject_alternative_name",pdStack_a0,iVar9,
                          lVar7 + (long)iVar3 * 0x18);
          if ((int)pdVar5 == 0) {
            pdVar5 = pdStack_98;
            if (-1 < lStack_88) {
              pdVar5 = (dword *)&pdStack_98;
            }
            lVar7 = *(long *)param_1;
            iVar3 = *param_4;
            *param_4 = iVar3 + 1;
            pdVar4 = pdStack_a0;
            func_0x00407a80(pdVar5,pdStack_a0,iVar9,lVar7 + (long)iVar3 * 0x18);
            UNRECOVERED_JUMPTABLE = (char *)pdStack_a0;
            func_0x00701ed0();
            bVar10 = true;
          }
          else {
            UNRECOVERED_JUMPTABLE = (char *)pdStack_a0;
            func_0x00701ed0();
            bVar10 = false;
          }
        }
        if (lStack_88 < 0) {
          UNRECOVERED_JUMPTABLE = (char *)pdStack_98;
          __ZdlPv();
        }
        if (!bVar10) goto LAB_004065e4;
        iVar9 = (int)pdVar5;
      }
      else {
        UNRECOVERED_JUMPTABLE = pcVar1;
        if (dVar2 == 7) {
          iVar9 = **(int **)(pdVar4 + 2);
          if (iVar9 == 4) {
            pdVar5 = &MACH_HEADER.magic;
LAB_00406568:
            pcVar6 = (char *)((long)pdVar5 + 2);
            _inet_ntop(pcVar6,*(undefined8 *)(*(int **)(pdVar4 + 2) + 2),&pdStack_98,0x2e);
            if ((dword *)pcVar6 != (dword *)0x0) {
              lVar7 = *(long *)param_1;
              iVar9 = *param_4;
              *param_4 = iVar9 + 1;
              pdVar4 = (dword *)pcVar6;
              func_0x00407a20("x509_subject_alternative_name",pcVar6,lVar7 + (long)iVar9 * 0x18);
              pdVar5 = (dword *)UNRECOVERED_JUMPTABLE;
              if ((int)UNRECOVERED_JUMPTABLE == 0) {
                lVar7 = *(long *)param_1;
                iVar9 = *param_4;
                *param_4 = iVar9 + 1;
                UNRECOVERED_JUMPTABLE = "x509_ip";
                func_0x00407a20("x509_ip",pcVar6,lVar7 + (long)iVar9 * 0x18);
                goto LAB_004065cc;
              }
              goto LAB_004065e4;
            }
            UNRECOVERED_JUMPTABLE =
                 "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
            ;
            pdVar4 = (dword *)(section_000001a8.sectname + 9);
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                         ,0x1b1,2,"Could not get IP string from asn1 octet.");
          }
          else {
            if (iVar9 == 0x10) {
              pdVar5 = &MACH_HEADER.reserved;
              goto LAB_00406568;
            }
            UNRECOVERED_JUMPTABLE =
                 "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
            ;
            pdVar4 = (dword *)(section_000001a8.sectname + 2);
            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                         ,0x1aa,2,"SAN IP Address contained invalid IP");
          }
          pdVar5 = (dword *)((long)&MACH_HEADER.cputype + 3);
          goto LAB_004065e4;
        }
        if (dVar2 == 6) goto LAB_004063d4;
        lVar7 = *(long *)param_1;
        iVar9 = *param_4;
        *param_4 = iVar9 + 1;
        pcVar6 = "other types of SAN";
        func_0x00407a20("x509_subject_alternative_name","other types of SAN",
                        lVar7 + (long)iVar9 * 0x18);
LAB_004065cc:
        iVar9 = (int)UNRECOVERED_JUMPTABLE;
        pdVar4 = (dword *)pcVar6;
        pdVar5 = (dword *)UNRECOVERED_JUMPTABLE;
      }
      if (iVar9 != 0) goto LAB_004065e4;
      lVar8 = lVar8 + 1;
    } while (param_3 != lVar8);
  }
  pdVar5 = (dword *)0x0;
LAB_004065e4:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return pdVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00406694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(pdVar4);
  return pdVar4;
}



/* Entry: 0040668c; end: 004066bb;  */

void FUN_0040668c(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00406694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 004066bc; end: 004066fb;  */

void FUN_004066bc(long param_1)

{
  func_0x006c0854(*(undefined8 *)(param_1 + 0x10));
  func_0x006d1850(*(undefined8 *)(param_1 + 0x18));
  FUN_00338cb8(*(undefined8 *)(param_1 + 0x28));
  FUN_004053e4(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 004066fc; end: 004068df;  */

long FUN_004066fc(long param_1,long param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uStack_48;
  
  if (((param_3 != 0 && param_2 == 0 || param_4 == (undefined8 *)0x0) ||
      param_5 == (undefined8 *)0x0) || param_6 == (undefined8 *)0x0) {
    return 2;
  }
  uStack_48 = 0;
  if (param_3 != 0) {
    lVar3 = 2;
    if ((param_2 != 0) && (param_3 >> 0x1f == 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x006d199c(uVar4,param_2,param_3);
      if (-1 < (int)uVar4) goto LAB_004067a8;
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x5ea,2,"Could not write to memory BIO.");
      lVar3 = 7;
      *(undefined4 *)(param_1 + 0x20) = 7;
    }
    while ((int)lVar3 == 0x10) {
      lVar3 = param_1;
      FUN_004068e0(param_1,&uStack_48);
      if ((int)lVar3 != 0) {
        return lVar3;
      }
LAB_004067a8:
      lVar3 = param_1;
      func_0x00406998();
    }
    if ((int)lVar3 != 0) {
      return lVar3;
    }
  }
  lVar3 = param_1;
  FUN_004068e0(param_1,&uStack_48);
  if ((int)lVar3 != 0) {
    return lVar3;
  }
  *param_4 = *(undefined8 *)(param_1 + 0x28);
  *param_5 = uStack_48;
  if (*(int *)(param_1 + 0x20) == 0xb) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x006c1314();
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x20) == 0xb) {
        *param_6 = 0;
        return 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  uVar5 = *(ulong *)(param_1 + 0x10);
  func_0x006c09dc();
  FUN_006d1aa0();
  if (uVar5 == 0) {
    uVar7 = 0;
LAB_0040687c:
    lVar3 = param_1;
    func_0x00406ad4(param_1,uVar7,uVar5,param_6);
    if ((int)lVar3 == 0) {
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  else {
    uVar7 = uVar5;
    FUN_00338c74(uVar5);
    uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
    func_0x006c09dc();
    func_0x006d18ac();
    if (((int)uVar2 < 0) || (uVar5 != uVar2)) {
      pcVar6 = "Failed to read the expected number of bytes from SSL object.";
      uVar4 = 0x60f;
    }
    else {
      if (uVar5 <= param_3) goto LAB_0040687c;
      pcVar6 = "More unused bytes than received bytes.";
      uVar4 = 0x65d;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,uVar4,2,pcVar6);
    FUN_00338cb8(uVar7);
    lVar3 = 7;
  }
  return lVar3;
}



/* Entry: 004068e0; end: 00406d4f;  */

void FUN_004068e0(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *param_2;
  lVar3 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  do {
    uVar5 = lVar4 - lVar6;
    if (lVar3 == 0 || uVar5 >> 0x1f != 0) {
LAB_0040695c:
      *param_2 = uVar5 + lVar6;
      return;
    }
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x006d18ac(uVar2,lVar3 + lVar6,uVar5);
    if ((int)uVar2 < 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
      FUN_006d1a94();
      uVar5 = 0;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x20) = 7;
      }
      goto LAB_0040695c;
    }
    uVar5 = uVar2 & 0xffffffff;
    lVar3 = *(long *)(param_1 + 0x18);
    FUN_006d1aa0();
    if (lVar3 == 0) goto LAB_0040695c;
    lVar6 = lVar6 + uVar5;
    lVar3 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) << 1;
    FUN_00338cbc();
    *(long *)(param_1 + 0x28) = lVar3;
    lVar4 = *(long *)(param_1 + 0x30);
  } while( true );
}



/* Entry: 00406d50; end: 00406d5b;  */

undefined8 FUN_00406d50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0;
}



/* Entry: 00406d5c; end: 00406e27;  */

undefined8 FUN_00406d5c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  qword qVar4;
  
  pcVar1 = segment_command_00000020.segname + 8;
  func_0x00338c94();
  if (param_2 == (undefined8 *)0x0) {
    puVar3 = &UNK_00003f9c;
    goto LAB_00406db8;
  }
  puVar3 = (undefined *)*param_2;
  if (puVar3 < &UNK_00004001) {
    if (puVar3 < (undefined *)0x400) {
      puVar3 = (undefined *)0x400;
      goto LAB_00406db0;
    }
  }
  else {
    puVar3 = (undefined *)0x4000;
LAB_00406db0:
    *param_2 = puVar3;
  }
  puVar3 = puVar3 + -100;
LAB_00406db8:
  *(undefined **)(pcVar1 + 0x20) = puVar3;
  func_0x00338c74();
  *(undefined **)(pcVar1 + 0x18) = puVar3;
  if (puVar3 == (undefined *)0x0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                 ,0x55d,2,"Could not allocated buffer for tsi_ssl_frame_protector.");
    FUN_00338cb8(pcVar1);
    uVar2 = 7;
  }
  else {
    uVar2 = 0;
    qVar4 = *(qword *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    *(qword *)(pcVar1 + 0x10) = *(qword *)(param_1 + 0x10);
    *(qword *)(pcVar1 + 8) = qVar4;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined ***)pcVar1 = &PTR_FUN_009e2328;
    *param_3 = pcVar1;
  }
  return uVar2;
}



/* Entry: 00406e28; end: 00406e3b;  */

undefined8 FUN_00406e28(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *param_3 = *(undefined8 *)(param_1 + 0x20);
  *param_2 = uVar1;
  return 0;
}



/* Entry: 00406e3c; end: 00406e73;  */

void FUN_00406e3c(long param_1)

{
  func_0x006c0854(*(undefined8 *)(param_1 + 8));
  func_0x006d1850(*(undefined8 *)(param_1 + 0x10));
  FUN_00338cb8(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 00406e74; end: 00406fc3;  */

void FUN_00406e74(long param_1,undefined8 param_2,ulong *param_3,long *param_4,ulong *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long *plVar8;
  char *pcVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar4 = param_2;
  plVar8 = param_4;
  puVar11 = param_5;
  FUN_006d1aa0();
  if ((int)lVar1 < 1) {
    uVar2 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x28);
    if (*param_3 < uVar2) {
      _memcpy(lVar1,param_2);
      *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + *param_3;
      *param_5 = 0;
      return;
    }
    _memcpy(lVar1,param_2,uVar2);
    lVar1 = *(long *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    FUN_004071dc(lVar1,uVar4,*(undefined8 *)(param_1 + 0x20));
    if ((int)lVar1 != 0) {
      return;
    }
    puVar6 = (ulong *)*param_5;
    if ((ulong)puVar6 >> 0x1f == 0) {
      uVar13 = *(ulong *)(param_1 + 0x10);
      func_0x006d18ac(uVar13,param_4);
      if (-1 < (int)uVar13) {
        *param_5 = uVar13 & 0xffffffff;
        *param_3 = uVar2;
        *(undefined8 *)(param_1 + 0x28) = 0;
        return;
      }
      pcVar9 = "Could not read from BIO after SSL_write.";
      uVar4 = 0x44d;
      goto LAB_00406f34;
    }
  }
  else {
    *param_3 = 0;
    puVar6 = (ulong *)*param_5;
    if ((ulong)puVar6 >> 0x1f == 0) {
      uVar2 = *(ulong *)(param_1 + 0x10);
      func_0x006d18ac(uVar2,param_4);
      if (-1 < (int)uVar2) {
        *param_5 = uVar2 & 0xffffffff;
        return;
      }
      pcVar9 = "Could not read from BIO even though some data is pending";
      uVar4 = 0x431;
LAB_00406f34:
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,uVar4,2,pcVar9);
      return;
    }
    func_0x007760c8();
  }
  func_0x007760fc();
  puVar7 = *(ulong **)(lVar1 + 0x28);
  uVar5 = uVar4;
  plVar10 = plVar8;
  if (puVar7 != (ulong *)0x0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x18);
    FUN_004071dc(uVar3,uVar5);
    if ((int)uVar3 != 0) {
      return;
    }
    *(undefined8 *)(lVar1 + 0x28) = 0;
  }
  uVar2 = *(ulong *)(lVar1 + 0x10);
  FUN_006d1aa0();
  if ((int)uVar2 < 0) {
    func_0x00776198();
  }
  else {
    *plVar8 = (long)(int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      return;
    }
    puVar7 = (ulong *)*puVar6;
    if ((ulong)puVar7 >> 0x1f == 0) {
      uVar2 = *(ulong *)(lVar1 + 0x10);
      func_0x006d18ac(uVar2,uVar4);
      if ((int)uVar2 < 1) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,0x46e,2,"Could not read from BIO after SSL_write.");
        return;
      }
      *puVar6 = uVar2 & 0xffffffff;
      uVar2 = *(ulong *)(lVar1 + 0x10);
      FUN_006d1aa0();
      if (-1 < (int)uVar2) {
        *plVar8 = (long)(int)uVar2;
        return;
      }
      goto LAB_004070a4;
    }
  }
  uVar4 = uVar5;
  func_0x00776130();
LAB_004070a4:
  func_0x00776164();
  uVar13 = *puVar11;
  lVar1 = *(long *)(uVar2 + 8);
  func_0x00407318(lVar1,plVar10,puVar11);
  if ((int)lVar1 == 0) {
    uVar12 = *puVar11;
    if (uVar13 - uVar12 == 0) {
      *puVar7 = 0;
    }
    else {
      *puVar11 = uVar13 - uVar12;
      if (*puVar7 >> 0x1f != 0) {
        func_0x007761cc();
        if (*(long *)(lVar1 + 0x18) != 0) {
          FUN_00338cb8();
        }
        if (*(long *)(lVar1 + 8) != 0) {
          func_0x006c0854();
        }
        if (*(long *)(lVar1 + 0x10) != 0) {
          func_0x006d1850();
        }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_0099a260)(lVar1);
        return;
      }
      uVar13 = *(ulong *)(uVar2 + 0x10);
      func_0x006d199c(uVar13,uVar4);
      if ((int)uVar13 < 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,0x494,2,"Sending protected frame to ssl failed with %d");
      }
      else {
        *puVar7 = uVar13 & 0xffffffff;
        uVar4 = *(undefined8 *)(uVar2 + 8);
        func_0x00407318(uVar4,(long)plVar10 + uVar12,puVar11);
        if ((int)uVar4 == 0) {
          *puVar11 = *puVar11 + uVar12;
        }
      }
    }
  }
  return;
}



/* Entry: 00406fc4; end: 004070a7;  */

void FUN_00406fc4(long param_1,undefined8 param_2,ulong *param_3,long *param_4,long *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  puVar6 = *(ulong **)(param_1 + 0x28);
  uVar5 = param_2;
  plVar7 = param_4;
  if (puVar6 != (ulong *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    FUN_004071dc(uVar1,uVar5);
    if ((int)uVar1 != 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  FUN_006d1aa0();
  if ((int)uVar2 < 0) {
    func_0x00776198();
  }
  else {
    *param_4 = (long)(int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      return;
    }
    puVar6 = (ulong *)*param_3;
    if ((ulong)puVar6 >> 0x1f == 0) {
      uVar2 = *(ulong *)(param_1 + 0x10);
      func_0x006d18ac(uVar2,param_2);
      if ((int)uVar2 < 1) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,0x46e,2,"Could not read from BIO after SSL_write.");
        return;
      }
      *param_3 = uVar2 & 0xffffffff;
      uVar2 = *(ulong *)(param_1 + 0x10);
      FUN_006d1aa0();
      if (-1 < (int)uVar2) {
        *param_4 = (long)(int)uVar2;
        return;
      }
      goto LAB_004070a4;
    }
  }
  param_2 = uVar5;
  func_0x00776130();
LAB_004070a4:
  func_0x00776164();
  lVar9 = *param_5;
  lVar3 = *(long *)(uVar2 + 8);
  func_0x00407318(lVar3,plVar7,param_5);
  if ((int)lVar3 == 0) {
    lVar8 = *param_5;
    if (lVar9 - lVar8 == 0) {
      *puVar6 = 0;
    }
    else {
      *param_5 = lVar9 - lVar8;
      if (*puVar6 >> 0x1f != 0) {
        func_0x007761cc();
        if (*(long *)(lVar3 + 0x18) != 0) {
          FUN_00338cb8();
        }
        if (*(long *)(lVar3 + 8) != 0) {
          func_0x006c0854();
        }
        if (*(long *)(lVar3 + 0x10) != 0) {
          func_0x006d1850();
        }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_0099a260)(lVar3);
        return;
      }
      uVar4 = *(ulong *)(uVar2 + 0x10);
      func_0x006d199c(uVar4,param_2);
      if ((int)uVar4 < 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,0x494,2,"Sending protected frame to ssl failed with %d");
      }
      else {
        *puVar6 = uVar4 & 0xffffffff;
        uVar5 = *(undefined8 *)(uVar2 + 8);
        func_0x00407318(uVar5,(long)plVar7 + lVar8,param_5);
        if ((int)uVar5 == 0) {
          *param_5 = *param_5 + lVar8;
        }
      }
    }
  }
  return;
}



/* Entry: 004070a8; end: 00407197;  */

void FUN_004070a8(long param_1,undefined8 param_2,ulong *param_3,long param_4,long *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_5;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00407318(lVar1,param_4,param_5);
  if ((int)lVar1 == 0) {
    lVar4 = *param_5;
    if (lVar5 - lVar4 == 0) {
      *param_3 = 0;
    }
    else {
      *param_5 = lVar5 - lVar4;
      if (*param_3 >> 0x1f != 0) {
        func_0x007761cc();
        if (*(long *)(lVar1 + 0x18) != 0) {
          FUN_00338cb8();
        }
        if (*(long *)(lVar1 + 8) != 0) {
          func_0x006c0854();
        }
        if (*(long *)(lVar1 + 0x10) != 0) {
          func_0x006d1850();
        }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_0099a260)(lVar1);
        return;
      }
      uVar2 = *(ulong *)(param_1 + 0x10);
      func_0x006d199c(uVar2,param_2);
      if ((int)uVar2 < 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,0x494,2,"Sending protected frame to ssl failed with %d");
      }
      else {
        *param_3 = uVar2 & 0xffffffff;
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00407318(uVar3,param_4 + lVar4,param_5);
        if ((int)uVar3 == 0) {
          *param_5 = *param_5 + lVar4;
        }
      }
    }
  }
  return;
}



/* Entry: 00407198; end: 004071db;  */

void FUN_00407198(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00338cb8();
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x006c0854();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x006d1850();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 004071dc; end: 00407473;  */

ulong FUN_004071dc(ulong param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  if ((ulong)param_3 >> 0x1f == 0) {
    FUN_006de5b0();
    uVar4 = param_1;
    func_0x006c0e20(param_1,param_2,param_3);
    if ((int)uVar4 < 0) {
      func_0x006c0ee8(param_1,uVar4);
      switch(param_1 & 0xffffffff) {
      case 1:
        break;
      case 2:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,0x242,2,"Peer tried to renegotiate SSL connection. This is unsupported.");
        return 6;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      case 8:
      }
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x246,2,"SSL_write failed with error %s.");
      uVar4 = 7;
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  func_0x00776200();
  if (*param_3 >> 0x1f == 0) {
    FUN_006de5b0();
    uVar4 = param_1;
    func_0x006c0ac0(param_1,param_2,(int)*param_3);
    if ((int)uVar4 < 1) {
      func_0x006c0ee8();
      switch(param_1 & 0xffffffff) {
      case 1:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,0x22b,2,"Corruption detected.");
        FUN_00405850();
        return 8;
      case 2:
      case 6:
        *param_3 = 0;
        return 0;
      case 3:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                     ,0x227,2,"Peer tried to renegotiate SSL connection. This is unsupported.");
        return 6;
      case 4:
        break;
      case 5:
        break;
      case 7:
        break;
      case 8:
      }
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                   ,0x22f,2,"SSL_read failed with error %s.");
      return 10;
    }
    *param_3 = uVar4 & 0xffffffff;
    return 0;
  }
  func_0x00776234();
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x006c0364();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00338cb8();
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return param_1;
}



/* Entry: 00407474; end: 0040751b;  */

void FUN_00407474(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x006c0364();
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_00338cb8();
    }
    plVar4 = *(long **)(param_1 + 0x28);
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    plVar4 = *(long **)(param_1 + 0x30);
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(param_1);
    return;
  }
  return;
}



/* Entry: 0040751c; end: 004075d7;  */

byte * FUN_0040751c(undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4,byte *param_5,
                   ulong param_6)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar3 = param_3;
  if (param_4 == 0) {
    return (byte *)((long)&MACH_HEADER.magic + 3);
  }
  do {
    pbVar4 = pbVar3 + 1;
    bVar1 = *pbVar3;
    pbVar3 = param_5;
    if (param_6 != 0) {
      do {
        pbVar5 = pbVar3 + 1;
        bVar2 = *pbVar3;
        if ((bVar1 == bVar2) &&
           (pbVar3 = pbVar4, _memcmp(pbVar4,pbVar5,(ulong)bVar1), (int)pbVar3 == 0)) {
          *param_1 = pbVar5;
          *param_2 = bVar1;
          return pbVar3;
        }
        pbVar3 = pbVar5 + bVar2;
      } while (param_5 <= pbVar3 && (ulong)((long)pbVar3 - (long)param_5) < param_6);
    }
    pbVar3 = pbVar4 + bVar1;
    if (param_4 <= (uint)((int)(pbVar4 + bVar1) - (int)param_3)) {
      return (byte *)((long)&MACH_HEADER.magic + 3);
    }
  } while( true );
}



/* Entry: 004075d8; end: 0040767f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

ulong * FUN_004075d8(ulong *param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined7 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong *unaff_x23;
  ulong *unaff_x24;
  ulong *apuStack_218 [2];
  char cStack_201;
  undefined1 auStack_200 [56];
  undefined8 uStack_1c8;
  undefined7 uStack_1c0;
  undefined1 uStack_1b9;
  undefined7 uStack_1b8;
  undefined1 uStack_1b1;
  ulong auStack_178 [2];
  undefined7 *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  code *pcStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_d0;
  ulong auStack_c8 [8];
  long lStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar12 = param_2[1];
  if (uVar12 < 0x7ffffffffffffff8) {
    uVar13 = *param_2;
    if (uVar12 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar12;
      puVar5 = param_1;
      if (uVar12 == 0) goto LAB_0040765c;
    }
    else {
      uVar1 = (uVar12 & 0xfffffffffffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar1 = uVar12 | 7;
      }
      puVar5 = (ulong *)(uVar1 + 1);
      __Znwm();
      param_1[1] = uVar12;
      param_1[2] = uVar1 + 1 | 0x8000000000000000;
      *param_1 = (ulong)puVar5;
    }
    _memmove(puVar5,uVar13,uVar12);
LAB_0040765c:
    *(undefined1 *)((long)puVar5 + uVar12) = 0;
    return param_1;
  }
  func_0x0033b318();
  pcStack_48 = FUN_00407680;
  lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = (ulong *)((long)&MACH_HEADER.magic + 2);
  puVar6 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)puVar5 != 0) {
    puStack_d0 = &stack0xffffffffffffffc0;
    puVar5 = auStack_c8;
    _vsnprintf(puVar5,0x40,param_4,&stack0xffffffffffffffc0);
    if ((int)(uint)puVar5 < 0) {
      unaff_x23 = (ulong *)0x0;
      param_4 = (ulong *)0x0;
    }
    else {
      unaff_x24 = puVar5;
      if ((uint)puVar5 < 0x40) {
        param_4 = (ulong *)0x0;
        unaff_x23 = auStack_c8;
      }
      else {
        param_4 = (ulong *)(((ulong)puVar5 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_d0 = &stack0xffffffffffffffc0;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    puVar6 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    puVar5 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_88) {
    return puVar5;
  }
  ___stack_chk_fail();
  uStack_e8 = 2;
  pcStack_d8 = FUN_00339178;
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar13 = 1;
  puStack_110 = unaff_x24;
  puStack_108 = unaff_x23;
  puStack_100 = param_4;
  puStack_f8 = param_1;
  puStack_f0 = param_2;
  ppuStack_e0 = &puStack_50;
  FUN_0033a598();
  uVar12 = *puVar5;
  uVar1 = uVar12;
  uStack_1c8 = uVar13;
  _strrchr(uVar12,0x2f);
  if (uVar1 != 0) {
    uVar12 = uVar1 + 1;
  }
  puVar2 = &uStack_1c8;
  _localtime_r(puVar2,auStack_200);
  if (puVar2 == (undefined8 *)0x0) {
    uStack_1b8 = 0x656d69746c6163;
    uStack_1b1 = 0;
    uStack_1c0 = 0x6c3a726f727265;
    uStack_1b9 = 0x6f;
  }
  else {
    puVar3 = &uStack_1c0;
    _strftime(puVar3,0x40,"%m%d %H:%M:%S",auStack_200);
    if (puVar3 == (undefined7 *)0x0) {
      uStack_1c0 = 0x733a726f727265;
      uStack_1b9 = 0x74;
      uStack_1b8 = 0x656d69746672;
    }
  }
  uVar4 = (ulong)*(uint *)((long)puVar5 + 0xc);
  func_0x00338e1c();
  uVar1 = uVar4;
  _pthread_self();
  auStack_178[1] = 0x560e98;
  puStack_168 = &uStack_1c0;
  uStack_160 = 0x560e98;
  uStack_158 = (ulong)puVar6 & 0xffffffff;
  uStack_150 = 0x5606ac;
  pcStack_140 = FUN_00560738;
  uStack_130 = 0x560e98;
  uStack_128 = (ulong)(uint)puVar5[1];
  uStack_120 = 0x5606ac;
  puVar9 = auStack_178;
  auStack_178[0] = uVar4;
  uStack_148 = uVar1;
  uStack_138 = uVar12;
  FUN_0056189c(apuStack_218,"%s%s.%09d %7ld %s:%d]",0x15,puVar9,6);
  uVar8 = *(uint *)((long)puVar5 + 0xc);
  func_0x00338e6c();
  if (uVar8 == 0) {
    auStack_178[0] = auStack_178[0] & 0xffffffffffffff00;
    uStack_160 = uStack_160 & 0xffffffffffffff00;
LAB_00339300:
    puVar5 = *(ulong **)PTR____stderrp_00999f90;
    pcVar7 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_178);
    if ((char)uStack_160 == '\0') goto LAB_00339300;
    puVar5 = *(ulong **)PTR____stderrp_00999f90;
    pcVar7 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_201 < '\0') {
    puVar5 = apuStack_218[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return puVar5;
  }
  ___stack_chk_fail();
  if (cStack_201 < '\0') {
    __ZdlPv(apuStack_218[0]);
  }
  __Unwind_Resume();
  uVar8 = (uint)puVar9;
  if ((char *)0x3 < pcVar7) {
    uVar12 = (ulong)pcVar7 >> 2;
    puVar11 = puVar5;
    do {
      uVar8 = ((int)*puVar11 * 0x16a88000 | (uint)((int)*puVar11 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar9;
      uVar8 = (uVar8 >> 0x13 | uVar8 << 0xd) * 5 + 0xe6546b64;
      puVar9 = (ulong *)(ulong)uVar8;
      uVar12 = uVar12 - 1;
      puVar11 = (ulong *)((long)puVar11 + 4);
    } while (uVar12 != 0);
    puVar5 = (ulong *)((long)puVar5 + ((ulong)pcVar7 & 0xfffffffffffffffc));
  }
  uVar10 = 0;
  uVar12 = (ulong)pcVar7 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar10 = (uint)*(byte *)((long)puVar5 + 2) << 0x10;
    }
    uVar10 = uVar10 | (uint)*(byte *)((long)puVar5 + 1) << 8;
  }
  uVar10 = uVar10 ^ (byte)*puVar5;
  uVar8 = (uVar10 * 0x16a88000 | uVar10 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar8;
LAB_00339464:
  uVar8 = uVar8 ^ (uint)pcVar7;
  uVar8 = (uVar8 ^ uVar8 >> 0x10) * -0x7a143595;
  uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
  return (ulong *)(ulong)(uVar8 ^ uVar8 >> 0x10);
}



/* Entry: 00407680; end: 004077f3;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00407680(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 004077f4; end: 00407833;  */

void FUN_004077f4(long *param_1)

{
  code *pcVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    pcVar1 = *(code **)(*param_1 + 0x38);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
    }
    *(undefined1 *)((long)param_1 + 10) = 1;
  }
  return;
}



/* Entry: 00407834; end: 0040793b;  */

void FUN_00407834(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))();
    return;
  }
  return;
}



/* Entry: 0040793c; end: 00407977;  */

void FUN_0040793c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00338cb8();
  }
  if (param_1[1] != 0) {
    FUN_00338cb8();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 00407978; end: 004079d7;  */

void FUN_00407978(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      lVar1 = lVar2;
      for (lVar3 = param_1[1]; lVar3 != 0; lVar3 = lVar3 + -1) {
        FUN_0040793c(lVar1);
        lVar1 = lVar1 + 0x18;
      }
      FUN_00338cb8(lVar2);
      *param_1 = 0;
    }
    param_1[1] = 0;
  }
  return;
}



/* Entry: 004079d8; end: 00407a1f;  */

undefined8 FUN_004079d8(long param_1,long param_2,long *param_3)

{
  long lVar1;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_1 != 0) {
    FUN_00339490();
    *param_3 = param_1;
  }
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00338c94();
    param_3[1] = lVar1;
    param_3[2] = param_2;
  }
  return 0;
}



/* Entry: 00407a20; end: 00407acf;  */

undefined8 FUN_00407a20(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  _strlen();
  FUN_004079d8(param_1,lVar1,param_3);
  if (lVar1 != 0) {
    _memcpy(*(undefined8 *)(param_3 + 8),param_2,lVar1);
  }
  return 0;
}



/* Entry: 00407ad0; end: 00407b0b;  */

undefined8 FUN_00407ad0(long param_1,long *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1 != 0) {
    lVar1 = param_1 * 0x18;
    func_0x00338c94();
    *param_2 = lVar1;
    param_2[1] = param_1;
  }
  return 0;
}


