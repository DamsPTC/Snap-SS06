/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078d76b0; end: 1078d76b7;  */

void FUN_1078d76b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d7894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078d7a34; end: 1078d7a6f;  */

float FUN_1078d7a34(float param_1)

{
  float fVar1;
  
  func_0x0001078d7c84();
  fVar1 = param_1;
  func_0x0001078d8480();
  return param_1 + fVar1;
}



/* Entry: 1078d7d84; end: 1078d7d97;  */

void FUN_1078d7d84(void)

{
  func_0x0001078d7d74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d7fcc; end: 1078d7fd3;  */

void FUN_1078d7fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d8490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078d843c; end: 1078d84d3;  */

void FUN_1078d843c(void)

{
  return;
}



/* Entry: 1078d8d30; end: 1078d8d9f;  */

bool FUN_1078d8d30(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    cVar1 = *param_1;
    iVar4 = (int)cVar1;
    cVar2 = *param_2;
    iVar3 = (int)cVar2;
    func_0x0001078d8d18();
    func_0x0001078d8d18();
    if ((cVar1 == '\0') || (cVar2 == '\0' || iVar4 != iVar3)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return iVar4 == iVar3;
}



/* Entry: 1078d9858; end: 1078da98b;  */

/* WARNING: Possible PIC construction at 0x0001078d99a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078d9da0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d99ac) */
/* WARNING: Removing unreachable block (ram,0x0001078d99b0) */
/* WARNING: Removing unreachable block (ram,0x0001078d9da4) */
/* WARNING: Removing unreachable block (ram,0x0001078da77c) */
/* WARNING: Removing unreachable block (ram,0x0001078d9db0) */
/* WARNING: Removing unreachable block (ram,0x0001078da794) */
/* WARNING: Removing unreachable block (ram,0x0001078d9df4) */
/* WARNING: Removing unreachable block (ram,0x0001078d9e24) */
/* WARNING: Removing unreachable block (ram,0x0001078d9e30) */
/* WARNING: Removing unreachable block (ram,0x0001078d9e44) */
/* WARNING: Removing unreachable block (ram,0x0001078d9edc) */
/* WARNING: Removing unreachable block (ram,0x0001078d9ef4) */
/* WARNING: Removing unreachable block (ram,0x0001078da048) */
/* WARNING: Removing unreachable block (ram,0x0001078da05c) */
/* WARNING: Removing unreachable block (ram,0x0001078da0c4) */
/* WARNING: Removing unreachable block (ram,0x0001078da0f0) */
/* WARNING: Removing unreachable block (ram,0x0001078da7b4) */
/* WARNING: Removing unreachable block (ram,0x0001078da100) */
/* WARNING: Removing unreachable block (ram,0x0001078da110) */
/* WARNING: Removing unreachable block (ram,0x0001078da200) */
/* WARNING: Removing unreachable block (ram,0x0001078da2f8) */
/* WARNING: Removing unreachable block (ram,0x0001078da308) */
/* WARNING: Removing unreachable block (ram,0x0001078da310) */
/* WARNING: Removing unreachable block (ram,0x0001078da338) */
/* WARNING: Removing unreachable block (ram,0x0001078da3b8) */
/* WARNING: Removing unreachable block (ram,0x0001078da3bc) */
/* WARNING: Removing unreachable block (ram,0x0001078da444) */
/* WARNING: Removing unreachable block (ram,0x0001078da448) */
/* WARNING: Removing unreachable block (ram,0x0001078da4d8) */
/* WARNING: Removing unreachable block (ram,0x0001078da4e4) */
/* WARNING: Removing unreachable block (ram,0x0001078da538) */
/* WARNING: Removing unreachable block (ram,0x0001078da55c) */
/* WARNING: Removing unreachable block (ram,0x0001078da568) */
/* WARNING: Removing unreachable block (ram,0x0001078da588) */
/* WARNING: Removing unreachable block (ram,0x0001078da58c) */
/* WARNING: Removing unreachable block (ram,0x0001078da4ec) */
/* WARNING: Removing unreachable block (ram,0x0001078da500) */
/* WARNING: Removing unreachable block (ram,0x0001078da504) */
/* WARNING: Removing unreachable block (ram,0x0001078da508) */
/* WARNING: Removing unreachable block (ram,0x0001078da530) */
/* WARNING: Removing unreachable block (ram,0x0001078da50c) */
/* WARNING: Removing unreachable block (ram,0x0001078da520) */
/* WARNING: Removing unreachable block (ram,0x0001078da528) */
/* WARNING: Removing unreachable block (ram,0x0001078da454) */
/* WARNING: Removing unreachable block (ram,0x0001078da45c) */
/* WARNING: Removing unreachable block (ram,0x0001078da4d0) */
/* WARNING: Removing unreachable block (ram,0x0001078da468) */
/* WARNING: Removing unreachable block (ram,0x0001078da494) */
/* WARNING: Removing unreachable block (ram,0x0001078da4a8) */
/* WARNING: Removing unreachable block (ram,0x0001078da4c0) */
/* WARNING: Removing unreachable block (ram,0x0001078da4c4) */
/* WARNING: Removing unreachable block (ram,0x0001078da3c4) */
/* WARNING: Removing unreachable block (ram,0x0001078da3c8) */
/* WARNING: Removing unreachable block (ram,0x0001078da424) */
/* WARNING: Removing unreachable block (ram,0x0001078da3d0) */
/* WARNING: Removing unreachable block (ram,0x0001078da408) */
/* WARNING: Removing unreachable block (ram,0x0001078da410) */
/* WARNING: Removing unreachable block (ram,0x0001078da414) */
/* WARNING: Removing unreachable block (ram,0x0001078da3e0) */
/* WARNING: Removing unreachable block (ram,0x0001078da3e8) */
/* WARNING: Removing unreachable block (ram,0x0001078da3f4) */
/* WARNING: Removing unreachable block (ram,0x0001078da418) */
/* WARNING: Removing unreachable block (ram,0x0001078da340) */
/* WARNING: Removing unreachable block (ram,0x0001078da344) */
/* WARNING: Removing unreachable block (ram,0x0001078da398) */
/* WARNING: Removing unreachable block (ram,0x0001078da34c) */
/* WARNING: Removing unreachable block (ram,0x0001078da37c) */
/* WARNING: Removing unreachable block (ram,0x0001078da384) */
/* WARNING: Removing unreachable block (ram,0x0001078da388) */
/* WARNING: Removing unreachable block (ram,0x0001078da358) */
/* WARNING: Removing unreachable block (ram,0x0001078da360) */
/* WARNING: Removing unreachable block (ram,0x0001078da36c) */
/* WARNING: Removing unreachable block (ram,0x0001078da38c) */
/* WARNING: Removing unreachable block (ram,0x0001078da208) */
/* WARNING: Removing unreachable block (ram,0x0001078da240) */
/* WARNING: Removing unreachable block (ram,0x0001078da598) */
/* WARNING: Removing unreachable block (ram,0x0001078da24c) */
/* WARNING: Removing unreachable block (ram,0x0001078da250) */
/* WARNING: Removing unreachable block (ram,0x0001078da5a0) */
/* WARNING: Removing unreachable block (ram,0x0001078da5c0) */
/* WARNING: Removing unreachable block (ram,0x0001078da5cc) */
/* WARNING: Removing unreachable block (ram,0x0001078da5e0) */
/* WARNING: Removing unreachable block (ram,0x0001078da614) */
/* WARNING: Removing unreachable block (ram,0x0001078da60c) */
/* WARNING: Removing unreachable block (ram,0x0001078da61c) */
/* WARNING: Removing unreachable block (ram,0x0001078da634) */
/* WARNING: Removing unreachable block (ram,0x0001078da63c) */
/* WARNING: Removing unreachable block (ram,0x0001078da7cc) */
/* WARNING: Removing unreachable block (ram,0x0001078da984) */
/* WARNING: Removing unreachable block (ram,0x0001078da7d8) */
/* WARNING: Removing unreachable block (ram,0x0001078da66c) */
/* WARNING: Removing unreachable block (ram,0x0001078da5e8) */
/* WARNING: Removing unreachable block (ram,0x0001078da118) */
/* WARNING: Removing unreachable block (ram,0x0001078da124) */
/* WARNING: Removing unreachable block (ram,0x0001078da130) */
/* WARNING: Removing unreachable block (ram,0x0001078da1f4) */
/* WARNING: Removing unreachable block (ram,0x0001078da138) */
/* WARNING: Removing unreachable block (ram,0x0001078da144) */
/* WARNING: Removing unreachable block (ram,0x0001078da1e8) */
/* WARNING: Removing unreachable block (ram,0x0001078da14c) */
/* WARNING: Removing unreachable block (ram,0x0001078da154) */
/* WARNING: Removing unreachable block (ram,0x0001078da17c) */
/* WARNING: Removing unreachable block (ram,0x0001078da18c) */
/* WARNING: Removing unreachable block (ram,0x0001078da1cc) */
/* WARNING: Removing unreachable block (ram,0x0001078da1c4) */
/* WARNING: Removing unreachable block (ram,0x0001078da1d4) */
/* WARNING: Removing unreachable block (ram,0x0001078da1dc) */
/* WARNING: Removing unreachable block (ram,0x0001078da074) */
/* WARNING: Removing unreachable block (ram,0x0001078da078) */
/* WARNING: Removing unreachable block (ram,0x0001078da080) */
/* WARNING: Removing unreachable block (ram,0x0001078da0bc) */
/* WARNING: Removing unreachable block (ram,0x0001078da08c) */
/* WARNING: Removing unreachable block (ram,0x0001078da090) */
/* WARNING: Removing unreachable block (ram,0x0001078da094) */
/* WARNING: Removing unreachable block (ram,0x0001078da098) */
/* WARNING: Removing unreachable block (ram,0x0001078da0b4) */
/* WARNING: Removing unreachable block (ram,0x0001078d9f00) */
/* WARNING: Removing unreachable block (ram,0x0001078d9f14) */
/* WARNING: Removing unreachable block (ram,0x0001078d9f4c) */
/* WARNING: Removing unreachable block (ram,0x0001078d9ffc) */
/* WARNING: Removing unreachable block (ram,0x0001078da004) */
/* WARNING: Removing unreachable block (ram,0x0001078da014) */
/* WARNING: Removing unreachable block (ram,0x0001078d9f54) */
/* WARNING: Removing unreachable block (ram,0x0001078d9f78) */
/* WARNING: Removing unreachable block (ram,0x0001078d9f84) */
/* WARNING: Removing unreachable block (ram,0x0001078d9fa4) */
/* WARNING: Removing unreachable block (ram,0x0001078d9ff4) */
/* WARNING: Removing unreachable block (ram,0x0001078d9fb4) */
/* WARNING: Removing unreachable block (ram,0x0001078d9e4c) */
/* WARNING: Removing unreachable block (ram,0x0001078d9e54) */
/* WARNING: Removing unreachable block (ram,0x0001078d9ec4) */
/* WARNING: Removing unreachable block (ram,0x0001078d9e64) */
/* WARNING: Removing unreachable block (ram,0x0001078d9e98) */
/* WARNING: Removing unreachable block (ram,0x0001078d9ebc) */

int FUN_1078d9858(uint *param_1,ulong *param_2,uint param_3,ulong param_4,uint param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  ulong *puVar5;
  byte *pbVar6;
  int *piVar7;
  int **ppiVar8;
  ulong uVar9;
  long *plVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  byte abStack_210 [24];
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  int aiStack_198 [8];
  int *piStack_178;
  long alStack_170 [32];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (((0 < (int)param_4) && ((int)param_4 <= (int)param_5)) &&
     (puVar5 = param_2, (int)param_5 < 0x29 && 0xfffffff6 < param_6 - 8U)) {
    do {
      func_0x0001078dbea4();
      uVar21 = 0;
      uVar14 = (uint)param_4;
      for (plVar10 = (long *)*param_2; plVar10 != (long *)param_2[1]; plVar10 = plVar10 + 5) {
        uVar22 = *(uint *)(*plVar10 + (long)((int)(uVar14 + 7) / 0x11) * 4 + 4);
        bVar4 = true;
        if (1L << ((ulong)uVar22 & 0x3f) <= (long)(int)plVar10[1]) goto LAB_1078d9960;
        iVar15 = uVar22 + 4;
        if ((int)(uVar21 ^ 0x7fffffff) < iVar15) {
LAB_1078d993c:
          bVar4 = true;
          goto LAB_1078d9960;
        }
        uVar21 = iVar15 + uVar21;
        if ((ulong)(uVar21 ^ 0x7fffffff) < (ulong)plVar10[3]) goto LAB_1078d993c;
        uVar21 = uVar21 + (int)plVar10[3];
      }
      bVar4 = uVar21 == 0xffffffff;
      if (!bVar4 && (int)uVar21 <= (int)puVar5 * 8) {
        lVar13 = 0;
        piStack_178 = (int *)0x200000001;
        alStack_170[0] = CONCAT44(alStack_170[0]._4_4_,3);
        goto LAB_1078d9990;
      }
LAB_1078d9960:
      if (uVar14 == param_5) goto LAB_1078da68c;
      param_4 = (ulong)(uVar14 + 1);
    } while( true );
  }
  func_0x0001078dbd18();
  func_0x0001074668c4();
  func_0x0001078dbd9c();
  func_0x0001078dbd44();
  goto LAB_1078da75c;
LAB_1078d9990:
  if (lVar13 == 0xc) goto LAB_1078d99bc;
  if (param_7 != 0) {
    uVar21 = *(uint *)((long)&piStack_178 + lVar13);
    goto code_r0x0001078da98c;
  }
  lVar13 = lVar13 + 4;
  goto LAB_1078d9990;
LAB_1078da68c:
  func_0x0001054901a8(&piStack_178);
  if (bVar4) {
    ppiVar8 = &piStack_178;
  }
  else {
    func_0x00010549023c(&piStack_178,&UNK_10f4344ec);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    func_0x00010549023c();
    ppiVar8 = &piStack_178;
    func_0x00010549023c(ppiVar8,&UNK_10f434503);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  }
  func_0x00010549023c();
  func_0x0001078dbd18();
  func_0x000105491b64(aiStack_198,alStack_170);
  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (ppiVar8,aiStack_198);
  *ppiVar8 = (int *)&PTR_DAT_1109e9da0;
  func_0x0001078dbd44();
  goto LAB_1078da7c8;
LAB_1078d99bc:
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  plVar2 = (long *)param_2[1];
  for (plVar10 = (long *)*param_2; plVar10 != plVar2; plVar10 = plVar10 + 5) {
    func_0x0001078d937c(&uStack_1f8,*(undefined4 *)*plVar10,4);
    func_0x0001078d937c(&uStack_1f8,(int)plVar10[1],
                        *(undefined4 *)(*plVar10 + (ulong)((uVar14 + 7) / 0x11) * 4 + 4));
    puVar5 = &uStack_1f8;
    func_0x0001078da9e8(&piStack_178,puVar5,uStack_1f8 + (uStack_1f0 >> 6) * 8,uStack_1f0 & 0x3f,
                        plVar10[2],0,plVar10[2] + ((ulong)plVar10[3] >> 6) * 8,plVar10[3] & 0x3f);
  }
  func_0x0001078dbea4();
  uVar18 = ((ulong)puVar5 & 0xffffffff) << 3;
  iVar15 = (int)uVar18 - (int)uStack_1f0;
  if (3 < iVar15) {
    iVar15 = 4;
  }
  func_0x0001078d937c(&uStack_1f8,0,iVar15);
  func_0x0001078d937c(&uStack_1f8,0,-(int)uStack_1f0 & 7);
  uVar21 = 0xec;
  while (uStack_1f0 < (-((ulong)puVar5 >> 0x1f & 1) & 0xfffffff800000000 | uVar18)) {
    func_0x0001078d937c(&uStack_1f8,uVar21,8);
    uVar21 = uVar21 ^ 0xfd;
  }
  func_0x000100291d50(abStack_210,uStack_1f0 >> 3);
  for (uVar18 = 0; uVar18 < uStack_1f0; uVar18 = uVar18 + 1) {
    puVar5 = &uStack_1f8;
    uVar9 = uVar18;
    func_0x0001078daba0();
    uVar20 = *puVar5;
    pbVar6 = abStack_210;
    func_0x000100898698(pbVar6,uVar18 >> 3);
    *pbVar6 = *pbVar6 | ((uVar20 & uVar9) != 0) << (ulong)(((uint)uVar18 ^ 0xffffffff) & 7);
  }
  *param_1 = uVar14;
  param_1[2] = param_3;
  puVar11 = param_1 + 4;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar11[0] = 0;
  puVar11[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (0xffffffd7 < uVar14 - 0x29) {
    param_1[1] = uVar14 * 4 + 0x11;
    func_0x0001078dbec4();
    func_0x0001078dbe18();
    func_0x0001078dbab8(puVar11,&piStack_178);
    func_0x00010729f5fc(&piStack_178);
    func_0x0001078dbed0();
    func_0x0001078dbec4();
    func_0x0001078dbe18();
    func_0x0001078dbab8(param_1 + 10,&piStack_178);
    func_0x00010729f5fc(&piStack_178);
    func_0x0001078dbed0();
    for (iVar15 = 0; iVar15 < (int)param_1[1]; iVar15 = iVar15 + 1) {
      func_0x0001078dbe90(param_1,6);
      func_0x0001078dbf54();
      func_0x0001078daf9c();
    }
    func_0x0001078db010(param_1,3,3);
    func_0x0001078db010(param_1,param_1[1] - 4,3);
    func_0x0001078db010(param_1,3,param_1[1] - 4);
    uVar21 = *param_1;
    if (uVar21 == 1) {
      lVar13 = 0;
      piStack_178 = (int *)0x0;
      alStack_170[0] = 0;
      alStack_170[1] = 0;
    }
    else {
      iVar15 = (int)uVar21 / 7;
      if (uVar21 == 0x20) {
        iVar12 = 0x1a;
      }
      else {
        iVar16 = iVar15 * 2 + 2;
        iVar12 = 0;
        if (iVar16 != 0) {
          iVar12 = (int)(uVar21 * 4 + iVar15 * 2 + 5) / iVar16;
        }
        iVar12 = iVar12 << 1;
      }
      piStack_178 = (int *)0x0;
      alStack_170[0] = 0;
      alStack_170[1] = 0;
      aiStack_198[0] = param_1[1] - 7;
      for (iVar16 = 0; iVar16 <= iVar15; iVar16 = iVar16 + 1) {
        func_0x0001078386d8(&piStack_178,piStack_178,aiStack_198);
        aiStack_198[0] = aiStack_198[0] - iVar12;
      }
      aiStack_198[0] = 6;
      func_0x0001078db2bc(&piStack_178,piStack_178,aiStack_198);
      lVar13 = alStack_170[0] - (long)piStack_178 >> 2;
    }
    for (lVar17 = 0; lVar17 != lVar13; lVar17 = lVar17 + 1) {
      for (lVar19 = 0; lVar19 != lVar13; lVar19 = lVar19 + 1) {
        if (lVar19 != 0 || lVar17 != 0) {
          if ((lVar19 != lVar13 + -1 || lVar17 != 0) && (lVar17 != lVar13 + -1 || lVar19 != 0)) {
            piVar7 = piStack_178;
            func_0x0001078db0b4(piStack_178,alStack_170[0],lVar17);
            iVar15 = *piVar7;
            piVar7 = piStack_178;
            func_0x0001078db0b4(piStack_178,alStack_170[0],lVar19);
            iVar16 = *piVar7;
            for (uVar21 = 0xfffffffe; uVar21 != 3; uVar21 = uVar21 + 1) {
              uVar14 = -uVar21;
              if (-1 < (int)uVar21) {
                uVar14 = uVar21;
              }
              for (uVar22 = 0xfffffffe; uVar22 != 3; uVar22 = uVar22 + 1) {
                uVar1 = -uVar22;
                if (-1 < (int)uVar22) {
                  uVar1 = uVar22;
                }
                if (uVar1 <= uVar14) {
                  uVar1 = uVar14;
                }
                func_0x0001078daf9c(param_1,iVar15 + uVar22,uVar21 + iVar16,uVar1 != 1);
              }
            }
          }
        }
      }
    }
    func_0x0001078dada8(param_1,0);
    if (6 < (int)*param_1) {
      iVar15 = 0xc;
      do {
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      for (lVar13 = 0; lVar13 != 0x12; lVar13 = lVar13 + 1) {
        func_0x0001078dbe40();
        func_0x0001078dbe90();
        func_0x0001078dbf54();
        func_0x0001078daf9c();
      }
    }
    func_0x0001002920a0(&piStack_178);
    param_4 = (ulong)*param_1;
    uVar21 = param_1[2];
code_r0x0001078da98c:
    uVar18 = param_4;
    func_0x0001078db144();
    return (int)(short)((short)uVar18 / 8) -
           (int)(char)(&UNK_10deda7b8)[(long)(int)param_4 + (long)(int)uVar21 * 0x29] *
           (int)(char)(&UNK_10deda85c)[(long)(int)param_4 + (long)(int)uVar21 * 0x29];
  }
LAB_1078da75c:
  func_0x0001078dbd18();
  func_0x00010724664c();
  func_0x0001078dbcf8();
  func_0x0001078dbe64();
LAB_1078da7c8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1078da7cc);
  (*pcVar3)();
}



/* Entry: 1078daf64; end: 1078daf9b;  */

bool FUN_1078daf64(long param_1,int param_2,int param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x0001078db0f8(puVar1,(long)param_3);
  uVar2 = (ulong)param_2;
  func_0x0001078db128();
  return (uVar2 & *puVar1) != 0;
}



/* Entry: 1078db398; end: 1078db3d3;  */

uint FUN_1078db398(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 7;
  do {
    uVar1 = param_1;
    if ((param_2 >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      uVar1 = 0;
    }
    uVar3 = ((int)uVar3 >> 7) * 0x11d ^ uVar3 << 1 ^ uVar1;
    uVar2 = uVar2 - 1;
  } while (-1 < (int)uVar2);
  return uVar3 & 0xff;
}



/* Entry: 1078db6c0; end: 1078db977;  */

void FUN_1078db6c0(long *param_1,long param_2,ulong param_3,ulong *param_4,uint param_5,
                  ulong *param_6,uint param_7)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = (ulong)param_5;
  uVar8 = (uVar3 - (param_3 & 0xffffffff)) + ((long)param_4 - param_2) * 8;
  if (param_7 == param_5) {
    if (0 < (long)uVar8) {
      if (uVar3 != 0) {
        uVar4 = uVar8;
        if (uVar3 <= uVar8) {
          uVar4 = uVar3;
        }
        uVar8 = uVar8 - uVar4;
        uVar3 = -1L << ((ulong)(param_5 - (int)uVar4) & 0x3f) &
                0xffffffffffffffffU >> ((ulong)-param_5 & 0x3f);
        *param_6 = *param_6 & (uVar3 ^ 0xffffffffffffffff) | *param_4 & uVar3;
        param_7 = param_7 - (int)uVar4 & 0x3f;
      }
      lVar1 = (long)uVar8 / 0x40;
      param_6 = param_6 + -lVar1;
      if (0x7e < uVar8 + 0x3f) {
        _memmove(param_6,param_4 + -lVar1,lVar1 << 3);
      }
      if (0 < (long)uVar8 % 0x40) {
        uVar3 = -1L << ((ulong)(uint)-(int)((long)uVar8 % 0x40) & 0x3f);
        param_6 = param_6 + -1;
        *param_6 = *param_6 & (uVar3 ^ 0xffffffffffffffff) | (param_4 + -lVar1)[-1] & uVar3;
        param_7 = -(int)uVar8 & 0x3f;
      }
    }
    goto LAB_1078db95c;
  }
  if ((long)uVar8 < 1) goto LAB_1078db95c;
  if (param_5 != 0) {
    uVar4 = uVar8;
    if (uVar3 <= uVar8) {
      uVar4 = uVar3;
    }
    uVar8 = uVar8 - uVar4;
    uVar5 = -1L << ((ulong)(param_5 - (int)uVar4) & 0x3f) &
            0xffffffffffffffffU >> ((ulong)-param_5 & 0x3f) & *param_4;
    uVar3 = uVar4;
    if (param_7 <= uVar4) {
      uVar3 = (ulong)param_7;
    }
    if (uVar3 != 0) {
      uVar2 = param_7 - (int)uVar3;
      uVar6 = uVar5 << ((ulong)(param_7 - param_5) & 0x3f);
      if (param_7 < param_5 || param_7 - param_5 == 0) {
        uVar6 = uVar5 >> ((ulong)(param_5 - param_7) & 0x3f);
      }
      *param_6 = *param_6 &
                 (-1L << ((ulong)uVar2 & 0x3f) & 0xffffffffffffffffU >> ((ulong)-param_7 & 0x3f) ^
                 0xffffffffffffffff) | uVar6;
      uVar4 = uVar4 - uVar3;
      if ((long)uVar4 < 1) {
        param_7 = uVar2 & 0x3f;
        goto LAB_1078db870;
      }
    }
    param_6 = param_6 + -1;
    uVar2 = -(int)uVar4;
    param_7 = uVar2 & 0x3f;
    *param_6 = uVar5 << ((ulong)((((int)uVar4 + (int)uVar3) - param_5) + param_7) & 0x3f) |
               *param_6 & (-1L << ((ulong)uVar2 & 0x3f) ^ 0xffffffffffffffffU);
  }
LAB_1078db870:
  uVar5 = 0xffffffffffffffff >> ((ulong)-param_7 & 0x3f);
  uVar4 = (ulong)param_7;
  uVar3 = uVar8;
  while( true ) {
    param_4 = param_4 + -1;
    if ((long)uVar3 < 0x40) break;
    uVar6 = *param_4;
    *param_6 = *param_6 & ~uVar5 | uVar6 >> ((ulong)(0x40 - param_7) & 0x3f);
    param_6 = param_6 + -1;
    *param_6 = *param_6 & uVar5 | uVar6 << (uVar4 & 0x3f);
    uVar3 = uVar3 - 0x40;
  }
  if (0 < (long)uVar3) {
    uVar7 = *param_4 & -1L << (-uVar3 & 0x3f);
    uVar6 = uVar3;
    if (uVar4 <= uVar3) {
      uVar6 = uVar4;
    }
    uVar2 = param_7 - (int)uVar6;
    *param_6 = *param_6 & (-1L << ((ulong)uVar2 & 0x3f) & uVar5 ^ 0xffffffffffffffff) |
               uVar7 >> ((ulong)(0x40 - param_7) & 0x3f);
    if ((long)(uVar3 - uVar6) < 1) {
      param_7 = uVar2 & 0x3f;
    }
    else {
      param_6 = param_6 + -1;
      uVar5 = uVar3;
      if (uVar4 <= uVar3) {
        uVar5 = uVar4;
      }
      uVar2 = (int)uVar5 - (int)uVar3;
      param_7 = uVar2 & 0x3f;
      *param_6 = *param_6 & (-1L << ((ulong)uVar2 & 0x3f) ^ 0xffffffffffffffffU) |
                 uVar7 << (((ulong)(uint)((int)uVar5 - (int)uVar8) & 0x3f) + uVar3 & 0x3f);
    }
  }
LAB_1078db95c:
  *param_1 = (long)param_6;
  *(uint *)(param_1 + 1) = param_7;
  return;
}



/* Entry: 1078dbc0c; end: 1078dbcf7;  */

void FUN_1078dbc0c(ulong *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  puVar5 = (undefined4 *)param_1[2];
  if (puVar5 == (undefined4 *)param_1[3]) {
    uVar6 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      uVar4 = (long)((long)puVar5 - uVar6) >> 1;
      if ((long)puVar5 - uVar6 == 0) {
        uVar4 = 1;
      }
      func_0x000100161bec(&uStack_70,uVar4,uVar4 >> 2,param_1[4]);
      func_0x000107838968(&uStack_70,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar6 = *param_1;
      uVar8 = param_1[3];
      uVar7 = param_1[2];
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      uStack_70 = uVar6;
      uStack_68 = uVar4;
      uStack_60 = uVar7;
      uStack_58 = uVar8;
      func_0x000100161cc4(&uStack_70);
      puVar5 = (undefined4 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar6) >> 2) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 4;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined4 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 4;
      param_1[2] = (ulong)puVar5;
    }
  }
  *puVar5 = *param_2;
  param_1[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 1078dd788; end: 1078dd8b3;  */

long * FUN_1078dd788(long *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  
  plVar5 = (long *)0xb;
  if (((param_1 != (long *)0x0) && (param_2 != 0)) && (param_3 != (uint *)0x0)) {
    if (*param_1 == 0) {
      puVar1 = (uint *)((long)param_3 + (ulong)param_2);
      while( true ) {
        if (puVar1 < (uint *)((long)param_3 + 6U)) {
          return (long *)0x1;
        }
        puVar8 = param_3 + 1;
        uVar3 = *param_3;
        if (puVar1 < (uint *)((long)puVar8 + (ulong)uVar3)) {
          return (long *)0x1;
        }
        if (uVar3 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          while (*(char *)((long)puVar8 + uVar7) != '\0') {
            uVar7 = uVar7 + 1;
            if (uVar3 == uVar7) {
              return (long *)0x1;
            }
          }
        }
        uVar6 = (uint)uVar7;
        if (uVar6 == uVar3) break;
        if (*(char *)((long)puVar8 + (uVar7 & 0xffffffff)) != '\0') {
          return (long *)0x1;
        }
        if (((2 < uVar6) && ((char)*puVar8 == -0x11)) &&
           ((*(char *)((long)param_3 + 5) == -0x45 && (*(char *)((long)param_3 + 6U) == -0x41)))) {
          return (long *)0x1;
        }
        iVar4 = uVar3 - (uVar6 + 1);
        lVar2 = 0;
        if (iVar4 != 0) {
          lVar2 = (long)puVar8 + (ulong)(uVar6 + 1);
        }
        plVar5 = param_1;
        func_0x0001078dce8c(param_1,puVar8,iVar4,lVar2);
        if (((int)plVar5 != 0) ||
           (param_3 = (uint *)((long)puVar8 +
                              (ulong)(uint)(int)((float)(int)((float)uVar3 / 4.0) * 4.0)),
           puVar1 <= param_3)) {
          return plVar5;
        }
      }
      return (long *)0x1;
    }
    plVar5 = (long *)0xa;
  }
  return plVar5;
}



/* Entry: 1078df83c; end: 1078dfad3;  */

int FUN_1078df83c(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  
  lVar4 = *(long *)(param_1 + 0x18);
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x24));
  uVar2 = (uint)((float)(*(uint *)(param_1 + 0x24) >> (ulong)(param_2 & 0x1f)) / fVar5);
  uVar3 = *(uint *)(lVar4 + 0x30);
  if (*(uint *)(lVar4 + 0x30) <= uVar2) {
    uVar3 = uVar2;
  }
  uVar3 = uVar3 * (*(uint *)(lVar4 + 0x20) >> 3);
  if ((param_3 == 1) && ((*(uint *)(lVar4 + 0x18) >> 1 & 1) == 0)) {
    uVar3 = uVar3 + (int)((float)(int)((float)uVar3 / 4.0) * 4.0 - (float)uVar3);
  }
  uVar1 = (uint)((float)(*(uint *)(param_1 + 0x28) >> (ulong)(param_2 & 0x1f)) /
                (float)*(uint *)(lVar4 + 0x28));
  uVar2 = *(uint *)(lVar4 + 0x34);
  if (*(uint *)(lVar4 + 0x34) <= uVar1) {
    uVar2 = uVar1;
  }
  return uVar3 * uVar2;
}



/* Entry: 1078e0ef4; end: 1078e1263;  */

ulong FUN_1078e0ef4(int *param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uStack_64;
  
  if (*param_1 == 1) {
    if (param_2 == (code *)0x0) {
      return 0xb;
    }
    lVar12 = *(long *)(param_1 + 6);
    if (*(long *)(lVar12 + 0x80) != 0) {
      if (param_1[0xd] == 0) {
        puVar11 = (uint *)0x0;
        uVar13 = 0;
      }
      else {
        uVar15 = 0;
        puVar11 = (uint *)0x0;
        pcVar4 = *(char **)(param_1 + 0x22);
        uVar18 = 0;
        do {
          while( true ) {
            uVar14 = (uint)uVar15;
            uVar1 = (uint)param_1[9] >> (ulong)(uVar14 & 0x1f);
            if (uVar1 < 2) {
              uVar1 = 1;
            }
            uVar2 = (uint)param_1[10] >> (ulong)(uVar14 & 0x1f);
            if (uVar2 < 2) {
              uVar2 = 1;
            }
            uVar3 = (uint)param_1[0xb] >> (ulong)(uVar14 & 0x1f);
            if (uVar3 < 2) {
              uVar3 = 1;
            }
            uVar13 = lVar12 + 0x40;
            (**(code **)(lVar12 + 0x40))(uVar13,&uStack_64,4);
            if ((int)uVar13 != 0) goto LAB_1078e121c;
            if (*pcVar4 == '\x01') {
              uVar19 = (uStack_64 & 0xff00ff00) >> 8 | (uStack_64 & 0xff00ff) << 8;
              uStack_64 = uVar19 >> 0x10 | uVar19 << 0x10;
            }
            uVar19 = uStack_64;
            puVar17 = (uint *)(ulong)uStack_64;
            if (puVar11 == (uint *)0x0) {
              puVar11 = puVar17;
              _malloc();
              if (puVar11 == (uint *)0x0) {
                uVar13 = 0xd;
                goto LAB_1078e121c;
              }
            }
            else {
              uVar19 = uVar18;
              if (uVar18 < uStack_64) {
                uVar13 = 1;
                goto LAB_1078e121c;
              }
            }
            uVar18 = uVar19;
            if ((*(char *)((long)param_1 + 0x21) == '\x01') && ((*(byte *)(param_1 + 8) & 1) == 0))
            break;
            iVar16 = 1;
LAB_1078e1004:
            iVar20 = 0;
            do {
              uVar13 = lVar12 + 0x40;
              (**(code **)(lVar12 + 0x40))(uVar13,puVar11,puVar17);
              if ((int)uVar13 != 0) goto LAB_1078e121c;
              if (*pcVar4 == '\x01') {
                if (*(int *)(lVar12 + 0x38) == 4) {
                  if (3 < uStack_64) {
                    uVar13 = (ulong)(uStack_64 >> 2);
                    if (uStack_64 < 0x20) {
                      uVar7 = 0;
                      puVar5 = puVar11;
                    }
                    else {
                      uVar7 = uVar13 & 0x3ffffff8;
                      puVar5 = puVar11 + uVar7;
                      uVar8 = uVar7;
                      pauVar9 = (undefined1 (*) [16])(puVar11 + 4);
                      do {
                        auVar22 = NEON_rev32(pauVar9[-1],1);
                        auVar23 = NEON_rev32(*pauVar9,1);
                        *(long *)((long)pauVar9[-1] + 8) = auVar22._8_8_;
                        *(long *)pauVar9[-1] = auVar22._0_8_;
                        *(long *)((long)*pauVar9 + 8) = auVar23._8_8_;
                        *(long *)*pauVar9 = auVar23._0_8_;
                        pauVar9 = pauVar9 + 2;
                        uVar8 = uVar8 - 8;
                      } while (uVar8 != 0);
                      if (uVar7 == uVar13) goto LAB_1078e1018;
                    }
                    lVar6 = uVar13 - uVar7;
                    do {
                      uVar19 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
                      *puVar5 = uVar19 >> 0x10 | uVar19 << 0x10;
                      lVar6 = lVar6 + -1;
                      puVar5 = puVar5 + 1;
                    } while (lVar6 != 0);
                  }
                }
                else if ((*(int *)(lVar12 + 0x38) == 2) && (1 < uStack_64)) {
                  uVar13 = (ulong)(uStack_64 >> 1);
                  if (uStack_64 < 8) {
                    uVar7 = 0;
                    puVar5 = puVar11;
                  }
                  else {
                    if (uStack_64 < 0x20) {
                      uVar8 = 0;
                    }
                    else {
                      uVar7 = uVar13 & 0x7ffffff0;
                      uVar8 = uVar7;
                      pauVar9 = (undefined1 (*) [16])(puVar11 + 4);
                      do {
                        auVar22 = NEON_rev16(pauVar9[-1],1);
                        auVar23 = NEON_rev16(*pauVar9,1);
                        *(long *)((long)pauVar9[-1] + 8) = auVar22._8_8_;
                        *(long *)pauVar9[-1] = auVar22._0_8_;
                        *(long *)((long)*pauVar9 + 8) = auVar23._8_8_;
                        *(long *)*pauVar9 = auVar23._0_8_;
                        pauVar9 = pauVar9 + 2;
                        uVar8 = uVar8 - 0x10;
                      } while (uVar8 != 0);
                      if (uVar7 == uVar13) goto LAB_1078e1018;
                      uVar8 = uVar7;
                      if ((uStack_64 >> 1 & 0xc) == 0) {
                        puVar5 = (uint *)((long)puVar11 + uVar7 * 2);
                        goto LAB_1078e119c;
                      }
                    }
                    uVar7 = uVar13 & 0x7ffffffc;
                    puVar5 = (uint *)((long)puVar11 + uVar7 * 2);
                    lVar6 = uVar8 - uVar7;
                    puVar10 = (undefined8 *)((long)puVar11 + uVar8 * 2);
                    do {
                      uVar21 = NEON_rev16(*puVar10,1);
                      *puVar10 = uVar21;
                      lVar6 = lVar6 + 4;
                      puVar10 = puVar10 + 1;
                    } while (lVar6 != 0);
                    if (uVar7 == uVar13) goto LAB_1078e1018;
                  }
LAB_1078e119c:
                  lVar6 = uVar13 - uVar7;
                  do {
                    *(ushort *)puVar5 = (ushort)*puVar5 >> 8 | (ushort)*puVar5 << 8;
                    lVar6 = lVar6 + -1;
                    puVar5 = (uint *)((long)puVar5 + 2);
                  } while (lVar6 != 0);
                }
              }
LAB_1078e1018:
              uVar13 = uVar15;
              (*param_2)(uVar15,iVar20,uVar1,uVar2,uVar3,uStack_64,puVar11,param_3);
              iVar20 = iVar20 + 1;
            } while (iVar20 != iVar16);
            uVar15 = (ulong)(uVar14 + 1);
            if ((uint)param_1[0xd] <= uVar14 + 1) goto LAB_1078e121c;
          }
          iVar16 = param_1[0xf];
          if (iVar16 != 0) goto LAB_1078e1004;
          uVar13 = 0;
          uVar15 = (ulong)(uVar14 + 1);
        } while (uVar14 + 1 < (uint)param_1[0xd]);
      }
LAB_1078e121c:
      _free(puVar11);
      (**(code **)(lVar12 + 0x70))(lVar12 + 0x40);
      return uVar13;
    }
  }
  return 10;
}



/* Entry: 1078e2248; end: 1078e24b3;  */

int FUN_1078e2248(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  lVar2 = *(long *)(param_1 + 0x18);
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x24));
  uVar3 = (uint)((float)(*(uint *)(param_1 + 0x24) >> (ulong)(param_2 & 0x1f)) / fVar5);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (*(uint *)(lVar2 + 0x30) <= uVar3) {
    uVar1 = uVar3;
  }
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x28));
  uVar4 = (uint)((float)(*(uint *)(param_1 + 0x28) >> (ulong)(param_2 & 0x1f)) / fVar5);
  uVar3 = *(uint *)(lVar2 + 0x34);
  if (*(uint *)(lVar2 + 0x34) <= uVar4) {
    uVar3 = uVar4;
  }
  return uVar1 * (*(uint *)(lVar2 + 0x20) >> 3) * uVar3;
}



/* Entry: 1078e36b8; end: 1078e3b9b;  */

byte FUN_1078e36b8(double param_1,double param_2,double param_3,ulong *param_4,ulong param_5)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong unaff_x23;
  byte bVar24;
  uint uVar25;
  ulong *puVar26;
  double dVar27;
  ulong *puStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  
  bVar8 = false;
  if ((ABS(param_1) < 180.0) && (bVar8 = false, !NAN(ABS(param_2)) && !NAN(dRam0000000113726a60))) {
    bVar8 = ABS(param_2) < dRam0000000113726a60;
  }
  if (bVar8) {
    puVar23 = (ulong *)param_4[3];
    dVar27 = (double)(uint)(1 << (ulong)((uint)*puVar23 >> 0x14 & 0x1f));
    uVar21 = (uint)(((param_1 + 180.0) / 360.0) * dVar27);
    param_2 = param_2 * 0.017453292519943295;
    puVar15 = param_4;
    _tan();
    _asinh();
    bVar24 = 0;
    param_2 = param_2 / -3.141592653589793;
    func_0x0001079143ec(param_2,0x3ff0000000000000);
    uVar20 = (uint)(param_2 * dVar27);
    dVar27 = (param_3 / (double)param_4[0xb]) * (param_3 / (double)param_4[0xb]);
    iVar9 = (int)dVar27;
    uVar5 = uVar21 - iVar9;
    iVar4 = *(uint *)((long)param_4 + 0x54) - 1;
    iVar2 = uVar20 + iVar9;
    if (iVar4 <= (int)(uVar20 + iVar9)) {
      iVar2 = iVar4;
    }
    puVar1 = param_4 + 6;
    for (; (int)uVar5 <= (int)(uVar21 + iVar9); uVar5 = uVar5 + 1) {
      for (uVar25 = uVar20 - iVar9 & ((int)(uVar20 - iVar9) >> 0x1f ^ 0xffffffffU);
          (int)uVar25 <= iVar2; uVar25 = uVar25 + 1) {
        if ((double)(int)(uVar5 - uVar21) * (double)(int)(uVar5 - uVar21) +
            (double)(int)(uVar25 - uVar20) * (double)(int)(uVar25 - uVar20) <= dVar27) {
          uVar12 = uVar5;
          if ((int)uVar5 < 0) {
            uVar12 = *(uint *)((long)param_4 + 0x54) + uVar5;
          }
          uVar11 = *puVar23;
          uVar6 = (uint)uVar11 >> 0x10 & 0xf;
          uVar10 = ((uint)uVar11 >> 0x14 & 0x1f) - uVar6;
          uVar13 = uVar12 >> (ulong)(uVar10 & 0x1f);
          uVar3 = uVar25 >> (ulong)(uVar10 & 0x1f);
          uVar10 = (uVar3 << (ulong)uVar6) + uVar13;
          uVar22 = (ulong)uVar10;
          uVar12 = (uVar12 - (uVar13 << (ulong)((byte)param_4[9] & 0x1f))) +
                   (uVar25 - (uVar3 << (ulong)((byte)param_4[9] & 0x1f))) *
                   *(uint *)((long)param_4 + 0x4c);
          if ((uVar5 == uVar21 && puVar23[2] <= param_5) && uVar25 == uVar20) {
            *(uint *)(puVar23 + 1) = uVar10;
            *(uint *)((long)puVar23 + 0xc) = uVar12;
            puVar23[2] = param_5;
          }
          uVar14 = param_4[5];
          if ((uVar14 != 0) && (param_4[7] != 0)) {
            uVar17 = uVar14 - 1;
            uVar13 = (uint)uVar14;
            if ((uVar14 & uVar17) == 0) {
              uVar18 = (ulong)(uVar13 - 1 & uVar10);
            }
            else {
              uVar18 = uVar22;
              if (uVar14 <= uVar22) {
                uVar3 = 0;
                if (uVar13 != 0) {
                  uVar3 = uVar10 / uVar13;
                }
                uVar18 = (ulong)(uVar10 - uVar3 * uVar13);
              }
            }
            puVar26 = *(ulong **)(param_4[4] + uVar18 * 8);
            if (puVar26 != (ulong *)0x0) {
              do {
                while( true ) {
                  puVar26 = (ulong *)*puVar26;
                  if (puVar26 == (ulong *)0x0) goto LAB_1078e3938;
                  uVar19 = puVar26[1];
                  if (uVar19 != uVar22) break;
                  if ((uint)puVar26[2] == uVar10) {
                    uVar10 = (uint)*(byte *)((long)param_4 + 0x17);
                    goto LAB_1078e3b3c;
                  }
                }
                if ((uVar14 & uVar17) == 0) {
                  uVar19 = uVar19 & uVar17;
                }
                else if (uVar14 <= uVar19) {
                  uVar7 = 0;
                  if (uVar14 != 0) {
                    uVar7 = uVar19 / uVar14;
                  }
                  uVar19 = uVar19 - uVar7 * uVar14;
                }
              } while (uVar19 == uVar18);
            }
          }
LAB_1078e3938:
          *puVar23 = uVar11 & 0xff80000000000000 |
                     uVar11 & 0x1ffffff | (uVar11 + 0x2000000 >> 0x19 & 0x3fffffff) << 0x19;
          uVar14 = (ulong)*(byte *)((long)param_4 + 0x17);
          uVar11 = uVar14;
          if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
            uVar11 = param_4[1];
          }
          uVar17 = param_4[5];
          if (uVar17 != 0) {
            uVar18 = uVar17 - 1;
            uVar13 = (uint)uVar17;
            if ((uVar17 & uVar18) == 0) {
              unaff_x23 = (ulong)(uVar13 - 1 & uVar10);
            }
            else {
              unaff_x23 = uVar22;
              if (uVar17 <= uVar22) {
                uVar3 = 0;
                if (uVar13 != 0) {
                  uVar3 = uVar10 / uVar13;
                }
                unaff_x23 = (ulong)(uVar10 - uVar3 * uVar13);
              }
            }
            puVar26 = *(ulong **)(param_4[4] + unaff_x23 * 8);
            if (puVar26 != (ulong *)0x0) {
              do {
                while( true ) {
                  puVar26 = (ulong *)*puVar26;
                  if (puVar26 == (ulong *)0x0) goto LAB_1078e39ec;
                  uVar19 = puVar26[1];
                  if (uVar19 != uVar22) break;
                  if ((uint)puVar26[2] == uVar10) goto LAB_1078e3b0c;
                }
                if ((uVar17 & uVar18) == 0) {
                  uVar19 = uVar19 & uVar18;
                }
                else if (uVar17 <= uVar19) {
                  uVar7 = 0;
                  if (uVar17 != 0) {
                    uVar7 = uVar19 / uVar17;
                  }
                  uVar19 = uVar19 - uVar7 * uVar17;
                }
              } while (uVar19 == unaff_x23);
            }
          }
LAB_1078e39ec:
          func_0x000107917234();
          uStack_78 = 1;
          *puVar15 = 0;
          puVar15[1] = uVar22;
          *(uint *)(puVar15 + 2) = uVar10;
          *(uint *)((long)puVar15 + 0x14) = (uint)uVar11;
          puStack_88 = puVar15;
          puStack_80 = puVar1;
          if ((uVar17 == 0) || (*(float *)(param_4 + 8) * (float)uVar17 < (float)(param_4[7] + 1)))
          {
            func_0x0001079157f0(uVar17 << 1);
            func_0x00010736dc54(param_4 + 4);
            uVar17 = param_4[5];
            if ((uVar17 & uVar17 - 1) == 0) {
              unaff_x23 = (ulong)((int)uVar17 - 1U & uVar10);
            }
            else {
              unaff_x23 = uVar22;
              if (uVar17 <= uVar22) {
                uVar11 = 0;
                if (uVar17 != 0) {
                  uVar11 = uVar22 / uVar17;
                }
                unaff_x23 = uVar22 - uVar11 * uVar17;
              }
            }
          }
          puVar26 = puStack_88;
          uVar11 = param_4[4];
          puVar15 = *(ulong **)(uVar11 + unaff_x23 * 8);
          if (puVar15 == (ulong *)0x0) {
            *puStack_88 = *puVar1;
            *puVar1 = (ulong)puStack_88;
            *(ulong **)(uVar11 + unaff_x23 * 8) = puVar1;
            if (*puStack_88 != 0) {
              uVar22 = *(ulong *)(*puStack_88 + 8);
              if ((uVar17 & uVar17 - 1) == 0) {
                uVar22 = uVar22 & uVar17 - 1;
              }
              else if (uVar17 <= uVar22) {
                uVar14 = 0;
                if (uVar17 != 0) {
                  uVar14 = uVar22 / uVar17;
                }
                uVar22 = uVar22 - uVar14 * uVar17;
              }
              *(ulong **)(uVar11 + uVar22 * 8) = puStack_88;
            }
          }
          else {
            *puStack_88 = *puVar15;
            *puVar15 = (ulong)puStack_88;
          }
          puStack_88 = (ulong *)0x0;
          param_4[7] = param_4[7] + 1;
          func_0x00010736de14(&puStack_88);
          uVar14 = (ulong)*(byte *)((long)param_4 + 0x17);
LAB_1078e3b0c:
          if ((uint)uVar14 >> 7 != 0) {
            uVar14 = param_4[1];
          }
          puVar15 = param_4;
          func_0x0001001548a8(param_4,uVar14 + (ulong)(uint)param_4[10] * 8);
          uVar10 = (uint)*(char *)((long)param_4 + 0x17);
          puVar23 = param_4;
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            puVar23 = (ulong *)*param_4;
          }
          param_4[3] = (ulong)puVar23;
LAB_1078e3b3c:
          puVar16 = param_4;
          if ((uVar10 >> 7 & 1) != 0) {
            puVar16 = (ulong *)*param_4;
          }
          uVar11 = *(ulong *)((long)puVar16 +
                             (ulong)(uVar12 >> 6) * 8 + (ulong)*(uint *)((long)puVar26 + 0x14));
          uVar22 = uVar11 | 1L << ((ulong)uVar12 & 0x3f);
          *(ulong *)((long)puVar16 +
                    (ulong)(uVar12 >> 6) * 8 + (ulong)*(uint *)((long)puVar26 + 0x14)) = uVar22;
          bVar24 = uVar11 != uVar22 | bVar24;
        }
      }
    }
  }
  else {
    bVar24 = 0;
  }
  return bVar24;
}



/* Entry: 1078e5fb4; end: 1078e6067;  */

void FUN_1078e5fb4(void)

{
  uint *in_x4;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint uVar1;
  uint *unaff_x22;
  
  func_0x000107913c7c();
  func_0x0001078e5f40();
  func_0x000107917174(*in_x4);
  uVar1 = extraout_w10;
  if (extraout_w8 != extraout_w9) {
    uVar1 = (uint)(extraout_w8 < extraout_w9);
  }
  if (uVar1 == 1) {
    *unaff_x22 = extraout_w8;
    *in_x4 = extraout_w9;
    uVar1 = unaff_x22[1];
    unaff_x22[1] = in_x4[1];
    in_x4[1] = uVar1;
    func_0x000107917174(*unaff_x22);
    uVar1 = extraout_w10_00;
    if (extraout_w8_00 != extraout_w9_00) {
      uVar1 = (uint)(extraout_w8_00 < extraout_w9_00);
    }
    if (uVar1 == 1) {
      func_0x000107915db0();
      uVar1 = extraout_w10_01;
      if (extraout_w8_01 != extraout_w9_01) {
        uVar1 = (uint)(extraout_w8_01 < extraout_w9_01);
      }
      if (uVar1 == 1) {
        func_0x000107915df4();
        uVar1 = extraout_w10_02;
        if (extraout_w8_02 != extraout_w9_02) {
          uVar1 = (uint)(extraout_w8_02 < extraout_w9_02);
        }
        if (uVar1 == 1) {
          func_0x000107916f54();
        }
      }
    }
  }
  return;
}



/* Entry: 1078e64cc; end: 1078e64df;  */

void FUN_1078e64cc(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078e674c; end: 1078e674f;  */

void FUN_1078e674c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt8bad_castD2Ev_110346988)();
  return;
}



/* Entry: 1078e6cd8; end: 1078e6f3f;  */

void FUN_1078e6cd8(long param_1)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lStack_290;
  long *plStack_288;
  long alStack_280 [3];
  long lStack_268;
  undefined1 uStack_260;
  long lStack_258;
  int *piStack_250;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  
  func_0x000107915f10();
  lVar12 = 0;
  alStack_280[0] = 0;
  alStack_280[1] = 0;
  lStack_290 = 0;
  lVar14 = 0xe8;
  lVar13 = *(long *)(param_1 + 0x18);
  plStack_288 = alStack_280;
  for (lVar8 = lVar13; plVar10 = plStack_288, lVar8 != *(long *)(param_1 + 0x20);
      lVar8 = lVar8 + 0x1b0) {
    if ((*(byte *)(lVar8 + 0x20) & 1) == 0) {
      lVar11 = 0;
      lVar16 = 0x170;
      lVar15 = lStack_290;
      lVar17 = lVar14;
      do {
        piVar1 = (int *)(lVar13 + lVar15 + 0x28);
        if (*piVar1 - 4U < 0xfffffffe) {
          lVar2 = lVar13 + lVar15;
          uStack_b0 = *(undefined8 *)(lVar2 + 0x40);
          uStack_b8 = *(undefined8 *)(lVar2 + 0x38);
          lStack_c0 = *(long *)(lVar2 + 0x30);
          func_0x0001078ee2d8(&plStack_288,&lStack_c0);
          lStack_258 = lVar13 + lVar17;
          uStack_260 = 0;
          alStack_280[2] = lVar12;
          lStack_268 = lVar11;
          piStack_250 = piVar1;
          func_0x0001078ee390();
        }
        lVar11 = lVar11 + 1;
        lVar17 = lVar17 + -0xb8;
        lVar16 = lVar16 + -0xb8;
        lVar15 = lVar15 + 0xb8;
      } while (lVar16 != 0);
    }
    lVar12 = lVar12 + 1;
    lVar14 = lVar14 + 0x1b0;
    lStack_290 = lStack_290 + 0x1b0;
  }
  while (plVar7 = plStack_288, plVar10 != alStack_280) {
    plVar7 = (long *)plVar10[7];
    if (plVar7 != (long *)plVar10[8]) {
      func_0x000107918228();
      func_0x0001078ee488();
    }
    func_0x000107914fec();
    plVar10 = plVar7;
  }
  do {
    if (plVar7 == alStack_280) {
      func_0x0001078eefac(alStack_280[0]);
      return;
    }
    plVar4 = (long *)plVar7[7];
    lVar8 = plVar7[8];
    func_0x0001078ebe20(&lStack_c0);
    plVar7 = alStack_280 + 2;
    func_0x0001078ebdc8();
    uVar6 = (lVar8 - (long)plVar4) / 0x28;
    bVar9 = true;
    plVar10 = plVar4;
    for (uVar18 = 1; uVar18 - uVar6 != 1; uVar18 = uVar18 + 1) {
      lVar12 = *(long *)(param_1 + 0x18);
      lVar8 = lVar12 + *plVar10 * 0x1b0;
      bVar5 = *(byte *)(lVar8 + 0x1a0);
      if (bVar9 || ((bVar5 ^ 0xff) & 1) != 0) {
        if (bVar5 != 0) {
LAB_1078e6ee8:
          plVar7 = &lStack_c0;
          _memcpy(plVar7,plVar10[4],0xb8);
          goto LAB_1078e6ef8;
        }
      }
      else {
        uVar3 = uVar18;
        if (uVar6 <= uVar18) {
          uVar3 = 0;
        }
        lVar14 = lVar12 + plVar10[-5] * 0x1b0;
        if ((((*(char *)(lVar14 + 0x1a1) != '\x01') ||
             (lVar13 = plVar10[-5],
             *(long *)(lVar14 + 0x48) != lStack_a0 && *(long *)(lVar14 + 0x100) != lStack_a0)) &&
            ((lVar14 = lVar12 + plVar4[uVar3 * 5] * 0x1b0, *(char *)(lVar14 + 0x1a1) != '\x01' ||
             (lVar13 = plVar4[uVar3 * 5],
             *(long *)(lVar14 + 0x48) != lStack_a0 && *(long *)(lVar14 + 0x100) != lStack_a0)))) ||
           (*(undefined1 *)(lVar12 + lVar13 * 0x1b0 + 0x1a0) = 1,
           (*(byte *)(lVar8 + 0x1a0) & 1) != 0)) goto LAB_1078e6ee8;
LAB_1078e6ef8:
        bVar9 = false;
      }
      plVar10 = plVar10 + 5;
    }
    func_0x000107914fec();
  } while( true );
}



/* Entry: 1078e8f24; end: 1078e96bb;  */

long * FUN_1078e8f24(undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long extraout_x8;
  undefined8 *puVar18;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 *puVar19;
  long extraout_x9;
  long extraout_x9_00;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  long unaff_x22;
  long lVar29;
  uint uVar30;
  undefined8 *puVar31;
  uint uVar32;
  ulong unaff_x26;
  long lVar33;
  long lVar34;
  ulong unaff_x28;
  long lVar35;
  undefined8 uVar36;
  ulong uStack_218;
  uint uStack_1bc;
  long lStack_1a8;
  uint uStack_18c;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined1 uStack_f0;
  long lStack_e8;
  undefined2 uStack_e0;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  func_0x000107917384();
  plVar9 = (long *)(param_3 + 0x40);
  puVar13 = (undefined8 *)*plVar9;
  puVar31 = *(undefined8 **)(param_3 + 0x48);
  lVar33 = (long)puVar31 - (long)puVar13;
  lVar29 = lVar33 >> 5;
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(long *)(param_3 + 0xa8) = lVar29;
  lVar35 = 0;
  lVar10 = -1;
  *(undefined8 *)(param_3 + 0xb8) = 0;
  *(undefined8 *)(param_3 + 0xb0) = 0xffffffffffffffff;
  uVar27 = lVar29 + 1;
  if (lVar33 == -0x20) {
    func_0x0001078e8d98();
    puVar14 = puVar13;
LAB_1078e9040:
    plVar9 = (long *)(param_3 + 0x58);
    puVar13 = (undefined8 *)*plVar9;
    puVar31 = *(undefined8 **)(param_3 + 0x60);
    lVar33 = (long)puVar31 - (long)puVar13;
    unaff_x28 = lVar33 / 0x58;
    unaff_x26 = uVar27 - unaff_x28;
    if (uVar27 < unaff_x28 || unaff_x26 == 0) {
      if (uVar27 < unaff_x28) {
        func_0x0001078e8ce8(plVar9,puVar13 + uVar27 * 0xb);
      }
LAB_1078e91f8:
      func_0x0001079172ec();
      *(long *)(param_3 + 0x30) = extraout_x8_01 >> 8;
      *(char *)(param_3 + 0x38) = (char)param_4;
      if ((int)param_4 != 0) {
        *(undefined1 *)(param_3 + 0x39) = 1;
      }
      return plVar9;
    }
    if (unaff_x26 <= (ulong)((*(long *)(param_3 + 0x68) - (long)puVar31) / 0x58)) {
      puVar13 = puVar31 + unaff_x26 * 0xb;
      for (lVar29 = lVar29 * 0x58 + unaff_x28 * -0x58 + 0x58; lVar29 != 0; lVar29 = lVar29 + -0x58)
      {
        *puVar31 = 0;
        puVar31[1] = 0;
        puVar31[2] = 0;
        puVar31[8] = 0;
        puVar31[9] = 0;
        puVar31[7] = 0;
        *(undefined2 *)(puVar31 + 10) = 0;
        puVar31 = puVar31 + 0xb;
      }
      *(undefined8 **)(param_3 + 0x60) = puVar13;
      goto LAB_1078e91f8;
    }
    if (uVar27 < 0x2e8ba2e8ba2e8bb) {
      uVar3 = (*(long *)(param_3 + 0x68) - (long)puVar13) / 0x58;
      uVar21 = uVar3 * 2;
      if (uVar21 < uVar27 || uVar21 - uVar27 == 0) {
        uVar21 = uVar27;
      }
      uVar27 = uVar21;
      if (0x1745d1745d1745c < uVar3) {
        uVar27 = 0x2e8ba2e8ba2e8ba;
      }
      if (uVar27 < 0x2e8ba2e8ba2e8bb) {
        lVar10 = uVar27 * 0x58;
        __Znwm();
        puVar19 = (undefined8 *)(lVar10 + lVar33);
        puVar14 = puVar19;
        for (lVar29 = lVar29 * 0x58 + unaff_x28 * -0x58 + 0x58; lVar29 != 0; lVar29 = lVar29 + -0x58
            ) {
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar14[8] = 0;
          puVar14[9] = 0;
          puVar14[7] = 0;
          *(undefined2 *)(puVar14 + 10) = 0;
          puVar14 = puVar14 + 0xb;
        }
        puVar18 = puVar19 + (lVar33 / -0x58) * 0xb;
        puVar14 = puVar13;
        lStack_68 = lVar10;
        while (puVar14 != puVar31) {
          func_0x0001079138d4(puVar18);
          uVar25 = *(undefined8 *)(extraout_x9_00 + 0x20);
          uVar22 = *(undefined8 *)(extraout_x9_00 + 0x18);
          uVar36 = *(undefined8 *)(extraout_x9_00 + 0x28);
          *(undefined8 *)(extraout_x8_00 + 0x30) = *(undefined8 *)(extraout_x9_00 + 0x30);
          *(undefined8 *)(extraout_x8_00 + 0x28) = uVar36;
          *(undefined8 *)(extraout_x8_00 + 0x20) = uVar25;
          *(undefined8 *)(extraout_x8_00 + 0x18) = uVar22;
          uVar22 = *(undefined8 *)(extraout_x9_00 + 0x38);
          *(undefined8 *)(extraout_x8_00 + 0x40) = *(undefined8 *)(extraout_x9_00 + 0x40);
          *(undefined8 *)(extraout_x8_00 + 0x38) = uVar22;
          *(undefined8 *)(extraout_x8_00 + 0x48) = *(undefined8 *)(extraout_x9_00 + 0x48);
          *(undefined8 *)(extraout_x9_00 + 0x38) = 0;
          *(undefined8 *)(extraout_x9_00 + 0x40) = 0;
          *(undefined8 *)(extraout_x9_00 + 0x48) = 0;
          *(undefined2 *)(extraout_x8_00 + 0x50) = *(undefined2 *)(extraout_x9_00 + 0x50);
          puVar18 = (undefined8 *)(extraout_x8_00 + 0x58);
          puVar14 = (undefined8 *)(extraout_x9_00 + 0x58);
        }
        for (; puVar13 != puVar31; puVar13 = puVar13 + 0xb) {
          func_0x0001078e8d1c(puVar13);
        }
        plVar9 = *(long **)(param_3 + 0x58);
        *(undefined8 **)(param_3 + 0x58) = puVar19 + (lVar33 / -0x58) * 0xb;
        *(undefined8 **)(param_3 + 0x60) = puVar19 + unaff_x26 * 0xb;
        *(ulong *)(param_3 + 0x68) = lStack_68 + uVar27 * 0x58;
        if (plVar9 != (long *)0x0) {
          __ZdlPv();
        }
        goto LAB_1078e91f8;
      }
      goto LAB_1078e9230;
    }
  }
  else {
    puVar14 = param_4;
    if (*(undefined8 **)(param_3 + 0x50) != puVar31) {
      *puVar31 = 0;
      puVar31[1] = 0;
      *(undefined4 *)(puVar31 + 3) = 0;
      puVar31[2] = 0;
      *(undefined8 **)(param_3 + 0x48) = puVar31 + 4;
      goto LAB_1078e9040;
    }
    if (uVar27 >> 0x3b != 0) goto LAB_1078e9238;
    uVar21 = (long)*(undefined8 **)(param_3 + 0x50) - (long)puVar13;
    unaff_x26 = (long)uVar21 >> 4;
    if (unaff_x26 <= uVar27) {
      unaff_x26 = uVar27;
    }
    if (0x7fffffffffffffdf < uVar21) {
      unaff_x26 = 0x7ffffffffffffff;
    }
    if (unaff_x26 >> 0x3b == 0) {
      unaff_x22 = unaff_x26 << 5;
      __Znwm();
      puVar1 = (undefined8 *)(unaff_x22 + lVar33);
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar18 = puVar1 + lVar29 * -4;
      puVar19 = puVar13;
      while (puVar19 != puVar31) {
        func_0x0001079138d4(puVar18);
        *(undefined4 *)(extraout_x8 + 0x18) = *(undefined4 *)(extraout_x9 + 0x18);
        puVar18 = (undefined8 *)(extraout_x8 + 0x20);
        puVar19 = (undefined8 *)(extraout_x9 + 0x20);
      }
      for (; puVar13 != puVar31; puVar13 = puVar13 + 4) {
        func_0x00010791667c();
      }
      lVar33 = *(long *)(param_3 + 0x40);
      *(undefined8 **)(param_3 + 0x40) = puVar1 + lVar29 * -4;
      *(undefined8 **)(param_3 + 0x48) = puVar1 + 4;
      *(ulong *)(param_3 + 0x50) = unaff_x22 + unaff_x26 * 0x20;
      if (lVar33 != 0) {
        __ZdlPv();
      }
      goto LAB_1078e9040;
    }
LAB_1078e9230:
    func_0x000104bd35f4();
  }
  func_0x0001078e96c8();
LAB_1078e9238:
  iVar12 = (int)puVar14;
  func_0x0001078e96bc();
  uStack_78 = 0x1078e923c;
  uStack_d0 = unaff_x28;
  lStack_c8 = lVar33;
  uStack_c0 = unaff_x26;
  uStack_b8 = uVar27;
  puStack_b0 = puVar31;
  lStack_a8 = lVar29;
  lStack_a0 = unaff_x22;
  puStack_98 = puVar13;
  puStack_90 = param_4;
  lStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  if (iVar12 == 1) {
    lVar29 = plVar9[1];
    while ((lVar29 != *plVar9 && (*(long *)(lVar29 + -0xd8) == plVar9[0x15]))) {
      lVar29 = lVar29 + -0x100;
      plVar9[1] = lVar29;
    }
    func_0x0001078e8d98(plVar9 + 8,plVar9[9] + -0x20);
    func_0x0001078e8ce8(plVar9 + 0xb,plVar9[0xc] + -0x58);
    plVar11 = (long *)0x0;
    plVar9[6] = -1;
  }
  else {
    uVar27 = plVar9[6];
    if (uVar27 == 0xffffffffffffffff) {
      plVar11 = (long *)0x0;
    }
    else {
      lVar29 = plVar9[1];
      uVar21 = lVar29 - *plVar9 >> 8;
      if (uVar27 < uVar21) {
        *(ulong *)(*plVar9 + uVar27 * 0x100 + 0x10) = uVar21 - 1;
        *(ulong *)(lVar29 + -0xe8) = uVar27;
      }
      lVar29 = plVar9[9];
      plVar11 = *(long **)(lVar29 + -0x20);
      plVar2 = *(long **)(lVar29 + -0x18);
      if (plVar11 != plVar2) {
        lVar35 = plVar11[1];
        lVar10 = *plVar11;
        plVar2[-1] = lVar35;
        plVar2[-2] = lVar10;
      }
      func_0x0001079185bc();
      for (; uVar27 < (ulong)(plVar9[1] - *plVar9 >> 8); uVar27 = uVar27 + 1) {
        lVar33 = *plVar9 + uVar27 * 0x100;
        lVar20 = *(long *)(lVar33 + 0x48);
        lVar4 = lVar20 * 0x10 + *(long *)(lVar33 + 0x38) * -0x10;
        if (lVar4 != 0) {
          lVar24 = *(long *)(lVar29 + -0x20);
          uVar25 = *(undefined8 *)(lVar33 + 8);
          uVar22 = *(undefined8 *)(lVar33 + 0x28);
          lVar33 = lVar24 + *(long *)(lVar33 + 0x38) * 0x10;
          lVar15 = plVar9[0x21];
          uStack_140 = 0xffffffffffffffff;
          uStack_138 = 0xffffffffffffffff;
          uStack_148 = 0xffffffffffffffff;
          lStack_110 = -1;
          lStack_108 = -1;
          uStack_100 = 0;
          lStack_f8 = 0;
          uStack_f0 = 0;
          lStack_e8 = -1;
          uStack_e0 = 0;
          uStack_150 = 0;
          lStack_130 = param_2;
          lStack_120 = lVar10;
          lStack_118 = lVar35;
          func_0x0001079162c0(plVar9[0x1a] - plVar9[0x19]);
          func_0x0001078e9abc(&lStack_160,lVar33);
          uStack_1bc = 0;
          uVar21 = 0;
          uVar30 = 0;
          uVar32 = 0;
          lStack_180 = 0;
          lStack_178 = 1;
          lVar23 = 0x7fffffffffffffff;
          lVar28 = -0x8000000000000000;
          lVar34 = -0x8000000000000000;
          lStack_1a8 = 0x7fffffffffffffff;
          bVar5 = 1;
          uStack_18c = 0;
          uStack_218 = extraout_x8_02;
          while (lVar33 = lVar33 + 0x10, lVar33 != lVar24 + lVar20 * 0x10) {
            func_0x0001078e9abc(&lStack_170,lVar33,lVar15);
            lVar7 = lStack_168;
            lVar6 = lStack_170;
            uVar16 = (uint)(lStack_158 < lStack_168);
            if (lStack_168 < lStack_158) {
              uVar16 = 0xffffffff;
            }
            uVar17 = (uint)(lStack_160 < lStack_170);
            if (lStack_170 < lStack_160) {
              uVar17 = 0xffffffff;
            }
            if (lStack_170 == lStack_160) {
              bVar8 = lStack_158 == lStack_168;
              if (bVar8) {
                uVar16 = 0xffffff9d;
              }
              uVar17 = 0;
              if (bVar8) {
                uVar17 = 0xffffff9d;
              }
              uVar26 = (uint)bVar8;
              if (uVar21 == 0) goto LAB_1078e94a4;
LAB_1078e9434:
              if ((uVar17 != uVar32 || 10 < uVar21) || uVar16 != uVar30) {
                if (uStack_18c == 0) {
                  func_0x0001079162c0(plVar9[0x1a] - plVar9[0x19]);
                  uStack_218 = extraout_x8_03;
                }
                func_0x0001078e9b34(plVar9 + 0x19,&uStack_150);
                uStack_e0 = 0;
                goto LAB_1078e94a4;
              }
              if (lStack_170 < lStack_1a8) {
                lStack_130 = lStack_170;
                lStack_1a8 = lStack_170;
              }
              if (lVar34 < lStack_170) {
                lStack_120 = lStack_170;
                lVar34 = lStack_170;
              }
              if (lStack_168 < lVar23) {
                lVar23 = lStack_168;
              }
            }
            else {
              uVar26 = 0;
              if (uVar21 != 0) goto LAB_1078e9434;
LAB_1078e94a4:
              lStack_110 = lStack_178 + -1;
              uStack_138 = 0xffffffffffffffff;
              uStack_f0 = (undefined1)uVar26;
              if (uVar26 == 0 && !(bool)(bVar5 ^ 1)) {
                bVar5 = 0;
                uStack_e0 = CONCAT11(uStack_e0._1_1_,1);
              }
              uStack_150 = CONCAT44(uVar16,uVar17);
              lStack_1a8 = lStack_160;
              if (lVar6 < lStack_160) {
                lStack_1a8 = lVar6;
              }
              lVar34 = lStack_160;
              if (lStack_160 < lVar6) {
                lVar34 = lVar6;
              }
              lVar23 = lStack_158;
              if (lVar7 < lStack_158) {
                lVar23 = lVar7;
              }
              uVar21 = 0;
              lVar28 = lStack_158;
              uVar30 = uVar16;
              uVar32 = uVar17;
              uStack_1bc = uVar26;
              uStack_18c = uVar26;
              uStack_148 = uVar25;
              uStack_140 = uVar22;
              lStack_130 = lStack_1a8;
              lStack_120 = lVar34;
              lStack_118 = lStack_158;
              lStack_f8 = lVar4 >> 4;
              lStack_e8 = lStack_180;
            }
            if (lVar28 < lVar7) {
              lStack_118 = lVar7;
              lVar28 = lVar7;
            }
            uVar21 = uVar21 + 1;
            lStack_108 = lStack_178;
            lStack_180 = lStack_180 + (ulong)(uVar26 ^ 1);
            lStack_178 = lStack_178 + 1;
            lStack_160 = lStack_170;
            lStack_158 = lStack_168;
            uStack_100 = uVar21;
          }
          if (uVar21 != 0) {
            if (uStack_1bc == 0) {
              uStack_218 = (plVar9[0x1a] - plVar9[0x19]) / 0x78;
            }
            func_0x0001078e9b34(plVar9 + 0x19,&uStack_150);
          }
          if ((uStack_218 < (ulong)((plVar9[0x1a] - plVar9[0x19]) / 0x78)) &&
             (lVar33 = plVar9[0x19] + uStack_218 * 0x78, (*(byte *)(lVar33 + 0x60) & 1) == 0)) {
            *(undefined1 *)(lVar33 + 0x71) = 1;
          }
        }
      }
      plVar9[6] = -1;
      plVar11 = (long *)0x1;
    }
  }
  return plVar11;
}



/* Entry: 1078e9a00; end: 1078e9a47;  */

void FUN_1078e9a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107913cd4();
  if (param_4 != 0) {
    func_0x000107915260();
    func_0x0001078e9a54();
  }
  while (func_0x00010791763c(), !(bool)in_ZR) {
    func_0x000107915260();
    func_0x0001078e9a54();
    *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  }
  return;
}



/* Entry: 1078e9d1c; end: 1078e9d93;  */

bool FUN_1078e9d1c(undefined8 *param_1)

{
  int iVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  
  func_0x0001079145dc();
  func_0x000107916d34(*param_1,param_1[1]);
  func_0x000107914ca4();
  iVar1 = (int)param_1;
  if (iVar1 != 1) {
    func_0x0001079138a8();
    func_0x0001078ea40c();
    if (((ulong)param_1 & 1) == 0) {
      uVar2 = *unaff_x19;
      unaff_x21[1] = unaff_x19[1];
      *unaff_x21 = uVar2;
      uVar2 = *unaff_x20;
      unaff_x19[1] = unaff_x20[1];
      *unaff_x19 = uVar2;
    }
  }
  return iVar1 != 1;
}



/* Entry: 1078eb39c; end: 1078eb40b;  */

/* WARNING: Possible PIC construction at 0x0001078eb404: Changing call to branch */

void FUN_1078eb39c(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 in_CY;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x9;
  long extraout_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  
  func_0x000107917a38();
  func_0x000107914124();
  if ((bool)in_CY) {
    func_0x000107913c08();
    if (extraout_x10 != 0) {
code_r0x0001078eb40c:
      func_0x000107913ad0();
      func_0x000107913cd4();
      uVar2 = *param_1;
      func_0x0001078eb5a0(uVar2,*(undefined8 *)(unaff_x21 + 0x10));
      func_0x0001079182f8();
      *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
      *unaff_x19 = uVar2;
      return;
    }
    func_0x000107913680();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) {
      if (uVar1 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto code_r0x0001078eb40c;
      }
      func_0x000107915ccc();
    }
    func_0x000107913480();
    func_0x00010791692c();
    if (unaff_x20 != 0) {
      func_0x000107914d94();
    }
  }
  else {
    *unaff_x24 = unaff_x21;
    unaff_x24 = unaff_x24 + 1;
  }
  unaff_x19[1] = unaff_x24;
  return;
}



/* Entry: 1078eb690; end: 1078eb6c3;  */

void FUN_1078eb690(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107913cd4();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x0001078eb5a0(uVar1,*(undefined8 *)(unaff_x21 + 0x18));
  func_0x0001079182f8();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x19 + 8) = uVar1;
  return;
}



/* Entry: 1078ebb84; end: 1078ebd13;  */

void FUN_1078ebb84(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x22;
  long unaff_x24;
  
  func_0x0001079139b0();
  lVar2 = *param_2;
  while ((lVar2 != unaff_x22 && unaff_x22 != lVar2 + 0x10 &&
         (uVar1 = param_5,
         func_0x0001078ebd14(param_5,lVar2 + 0x10,param_6,*(undefined8 *)(unaff_x24 + 0x20)),
         (int)uVar1 != 0))) {
    func_0x000107916d90();
    lVar2 = extraout_x8;
  }
  return;
}



/* Entry: 1078ebf8c; end: 1078ec037;  */

ulong FUN_1078ebf8c(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  uint extraout_w8;
  undefined8 extraout_x8;
  double dVar5;
  undefined8 in_register_00005008;
  double dVar6;
  double dVar7;
  
  func_0x000107913ca4();
  func_0x0001078ec2c4();
  func_0x000107916388();
  *(undefined8 *)(param_2 + 0xa2) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x9a) = param_1;
  func_0x000107918104(100);
  func_0x000107913564(extraout_x8);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  dVar5 = (double)(long)param_2;
  dVar6 = (double)param_3;
  dVar7 = (double)param_4;
  func_0x000107917da8();
  cVar3 = NAN(dVar5);
  uVar2 = dVar5 == 0.0;
  cVar1 = dVar5 < 0.0;
  if (!(bool)uVar2) {
    func_0x000107915fcc();
    if (cVar1 == cVar3) {
      uVar4 = 0xffffffff;
      if (0.0 < dVar5) {
        uVar4 = 1;
      }
      return (ulong)uVar4;
    }
    func_0x000107914b3c();
    uVar4 = extraout_w8;
    if (!(bool)uVar2 && cVar1 == cVar3) {
      uVar4 = 1;
    }
    if (dVar6 < dVar7) {
      return (ulong)uVar4;
    }
  }
  return 0;
}



/* Entry: 1078ec99c; end: 1078ec9e7;  */

undefined4 FUN_1078ec99c(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 4;
  uVar2 = uVar3;
  if (param_3 <= param_1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_1 <= param_2) {
    uVar1 = uVar2;
  }
  if (param_1 <= param_3) {
    uVar3 = 2;
  }
  uVar2 = 0;
  if (param_2 <= param_1) {
    uVar2 = uVar3;
  }
  if (param_2 < param_3) {
    uVar1 = uVar2;
  }
  uVar2 = 3;
  if (param_1 != param_3) {
    uVar2 = uVar1;
  }
  uVar3 = 1;
  if (param_1 != param_2) {
    uVar3 = uVar2;
  }
  return uVar3;
}



/* Entry: 1078ecdb0; end: 1078ecdef;  */

void FUN_1078ecdb0(void)

{
  ___cxa_allocate_exception(0x40);
  func_0x0001078ece38();
  func_0x000107917f84();
  func_0x00010791649c();
  func_0x000107915574();
  func_0x0001078ecea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078ecf14; end: 1078ecf53;  */

bool FUN_1078ecf14(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  
  dVar1 = param_2;
  if (param_2 <= param_1) {
    dVar1 = param_1;
  }
  if (0.0 < dVar1) {
    return (1.0 - param_2 / dVar1) + param_4 * 5.0 < (1.0 - param_1 / dVar1) + param_3 * 5.0;
  }
  return true;
}



/* Entry: 1078ed414; end: 1078ed44f;  */

undefined4 FUN_1078ed414(long *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 extraout_w8;
  long unaff_x19;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  func_0x000107917350();
  puVar8 = (undefined8 *)param_1[3];
  func_0x0001078ec28c();
  lVar5 = *(long *)(unaff_x19 + 8);
  func_0x0001078ec28c();
  lVar6 = puVar8[1];
  lVar7 = *param_1;
  func_0x000107915e78(*puVar8);
  dVar9 = (double)lVar5;
  dVar10 = (double)lVar6;
  dVar11 = (double)lVar7;
  func_0x000107917da8();
  cVar4 = NAN(dVar9);
  uVar3 = dVar9 == 0.0;
  cVar2 = dVar9 < 0.0;
  if (!(bool)uVar3) {
    func_0x000107915fcc();
    if (cVar2 == cVar4) {
      if (dVar9 <= 0.0) {
        return 0xffffffff;
      }
      return 1;
    }
    func_0x000107914b3c();
    uVar1 = extraout_w8;
    if (!(bool)uVar3 && cVar2 == cVar4) {
      uVar1 = 1;
    }
    if (dVar10 < dVar11) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1078edb44; end: 1078edbb3;  */

/* WARNING: Possible PIC construction at 0x0001078edbac: Changing call to branch */

void FUN_1078edb44(void)

{
  ulong uVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint uVar3;
  long *plVar4;
  ulong extraout_x8;
  ulong extraout_x9;
  long extraout_x10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  long *unaff_x24;
  undefined8 uVar5;
  undefined8 *unaff_x27;
  
  func_0x000107917a38();
  func_0x000107914124();
  if ((bool)in_CY) {
    func_0x000107913c08();
    if (extraout_x10 != 0) {
code_r0x0001078edbb4:
      func_0x000107913ad0();
      func_0x000107917384();
      func_0x0001079133e4();
      while (func_0x000107915ebc(), !(bool)in_ZR) {
        uVar5 = *unaff_x27;
        func_0x000107914c6c();
        plVar4 = unaff_x24;
        func_0x0001078edf30();
        func_0x000107914c6c();
        uVar3 = unaff_w23;
        func_0x0001078edf30();
        if ((((ulong)plVar4 & 1) != 0) || (uVar3 != 0)) {
          lVar2 = unaff_x19;
          if (((uint)plVar4 & uVar3) == 0) {
            lVar2 = unaff_x21;
          }
          in_ZR = (uint)plVar4 == 0;
          if ((bool)in_ZR) {
            lVar2 = unaff_x20;
          }
          func_0x0001078eda1c(lVar2,uVar5);
        }
        unaff_x27 = unaff_x27 + 1;
      }
      return;
    }
    func_0x000107913680();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) {
      if (uVar1 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto code_r0x0001078edbb4;
      }
      func_0x000107915ccc();
    }
    func_0x000107913480();
    func_0x00010791692c();
    if (unaff_x20 != 0) {
      func_0x000107914d94();
    }
  }
  else {
    *unaff_x24 = unaff_x21;
    unaff_x24 = unaff_x24 + 1;
  }
  *(long **)(unaff_x19 + 8) = unaff_x24;
  return;
}



/* Entry: 1078edf64; end: 1078edf9f;  */

uint FUN_1078edf64(undefined8 param_1,int *param_2)

{
  if ((*param_2 != 3 && *param_2 != 5) && ((char)param_2[0x32] == '\x01')) {
    func_0x0001078edfa0(param_1,param_2 + 0x2a);
    return (uint)param_1 ^ 1;
  }
  return 0;
}



/* Entry: 1078ee288; end: 1078ee2d7;  */

uint FUN_1078ee288(uint param_1)

{
  double unaff_d8;
  double unaff_d9;
  
  func_0x000107916af4();
  func_0x0001078e65dc();
  return (uint)(unaff_d9 < unaff_d8) & (param_1 ^ 0xffffffff);
}



/* Entry: 1078eeb10; end: 1078eeb77;  */

void FUN_1078eeb10(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107913c7c();
  func_0x0001078eea90();
  func_0x000107915248();
  func_0x0001078eea1c();
  if (param_3 != 0) {
    func_0x000107914db0();
    uVar1 = unaff_x22[4];
    uVar4 = *unaff_x22;
    uVar3 = unaff_x22[3];
    uVar2 = unaff_x22[2];
    unaff_x21[1] = unaff_x22[1];
    *unaff_x21 = uVar4;
    unaff_x21[3] = uVar3;
    unaff_x21[2] = uVar2;
    unaff_x21[4] = uVar1;
    func_0x000107913d84();
    func_0x0001078eea1c();
    if (param_3 != 0) {
      func_0x000107913be8();
      unaff_x21[1] = in_register_00005008;
      *unaff_x21 = param_1;
      unaff_x21[3] = in_register_00005028;
      unaff_x21[2] = param_2;
      func_0x000107914d7c();
      func_0x0001078eea1c();
      if (param_3 != 0) {
        func_0x000107913438();
      }
    }
  }
  return;
}



/* Entry: 1078ef198; end: 1078ef1cf;  */

void FUN_1078ef198(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x000107914c90();
    FUN_1078ef198();
    FUN_1078ef198(*(undefined8 *)(unaff_x19 + 8));
    func_0x0001057f951c(unaff_x19 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078efa10; end: 1078efa57;  */

void FUN_1078efa10(void)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000107913c7c();
  func_0x0001078ef964();
  lVar4 = *(long *)(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x21 + 0x10);
  cVar1 = SBORROW8(lVar4,lVar5);
  cVar2 = lVar4 - lVar5 < 0;
  bVar3 = lVar4 == lVar5;
  if (((lVar5 < lVar4) && (func_0x000107913b8c(), !bVar3 && cVar2 == cVar1)) &&
     (func_0x000107913b5c(), !bVar3 && cVar2 == cVar1)) {
    func_0x000107913dd0();
  }
  return;
}



/* Entry: 1078efe34; end: 1078efe57;  */

void FUN_1078efe34(long param_1,long param_2)

{
  func_0x0001078efe58();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 1078f01c0; end: 1078f0223;  */

void FUN_1078f01c0(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010791886c();
  if (unaff_x20 != 0) {
    lVar1 = *(long *)(unaff_x19 + 8);
    while (lVar1 != unaff_x20) {
      lVar1 = lVar1 + -0x30;
      func_0x0001078f005c();
    }
    *(long *)(unaff_x19 + 8) = unaff_x20;
    func_0x000107915b14();
  }
  return;
}



/* Entry: 1078f0b24; end: 1078f0bd7;  */

void FUN_1078f0b24(ulong param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  char cVar2;
  undefined8 unaff_x30;
  
  cVar1 = SBORROW8(param_3,2);
  cVar2 = param_3 + -2 < 0;
  if (1 < param_3) {
    func_0x000107915994();
    func_0x000107914b1c();
    if (cVar2 == cVar1) {
      func_0x00010791416c();
      func_0x0001079163c4();
      if (cVar2 != cVar1) {
        func_0x0001079152e8();
        func_0x0001078f0668();
        cVar2 = (int)param_1 < 0;
        cVar1 = '\0';
      }
      func_0x000107914f88();
      func_0x0001078f0668();
      if ((param_1 & 1) == 0) {
        func_0x000107915750();
        do {
          func_0x000107914f08();
          if (cVar2 != cVar1) break;
          func_0x000107914eec();
          if (cVar2 != cVar1) {
            func_0x000107914f88();
            func_0x0001078f0668();
            cVar2 = (int)param_1 < 0;
            cVar1 = '\0';
          }
          func_0x0001079152e8();
          func_0x0001078f0668();
        } while ((int)param_1 == 0);
        func_0x000107915f50();
      }
    }
    func_0x0001079154c8(unaff_x30);
  }
  return;
}



/* Entry: 1078f0e8c; end: 1078f1457;  */

void FUN_1078f0e8c(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong extraout_x8;
  undefined1 *puVar8;
  long extraout_x9;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  long lVar9;
  undefined1 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar10;
  undefined1 *unaff_x24;
  undefined1 *unaff_x26;
  ulong uVar11;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined8 unaff_x30;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [112];
  undefined1 auStack_f8 [120];
  
  func_0x0001079175f0();
  func_0x0001079141cc();
  do {
    func_0x0001079177bc();
LAB_1078f0eb4:
    func_0x0001079148f8();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078f118c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)unaff_x27[0x10dedb8e0] * 4 + 0x1078f1190))();
      return;
    }
    uVar1 = 0xa7e < extraout_x8;
    if ((long)extraout_x8 < 0xa80) {
      if (((ulong)unaff_x26 & 1) == 0) {
        if (unaff_x21 != unaff_x24) {
          puVar5 = unaff_x21 + -0x70;
          while (unaff_x21 = unaff_x21 + 0x70, unaff_x21 != unaff_x24) {
            func_0x000107913f88();
            func_0x000107915848();
            func_0x0001078f1458();
            if ((int)param_1 != 0) {
              func_0x000107913d48(auStack_f8);
              puVar6 = puVar5;
              do {
                param_1 = puVar6;
                func_0x000107914a98(param_1 + 0xe0,param_1 + 0x70);
                func_0x000107913f88();
                uVar11 = 0;
                func_0x000107916494();
                puVar6 = param_1 + -0x70;
              } while ((uVar11 & 1) != 0);
              param_1 = param_1 + 0x70;
              func_0x000107914a98(param_1,auStack_f8);
            }
            puVar5 = puVar5 + 0x70;
          }
        }
        break;
      }
      if (unaff_x21 == unaff_x24) break;
      lVar9 = 0;
      puVar5 = unaff_x21;
      goto LAB_1078f123c;
    }
    if (unaff_x23 == 0) {
      if (unaff_x21 == unaff_x24) break;
      func_0x0001079169f0();
      for (; -1 < unaff_x22; unaff_x22 = unaff_x22 + -1) {
        func_0x0001079143fc();
        func_0x0001078f19c8();
      }
      do {
        cVar2 = SBORROW8((long)unaff_x27,2);
        cVar3 = (long)(unaff_x27 + -2) < 0;
        if ((long)unaff_x27 < 2) goto LAB_1078f1190;
        puVar5 = auStack_168;
        func_0x000107913cf0();
        puVar8 = (undefined1 *)0x0;
        uVar11 = (ulong)(unaff_x27 + -2) >> 1;
        puVar6 = unaff_x21;
        do {
          iVar4 = (int)puVar5;
          lVar9 = (long)puVar8 * 0x70;
          func_0x00010791419c();
          puVar7 = puVar6 + lVar9 + 0x70;
          puVar8 = unaff_x28;
          if (cVar3 != cVar2) {
            func_0x000107913f88();
            func_0x000107915320();
            func_0x0001078f1458();
            puVar7 = (undefined1 *)(extraout_x9 + 0xe0);
            puVar8 = unaff_x24;
            if (iVar4 == 0) {
              puVar7 = puVar6 + lVar9 + 0x70;
              puVar8 = unaff_x28;
            }
          }
          func_0x000107913ce4();
          iVar4 = (int)puVar6;
          cVar2 = SBORROW8((long)puVar8,uVar11);
          cVar3 = (long)((long)puVar8 - uVar11) < 0;
          puVar5 = puVar6;
          puVar6 = puVar7;
          unaff_x28 = puVar8;
        } while ((long)puVar8 <= (long)uVar11);
        unaff_x24 = unaff_x24 + -0x70;
        if (puVar7 == unaff_x24) {
          puVar5 = auStack_168;
LAB_1078f13e4:
          func_0x000107914a98(puVar7,puVar5);
        }
        else {
          func_0x0001079177b0();
          func_0x000107914a98();
          func_0x000107914808();
          if (0x70 < (long)(puVar7 + (0x70 - (long)unaff_x21))) {
            uVar11 = (ulong)(puVar7 + (0x70 - (long)unaff_x21)) / 0x70 - 2 >> 1;
            func_0x000107913f88();
            func_0x0001079152e8();
            func_0x0001078f1458();
            if (iVar4 != 0) {
              func_0x000107913ce4(auStack_f8);
              puVar5 = unaff_x21 + uVar11 * 0x70;
              do {
                puVar7 = puVar5;
                func_0x000107913d48(puVar6);
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1 >> 1;
                puVar5 = unaff_x21 + uVar11 * 0x70;
                func_0x000107913f88();
                puVar8 = puVar5;
                func_0x0001078f1458(puVar5,auStack_f8);
                puVar6 = puVar7;
              } while (((ulong)puVar8 & 1) != 0);
              puVar5 = auStack_f8;
              goto LAB_1078f13e4;
            }
          }
        }
        unaff_x27 = unaff_x27 + -1;
      } while( true );
    }
    func_0x0001079185e8();
    if ((bool)uVar1) {
      func_0x000107913e38();
      func_0x00010791684c();
      unaff_x27 = unaff_x20 + -0x70;
      func_0x00010791684c(unaff_x21 + 0x70,unaff_x27,uStack_170);
      func_0x00010791684c(unaff_x21 + 0xe0,unaff_x20 + 0x70,uStack_178);
      func_0x000107915808();
      func_0x0001078f1558();
      func_0x000107913cf0(auStack_f8);
      func_0x000107913d48();
      func_0x000107914a80();
    }
    else {
      func_0x000107914a6c();
      func_0x0001078f1558();
    }
    unaff_x23 = unaff_x23 + -1;
    if (((ulong)unaff_x26 & 1) == 0) {
      puVar5 = unaff_x21 + -0x70;
      func_0x000107918368(unaff_x19[1]);
      func_0x0001079138a8();
      func_0x000107916494();
      if (((ulong)puVar5 & 1) == 0) {
        param_1 = auStack_168;
        func_0x000107913cf0();
        func_0x0001079138a8();
        func_0x000107915260();
        func_0x0001078f1458();
        puVar5 = unaff_x21;
        if (((ulong)param_1 & 1) == 0) {
          do {
            func_0x000107917870(puVar5 + 0x70);
            if ((bool)uVar1) break;
            func_0x000107913b40();
            func_0x0001078f1458();
            puVar5 = unaff_x27;
          } while ((int)param_1 == 0);
        }
        else {
          do {
            unaff_x27 = puVar5 + 0x70;
            func_0x000107913b40();
            func_0x0001078f1458();
            puVar5 = unaff_x27;
          } while (((ulong)param_1 & 1) == 0);
        }
        func_0x000107917738();
        puVar5 = unaff_x24;
        if (!(bool)uVar1) {
          do {
            unaff_x26 = puVar5 + -0x70;
            param_1 = auStack_168;
            func_0x000107913c20();
            func_0x000107915644();
            puVar5 = unaff_x26;
          } while (((ulong)param_1 & 1) != 0);
        }
        while (unaff_x27 < unaff_x26) {
          func_0x000107914948();
          func_0x0001079171fc();
          func_0x000107914a98();
          puVar5 = unaff_x26;
          func_0x000107914a98(unaff_x26,auStack_f8);
          func_0x000107915de8(*unaff_x19);
          do {
            unaff_x27 = unaff_x27 + 0x70;
            func_0x000107913b40();
            func_0x0001078f1458();
          } while ((int)puVar5 == 0);
          do {
            unaff_x26 = unaff_x26 + -0x70;
            param_1 = auStack_168;
            func_0x000107913c20();
            func_0x000107915644();
          } while (((ulong)param_1 & 1) != 0);
        }
        unaff_x20 = unaff_x27 + -0x70;
        in_CY = unaff_x20 <= unaff_x21;
        in_ZR = unaff_x21 == unaff_x20;
        if (!(bool)in_ZR) {
          param_1 = unaff_x21;
          func_0x000107913d48();
        }
        func_0x000107914a80();
        unaff_x26 = (undefined1 *)0x0;
        goto LAB_1078f0eb4;
      }
    }
    else {
      func_0x000107918368(unaff_x19[1]);
    }
    func_0x000107913cf0(auStack_168);
    unaff_x27 = (undefined1 *)0x0;
    do {
      unaff_x27 = unaff_x27 + 0x70;
      puVar5 = unaff_x27 + (long)unaff_x21;
      func_0x0001079138a8(puVar5,auStack_168);
      func_0x0001078f1458();
    } while (((ulong)puVar5 & 1) != 0);
    puVar5 = unaff_x21 + (long)unaff_x27;
    unaff_x20 = unaff_x24;
    if (unaff_x27 == (undefined1 *)0x70) {
      do {
        if (unaff_x20 <= puVar5) break;
        unaff_x20 = unaff_x20 + -0x70;
        func_0x000107913c20();
        puVar6 = unaff_x20;
        func_0x000107915644();
      } while (((ulong)puVar6 & 1) == 0);
    }
    else {
      do {
        unaff_x20 = unaff_x20 + -0x70;
        func_0x000107913c20();
        puVar6 = unaff_x20;
        func_0x000107915644();
      } while ((int)puVar6 == 0);
    }
    func_0x0001079178ac();
    while (unaff_x27 < unaff_x28) {
      func_0x000107914948();
      func_0x000107914a98(unaff_x27,unaff_x28);
      func_0x000107914a98(unaff_x28,auStack_f8);
      func_0x000107915de8(*unaff_x19);
      do {
        unaff_x27 = unaff_x27 + 0x70;
        func_0x000107913c20();
        puVar6 = unaff_x27;
        func_0x000107915644();
      } while (((ulong)puVar6 & 1) != 0);
      do {
        unaff_x28 = unaff_x28 + -0x70;
        func_0x000107913c20();
        puVar6 = unaff_x28;
        func_0x000107915644();
      } while (((ulong)puVar6 & 1) == 0);
    }
    unaff_x28 = unaff_x27 + -0x70;
    if (unaff_x21 != unaff_x28) {
      func_0x000107915884();
      func_0x000107914a98();
    }
    param_1 = unaff_x28;
    func_0x000107914a98(unaff_x28,auStack_168);
    in_CY = unaff_x20 <= puVar5;
    in_ZR = puVar5 == unaff_x20;
    if (!(bool)in_CY) goto LAB_1078f1074;
    func_0x0001079145cc();
    func_0x0001078f179c();
    func_0x00010791487c();
    func_0x0001078f179c();
    if ((int)param_1 == 0) goto code_r0x0001078f1070;
    unaff_x24 = unaff_x28;
  } while (((ulong)unaff_x20 & 1) == 0);
LAB_1078f1190:
  func_0x000107914abc(unaff_x30);
  return;
LAB_1078f123c:
  puVar5 = puVar5 + 0x70;
  if (puVar5 == unaff_x24) goto LAB_1078f1190;
  func_0x000107913f88();
  puVar6 = puVar5;
  func_0x0001078f1458();
  if ((int)puVar6 != 0) {
    func_0x000107913ce4(auStack_f8);
    lVar10 = lVar9;
    do {
      func_0x000107914a98(unaff_x21 + lVar10 + 0x70);
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -0x70;
      func_0x000107913f88();
      puVar6 = auStack_f8;
      func_0x0001078f1458(puVar6,unaff_x21 + lVar10);
    } while (((ulong)puVar6 & 1) != 0);
    func_0x000107914a98();
  }
  lVar9 = lVar9 + 0x70;
  goto LAB_1078f123c;
code_r0x0001078f1070:
  if (((ulong)unaff_x20 & 1) == 0) {
LAB_1078f1074:
    func_0x0001079141b4();
    FUN_1078f0e8c();
    unaff_x26 = (undefined1 *)0x0;
  }
  goto LAB_1078f0eb4;
}



/* Entry: 1078f1ad0; end: 1078f1b73;  */

void FUN_1078f1ad0(long *param_1,undefined8 param_2)

{
  long *unaff_x22;
  
  func_0x0001004d761c(param_1,param_2,param_2);
  func_0x0001004d7694();
  func_0x0001004d76a0();
  if (*param_1 == 0) {
    func_0x0001004d76ec();
    param_1[4] = *unaff_x22;
    func_0x0001004d76fc();
    func_0x0001004d7768();
  }
  func_0x0001004d77a8();
  return;
}



/* Entry: 1078f1fb0; end: 1078f1ffb;  */

bool FUN_1078f1fb0(long param_1,long param_2,long param_3,long param_4)

{
  param_1 = param_1 + param_4 * 0x1b0;
  if ((*(int *)(param_1 + 0x28) == 2) && (*(int *)(param_1 + 0xe0) == 2)) {
    if (*(long *)(param_1 + 0xb8) != param_2 || *(long *)(param_1 + 0x170) != param_3) {
      return *(long *)(param_1 + 0x170) == param_2 && *(long *)(param_1 + 0xb8) == param_3;
    }
    return true;
  }
  return false;
}



/* Entry: 1078f3368; end: 1078f3477;  */

bool FUN_1078f3368(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  func_0x0001079142d0();
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar8 = *param_3;
  uVar9 = param_3[1];
  puVar2 = param_1;
  func_0x000107914cdc(uVar6,uVar7,uVar8,uVar9);
  iVar1 = (int)puVar2;
  if ((iVar1 != 0) || (func_0x0001078f1930(uVar6,uVar7,uVar8,uVar9,uVar4,uVar5), 0 < iVar1)) {
    func_0x000107915370(&lStack_80,param_1);
    func_0x000107914938();
    func_0x000107914a4c();
    lVar3 = lStack_90;
    func_0x0001078ebfd0(lStack_90,lStack_88,lStack_a0,lStack_98,lStack_80,lStack_78);
    if ((int)lVar3 != 0) {
      return false;
    }
    if (lStack_a0 - lStack_90 != 0 || lStack_88 != lStack_98) {
      return (lStack_80 - lStack_a0) * (lStack_a0 - lStack_90) +
             (lStack_98 - lStack_78) * (lStack_88 - lStack_98) < 1;
    }
  }
  return true;
}



/* Entry: 1078f3d34; end: 1078f3e2f;  */

void FUN_1078f3d34(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int unaff_w19;
  int unaff_w21;
  undefined8 *unaff_x22;
  undefined1 auStack_d0 [112];
  
  func_0x0001079144b8();
  func_0x000107915de8(*param_4);
  func_0x0001079138a8();
  func_0x00010791648c();
  iVar1 = (int)param_2;
  func_0x0001079138a8();
  func_0x000107915254();
  func_0x0001078f3c30();
  if ((param_2 & 1) == 0) {
    if (iVar1 == 0) {
      return;
    }
    func_0x000107913a24();
    func_0x000107913d48();
    func_0x000107914a80();
    func_0x000107914d4c(*unaff_x22);
    func_0x0001004d77a8();
    func_0x0001078f3c30();
    if (unaff_w19 == 0) {
      return;
    }
    func_0x000107913cf0(auStack_d0);
    func_0x000107913cfc();
    func_0x000107915a64();
  }
  else {
    if (iVar1 == 0) {
      func_0x000107913cf0(auStack_d0);
      func_0x000107913cfc();
      func_0x000107913e60();
      func_0x000107914d4c(*unaff_x22);
      func_0x000107915254();
      func_0x0001078f3c30();
      if (unaff_w21 == 0) {
        return;
      }
      func_0x000107913a24();
    }
    else {
      func_0x000107913cf0(auStack_d0);
    }
    func_0x000107913d48();
    func_0x0001079168c0();
  }
  func_0x000107914a98();
  return;
}



/* Entry: 1078f4328; end: 1078f437f;  */

void FUN_1078f4328(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  long unaff_x21;
  long lVar1;
  
  func_0x000107914c4c();
  if (!(bool)in_ZR) {
    func_0x0001078f4380();
    lVar1 = *(long *)(unaff_x19 + 8);
    func_0x000107913f60();
    *(long *)(unaff_x19 + 8) = lVar1 + unaff_x21;
  }
  func_0x000107914e8c();
  func_0x0001078f43b4();
  return;
}



/* Entry: 1078f45c8; end: 1078f4747;  */

long FUN_1078f45c8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x000107914d70();
  func_0x000107915bc8();
  lVar1 = extraout_x8;
  while (lVar1 != 0) {
    while (func_0x0001079147f8(), unaff_x22 = unaff_x20, (int)param_1 == 0) {
      func_0x0001079154bc();
      if ((int)param_1 == 0) goto LAB_1078f4648;
      if (*(long *)(unaff_x20 + 8) == 0) goto LAB_1078f4618;
    }
    func_0x000107915c94();
    lVar1 = extraout_x8_00;
  }
LAB_1078f4618:
  lVar1 = 0x40;
  __Znwm();
  func_0x0001079151e8();
  *(undefined8 *)(lVar1 + 0x30) = extraout_x8_01;
  *(undefined2 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(lVar1 + 0x3a) = 0;
  func_0x000107913628();
  if (extraout_x8_02 != 0) {
    *unaff_x19 = extraout_x8_02;
  }
  func_0x000107913f98();
  func_0x0001004d7750();
  unaff_x20 = unaff_x22;
LAB_1078f4648:
  return unaff_x20 + 0x38;
}



/* Entry: 1078f4acc; end: 1078f4adf;  */

void FUN_1078f4acc(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078f4d54; end: 1078f4d7b;  */

void FUN_1078f4d54(void)

{
  uint extraout_w8;
  undefined8 *unaff_x19;
  
  func_0x00010002bfa0();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001078f4d7c(*unaff_x19);
  }
  return;
}



/* Entry: 1078f5110; end: 1078f5207;  */

void FUN_1078f5110(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 auStack_f0 [112];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010791551c();
  uVar1 = unaff_x20 == 99;
  if ((unaff_x20 < 100) &&
     (uVar1 = param_3[1] - *param_3 == 0x79, 0x78 < (ulong)(param_3[1] - *param_3))) {
    func_0x000107913d54();
    uStack_58 = param_2[1];
    uStack_80 = *param_2;
    uStack_68 = param_2[3];
    uStack_70 = param_2[2];
    uStack_50 = param_2[2];
    uStack_78 = param_1;
    uStack_60 = uStack_80;
    uStack_48 = param_1;
    func_0x000107913364();
    func_0x00010791463c(&uStack_60,&uStack_80);
    func_0x0001078f50b8();
    func_0x000107915ec8();
    if (!(bool)uVar1) {
      func_0x000107913d34();
      func_0x000107916258();
      func_0x0001078f523c();
      func_0x0001079183e8();
      func_0x000107915350();
      func_0x000107914dd4();
      func_0x0001078f52bc();
      func_0x0001079149b0(auStack_f0);
      func_0x0001078f52e8();
      func_0x0001079149d8(auStack_f0);
      func_0x0001078f52e8();
    }
    func_0x000107918208();
    func_0x000107914dd4();
    func_0x0001078f52bc();
    func_0x000107918854();
    func_0x000107914dd4();
    func_0x0001078f52bc();
    func_0x000107915b60();
    func_0x0001079159d0();
    func_0x000107915b7c();
    return;
  }
  func_0x000107915d78(param_3);
  if (!(bool)uVar1) {
    func_0x000107914c78();
    lVar2 = extraout_x8;
    while (unaff_x21 != lVar2) {
      func_0x000107915d6c();
      lVar2 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar2) {
        func_0x00010791460c();
        func_0x0001078f4ea8();
        lVar2 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1078f5590; end: 1078f55af;  */

void FUN_1078f5590(void)

{
  func_0x000107913928();
  func_0x0001078f523c();
  func_0x000107917014();
  return;
}



/* Entry: 1078f59c4; end: 1078f5a57;  */

void FUN_1078f59c4(long param_1,long param_2)

{
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long lVar2;
  long unaff_x21;
  
  func_0x000107914d64();
  func_0x000107918318();
  if ((bool)in_CY) {
    func_0x000107918350((extraout_x8 - *unaff_x19) / 0x18);
    func_0x0001078f4bdc();
    lVar1 = *unaff_x19;
    unaff_x21 = unaff_x19[1];
    func_0x0001078f4c14();
    func_0x0001079178d0(param_1 + (unaff_x21 - lVar1));
    lVar2 = extraout_x8_00 + ((unaff_x19[1] - *unaff_x19) / -0x18) * 0x18;
    _memcpy(lVar2);
    lVar1 = *unaff_x19;
    *unaff_x19 = lVar2;
    unaff_x19[1] = unaff_x21;
    unaff_x19[2] = param_1 + param_2 * 0x18;
    if (lVar1 != 0) {
      __ZdlPv();
    }
  }
  else {
    func_0x0001079178d0();
  }
  unaff_x19[1] = unaff_x21;
  return;
}



/* Entry: 1078f5d68; end: 1078f5e17;  */

void FUN_1078f5d68(long param_1)

{
  long *unaff_x19;
  long lVar1;
  ulong uVar2;
  
  func_0x000107914d64();
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010791522c();
    func_0x0001078f5e18();
    lVar1 = uVar2 + 0x30;
    unaff_x19[1] = lVar1;
  }
  else {
    func_0x000107918350((long)(uVar2 - *unaff_x19) / 0x30);
    func_0x0001078f5f44();
    func_0x0001079172ec();
    func_0x000107917d94();
    func_0x0001078f5e18();
    func_0x000107915724();
    func_0x0001078f5f70();
    lVar1 = unaff_x19[1];
    func_0x000107917da0();
  }
  unaff_x19[1] = lVar1;
  return;
}



/* Entry: 1078f6188; end: 1078f6193;  */

void FUN_1078f6188(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long lVar4;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  
  func_0x000107913ad0();
  func_0x000107914c78();
  lVar2 = *param_1;
  lVar1 = param_1[1];
  func_0x0001079174dc(*(undefined8 *)(param_2 + 8));
  lVar5 = extraout_x8 + extraout_x9 * extraout_x10;
  lVar3 = lVar5;
  lVar4 = lVar2;
  while (lVar4 != lVar1) {
    func_0x0001079161c4(lVar3);
    func_0x0001079138d4();
    lVar3 = extraout_x8_00 + 0x18;
    lVar4 = extraout_x9_00 + 0x18;
  }
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x000107912734();
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar4 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar4;
  func_0x00010791351c();
  return;
}



/* Entry: 1078f6498; end: 1078f64c7;  */

bool FUN_1078f6498(long *param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  
  if (*param_1 != param_1[1]) {
    return false;
  }
  plVar4 = (long *)param_1[3];
  do {
    bVar3 = plVar4 == (long *)param_1[4];
    if (plVar4 == (long *)param_1[4]) {
      return bVar3;
    }
    lVar1 = *plVar4;
    plVar2 = plVar4 + 1;
    plVar4 = plVar4 + 3;
  } while (lVar1 == *plVar2);
  return bVar3;
}



/* Entry: 1078f8904; end: 1078f8bf7;  */

void FUN_1078f8904(double param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5,
                  long **param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  bool bVar3;
  long **pplVar4;
  long *plVar5;
  long *plVar6;
  long *extraout_x8;
  long *extraout_x8_00;
  long lVar7;
  long **pplVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 in_register_00005008;
  long *plVar13;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long **pplStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  long *plStack_b8;
  long *plStack_b0;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar5 = param_6[2];
  pplVar4 = &plStack_b8;
  func_0x0001078f4c9c();
  lVar7 = 0;
  lVar9 = 0;
  lVar10 = 0;
  plVar11 = (long *)0x0;
  pplVar8 = (long **)*param_6;
  do {
    if (pplVar8 == param_6 + 1) {
      if (plVar11 != plVar5) {
        bVar3 = plVar11 != (long *)0x0;
        if (plVar11 != (long *)0x1) {
          uStack_c8 = 0;
          plStack_f0 = param_3;
          plStack_e8 = param_4;
          plStack_e0 = (long *)param_5;
          pplStack_d8 = param_6;
          uStack_d0 = param_7;
          func_0x000107917008(plStack_b0);
          plVar11 = extraout_x8;
          if (bVar3) {
            plStack_80 = (long *)0x0;
            uStack_78 = 0;
            uStack_70 = 0;
            func_0x000107916078();
            plVar5 = extraout_x8_00;
            plVar11 = plStack_b8;
            dStack_a0 = param_1;
            uStack_98 = in_register_00005008;
            uStack_90 = param_2;
            for (; plStack_b8 != plVar5; plStack_b8 = plStack_b8 + 9) {
              func_0x000107917f50(&dStack_a0);
              func_0x0001078f503c(&plStack_80,plVar11);
              plVar11 = plVar11 + 9;
              plVar5 = plStack_b0;
            }
            func_0x000107900aa8(&dStack_a0,&plStack_80,0,&plStack_f0);
            pplVar4 = &plStack_80;
            func_0x0001078f57e8();
          }
          else {
            while (plStack_b8 != plVar11) {
              plStack_b8 = plStack_b8 + 9;
              for (plVar5 = plStack_b8; plVar5 != plVar11; plVar5 = plVar5 + 9) {
                pplVar4 = &plStack_f0;
                func_0x000107915378();
                func_0x000107900b6c();
                plVar11 = plStack_b0;
              }
            }
          }
          func_0x000107917e98();
          pplVar8 = (long **)*param_6;
          while (pplVar8 != param_6 + 1) {
            if (-1 < (long)pplVar8[0xc]) {
              pplVar4 = param_6;
              func_0x0001078f49f8();
              func_0x000107917e48();
            }
            func_0x000107914fec();
            pplVar8 = pplVar4;
          }
          return;
        }
        plVar11 = plStack_b8 + lVar10 * 9;
        plStack_e8 = (long *)plVar11[1];
        plStack_f0 = (long *)*plVar11;
        plStack_e0 = (long *)plVar11[2];
        func_0x0001078f49f8(param_6,&plStack_f0);
        pplVar4 = param_6;
        for (; plStack_b8 != plStack_b0; plStack_b8 = plStack_b8 + 9) {
          if (lVar10 != 0) {
            func_0x0001004d77a8();
            func_0x0001078f49f8();
            pplVar4[6] = plStack_e8;
            pplVar4[5] = plStack_f0;
            pplVar4[7] = plStack_e0;
            pplVar4 = param_6 + 9;
            FUN_1078f59c4(pplVar4,plStack_b8);
          }
          lVar10 = lVar10 + -1;
        }
      }
      func_0x000107917e98();
      return;
    }
    plVar12 = pplVar8[10];
    func_0x000107916430(*(undefined1 *)(pplVar8 + 0xb));
    plVar2 = plStack_b8;
    puVar1 = (undefined8 *)((long)plStack_b8 + lVar7);
    plVar13 = pplVar8[5];
    plVar6 = pplVar8[4];
    puVar1[2] = pplVar8[6];
    puVar1[1] = plVar13;
    *puVar1 = plVar6;
    puVar1[3] = param_2;
    puVar1[4] = ABS((double)plVar12);
    plVar6 = pplVar8[4];
    plVar12 = param_3;
    if (plVar6 == (long *)0x0) {
LAB_1078f89bc:
      plVar12 = (long *)(*plVar12 + (long)pplVar8[5] * 0x30);
      if (-1 < (long)pplVar8[6]) {
        plVar12 = (long *)(plVar12[3] + (long)pplVar8[6] * 0x18);
      }
LAB_1078f89e8:
      func_0x0001078f65ec(*plVar12,plVar12[1],(long)plVar2 + lVar7 + 0x28);
    }
    else {
      if (plVar6 == (long *)0x2) {
        plVar12 = pplVar8[5];
        func_0x000107900a20(plVar12,param_5);
        goto LAB_1078f89e8;
      }
      plVar12 = param_4;
      if (plVar6 == (long *)0x1) goto LAB_1078f89bc;
    }
    pplVar4 = (long **)((long)plVar2 + lVar7 + 0x28);
    func_0x0001078e9c64();
    param_1 = *(double *)((long)plVar2 + lVar7 + 0x18);
    in_register_00005008 = 0;
    if (0.0 < param_1) {
      plVar11 = (long *)((long)plVar11 + 1);
      lVar10 = lVar9;
    }
    func_0x000107915b68();
    lVar9 = lVar9 + 1;
    lVar7 = lVar7 + 0x48;
    pplVar8 = pplVar4;
  } while( true );
}



/* Entry: 1078f94a4; end: 1078f966b;  */

void FUN_1078f94a4(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar4;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153e4();
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  uVar1 = unaff_x20 + 1;
  func_0x0001079155d4();
  uVar4 = 1;
  if ((bool)in_ZR) goto LAB_1078f956c;
  uVar4 = extraout_x9 - extraout_x8 == 0x80;
  uVar2 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_1078f94ec:
    func_0x000107913f30();
    func_0x0001078f966c();
  }
  else {
    uVar2 = 0x62 < uVar1;
    uVar4 = uVar1 == 99;
    if ((99 < uVar1) || (func_0x000107913f00(), !(bool)uVar2)) goto LAB_1078f94ec;
    func_0x000107913d24();
    func_0x0001078f96f8();
    func_0x00010791354c();
    func_0x0001078f971c();
  }
  func_0x000107913ef0();
  in_CY = 0;
  if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = 0, (bool)uVar2)) {
    in_CY = 0x62 < uVar1;
    uVar4 = uVar1 == 99;
    if ((uVar1 < 100) && (func_0x000107914718(), (bool)in_CY)) {
      func_0x000107914c84();
      func_0x0001078f9724();
      func_0x000107913880();
      func_0x0001078f971c();
      func_0x000107913894();
      func_0x0001078f971c();
      goto LAB_1078f956c;
    }
  }
  func_0x000107913f20();
  func_0x0001078f966c();
  func_0x000107913f10();
  func_0x0001078f966c();
LAB_1078f956c:
  func_0x0001079155c8();
  if (!(bool)uVar4) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
        (in_CY = 0x62 < uVar1, uVar1 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x000107915ee0();
      func_0x0001078f9724();
      func_0x000107913a34();
      func_0x0001078f971c();
      func_0x000107913650();
      func_0x0001078f971c();
    }
    else {
      func_0x000107914708();
      func_0x0001078f966c();
      func_0x000107913ec0();
      func_0x0001078f966c();
    }
  }
  func_0x000107914d34(0);
  if ((((bool)in_CY) && (in_CY = 0x62 < uVar1, uVar1 < 100)) && (func_0x000107913ea0(), (bool)in_CY)
     ) {
    func_0x0001079139c4();
    func_0x0001078f971c();
  }
  else {
    func_0x0001079146f8();
    func_0x0001078f966c();
  }
  func_0x000107913e90();
  if ((((bool)in_CY) && (bVar3 = 0x62 < uVar1, uVar1 < 100)) && (func_0x000107913e80(), bVar3)) {
    func_0x00010791386c(&stack0x000000b0);
    func_0x0001078f971c();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078f966c();
  }
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return;
}



/* Entry: 1078fa414; end: 1078fa77b;  */

long * FUN_1078fa414(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,long param_5,
                    long param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [16];
  undefined8 auStack_88 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  *param_3 = param_4;
  param_3[1] = param_5;
  param_3[10] = param_7;
  param_3[0xb] = param_4;
  param_3[0xc] = param_5;
  *(undefined2 *)(param_3 + 0x11) = 0;
  func_0x0001078e9abc(param_3 + 2,*(undefined8 *)(param_4 + 0x10),param_7);
  func_0x000107915370(param_3 + 4,*(undefined8 *)(param_4 + 0x18));
  func_0x000107915370(param_3 + 6,*(undefined8 *)(param_5 + 0x10));
  plVar1 = param_3 + 8;
  plVar11 = plVar1;
  func_0x000107915370(plVar1,*(undefined8 *)(param_5 + 0x18));
  iVar7 = (int)plVar11;
  plVar16 = param_3 + 0x12;
  *plVar16 = param_4;
  uVar13 = *(undefined8 *)(param_4 + 0x10);
  uVar24 = 1;
  uVar23 = 0;
  lStack_c8 = 1;
  lStack_d0 = 0;
  func_0x000107917084(*(undefined8 *)(param_4 + 0x18));
  param_3[0x13] = param_7;
  param_3[0x14] = (long)(param_3 + 2);
  param_3[0x15] = (long)(param_3 + 4);
  *(undefined1 *)(param_3 + 0x18) = 0;
  plVar11 = param_3 + 0x19;
  *plVar11 = param_5;
  param_3[0x1a] = param_7;
  param_3[0x1b] = (long)(param_3 + 6);
  param_3[0x1c] = (long)plVar1;
  *(undefined1 *)(param_3 + 0x1f) = 0;
  param_3[0x21] = (long)plVar16;
  param_3[0x22] = (long)plVar11;
  param_3[0x24] = (long)plVar11;
  param_3[0x25] = (long)plVar16;
  lVar17 = param_3[2];
  lVar18 = param_3[3];
  lVar21 = param_3[4];
  lVar14 = param_3[5];
  lVar19 = param_3[6];
  lVar20 = param_3[7];
  lVar15 = param_3[8];
  lVar22 = param_3[9];
  uStack_c0 = 0;
  lStack_b8 = 0;
  uVar4 = lVar21 - lVar17;
  lStack_b0 = 1;
  uStack_a8 = 0;
  lVar5 = lVar15 - lVar19;
  uStack_f0 = uVar23;
  uStack_e8 = uVar24;
  uStack_e0 = param_2;
  auStack_88[0] = uVar13;
  if ((uVar4 == 0 && lVar14 == lVar18) && (lVar5 == 0 && lVar22 == lVar20)) {
    if (lVar17 == lVar19 && lVar18 == lVar20) {
      func_0x0001078ebf2c(param_3 + 0x26);
      goto LAB_1078fa640;
    }
  }
  else {
    lVar6 = lVar17;
    if (lVar21 <= lVar17) {
      lVar6 = lVar21;
    }
    lVar3 = lVar17;
    if (lVar17 <= lVar21) {
      lVar3 = lVar21;
    }
    lVar21 = lVar19;
    if (lVar15 <= lVar19) {
      lVar21 = lVar15;
    }
    lVar2 = lVar19;
    if (lVar19 <= lVar15) {
      lVar2 = lVar15;
    }
    if (lVar21 <= lVar3 && lVar6 <= lVar2) {
      lVar15 = lVar18;
      if (lVar14 <= lVar18) {
        lVar15 = lVar14;
      }
      lVar21 = lVar18;
      if (lVar18 <= lVar14) {
        lVar21 = lVar14;
      }
      lVar6 = lVar20;
      if (lVar22 <= lVar20) {
        lVar6 = lVar22;
      }
      lVar3 = lVar20;
      if (lVar20 <= lVar22) {
        lVar3 = lVar22;
      }
      if (lVar6 <= lVar21 && lVar15 <= lVar3) {
        func_0x0001079161e4();
        func_0x000107917d80();
        iVar8 = iVar7;
        func_0x0001079161e4();
        func_0x0001078ebfd0();
        uStack_78 = CONCAT44(iVar8,iVar7);
        if (iVar8 * iVar7 != 1) {
          iVar9 = iVar8;
          func_0x000107915320();
          func_0x0001078ebfd0();
          iVar10 = iVar9;
          func_0x000107915320();
          func_0x0001078ebfd0();
          uStack_70 = CONCAT44(iVar10,iVar9);
          if (iVar10 * iVar9 != 1) {
            lVar21 = lVar14 - lVar18;
            lVar15 = lVar22 - lVar20;
            if ((iVar8 == 0 && iVar7 == 0) && (iVar9 == 0 && iVar10 == 0)) {
LAB_1078fa6a8:
              uVar12 = -uVar4;
              if (-1 < (long)uVar4) {
                uVar12 = uVar4;
              }
              lVar17 = -lVar21;
              if (-1 < lVar21) {
                lVar17 = lVar21;
              }
              lVar19 = -lVar5;
              if (-1 < lVar5) {
                lVar19 = lVar5;
              }
              lVar21 = -lVar15;
              if (-1 < lVar15) {
                lVar21 = lVar15;
              }
              func_0x0001078ec038(uVar12,lVar17,lVar19,lVar21,uVar4 == 0 && lVar14 == lVar18,
                                  lVar5 == 0 && lVar22 == lVar20);
              if (0xff < ((uint)uVar12 & 0xffff)) {
                if ((uVar12 & 1) == 0) {
                  func_0x0001079179f0();
                  func_0x0001078ec0a4();
                }
                else {
                  func_0x0001079179f0();
                  func_0x0001078ec08c();
                }
                goto LAB_1078fa640;
              }
            }
            else {
              lVar6 = lVar5 * lVar21 - lVar15 * uVar4;
              if (lVar6 == 0) {
                uStack_78 = 0;
                uStack_70 = 0;
                goto LAB_1078fa6a8;
              }
              lStack_c8 = lVar15 * uVar4 - lVar5 * lVar21;
              lStack_d0 = lVar5 * (lVar18 - lVar20) + lVar15 * (lVar19 - lVar17);
              func_0x0001078ec2fc(&lStack_d0);
              lStack_b8 = (lVar17 - lVar19) * lVar21 + (lVar20 - lVar18) * uVar4;
              lStack_b0 = lVar6;
              func_0x0001078ec2fc(&lStack_b8);
            }
            func_0x0001078ec0bc(param_3 + 0x26,&uStack_78,&uStack_f0,auStack_88,auStack_98);
            goto LAB_1078fa640;
          }
        }
      }
    }
  }
  FUN_1078ebf8c(param_3 + 0x26);
LAB_1078fa640:
  param_3[0x3f] = param_6;
  param_3[0x40] = param_7;
  return param_3;
}



/* Entry: 1078fab44; end: 1078fabbf;  */

void FUN_1078fab44(void)

{
  bool bVar1;
  int extraout_w8;
  long unaff_x20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  func_0x0001079189a8();
  func_0x000107914b5c();
  func_0x000107915818();
  for (; bVar1 = unaff_x20 == 8, !bVar1; unaff_x20 = unaff_x20 + 4) {
    func_0x00010791784c();
    uVar2 = in_stack_00000010;
    uVar3 = in_stack_00000018;
    if ((bVar1) || (uVar2 = in_stack_00000000, uVar3 = in_stack_00000008, extraout_w8 == 1)) {
      in_stack_00000020 = uVar2;
      in_stack_00000028 = uVar3;
      func_0x0001078ec2fc(&stack0x00000020);
      func_0x000107916268();
    }
    else {
      uVar2 = unaff_x24;
      if (unaff_x20 != 0) {
        uVar2 = unaff_x23;
      }
      func_0x000107915768(uVar2);
    }
  }
  return;
}



/* Entry: 1078faee0; end: 1078faf9f;  */

void FUN_1078faee0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 auStack_d8 [152];
  
  func_0x000107914a04();
  if ((!(bool)in_CY || (bool)in_ZR) && (func_0x0001079147b4(), (bool)in_CY)) {
    func_0x0001079153ac();
    func_0x000107913364();
    func_0x000107913b24();
    func_0x0001078f9428();
    func_0x000107915ec8();
    if (!(bool)in_ZR) {
      func_0x0001079155e0();
      func_0x0001078fb028();
      func_0x0001079155e0();
      func_0x000107914dd4();
      func_0x0001078fb02c();
      func_0x0001079149b0(auStack_d8);
      func_0x0001078fb058();
      func_0x0001079149d8(auStack_d8);
      func_0x0001078fb058();
    }
    func_0x000107915ed4();
    func_0x000107914dd4();
    func_0x0001078fb02c();
    func_0x0001079172ac();
    func_0x000107914dd4();
    func_0x0001078fb02c();
    func_0x0001079154b4();
    func_0x000107915384();
    func_0x0001079154e4();
    return;
  }
  func_0x000107914da4();
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar1 = extraout_x8;
    while (unaff_x21 != lVar1) {
      func_0x000107915d6c();
      lVar1 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar1) {
        func_0x00010791460c();
        func_0x0001078fae78();
        lVar1 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1078fb478; end: 1078fb497;  */

void FUN_1078fb478(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153d8();
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  func_0x0001079155d4();
  uVar3 = 1;
  if ((bool)in_ZR) goto code_r0x0001078fb150;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
code_r0x0001078fb0d0:
    func_0x000107913f30();
    func_0x0001078fb250();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar1)) goto code_r0x0001078fb0d0;
    func_0x000107913d24();
    func_0x0001078f9480();
    func_0x00010791354c();
    func_0x0001078fb2ac();
  }
  func_0x000107913ef0();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x000107913ee0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914718(), (bool)in_CY)) {
      func_0x000107914c84();
      func_0x0001078f96c8();
      func_0x000107913880();
      func_0x0001078fb2ac();
      func_0x000107913894();
      func_0x0001078fb2ac();
      goto code_r0x0001078fb150;
    }
  }
  func_0x000107913f20();
  func_0x0001078fb250();
  func_0x000107913f10();
  func_0x0001078fb250();
code_r0x0001078fb150:
  func_0x0001079155c8();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x000107915ee0();
      func_0x0001078f96c8();
      func_0x000107913a34();
      func_0x0001078fb2ac();
      func_0x000107913650();
      func_0x0001078fb2ac();
    }
    else {
      func_0x000107914708();
      func_0x0001078fb250();
      func_0x000107913ec0();
      func_0x0001078fb250();
    }
  }
  func_0x000107914d34(0);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913ea0(), (bool)in_CY)) {
    func_0x0001079139c4();
    func_0x0001078fb2ac();
  }
  else {
    func_0x0001079146f8();
    func_0x0001078fb250();
  }
  func_0x000107913e90();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar2)) {
    func_0x00010791386c(&stack0x000000b0);
    func_0x0001078fb2ac();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078fb250();
  }
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return;
}



/* Entry: 1078fbc44; end: 1078fbd03;  */

undefined8 FUN_1078fbc44(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  long lVar5;
  long lVar6;
  long extraout_x10;
  long extraout_x10_00;
  long lVar7;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x000107913ca4();
  cVar1 = SBORROW8(param_2,2);
  lVar5 = param_2 + -2;
  cVar2 = lVar5 < 0;
  uVar3 = lVar5 == 0;
  if ((1 < param_2) && (func_0x0001079176d8(lVar5), cVar2 == cVar1)) {
    func_0x000107916ab4();
    lVar5 = extraout_x9;
    if (cVar2 != cVar1) {
      lVar5 = 0x18;
      if (*(long *)(extraout_x9 + 0x10) <= *(long *)(extraout_x9 + 0x28)) {
        lVar5 = 0;
      }
      lVar5 = extraout_x9 + lVar5;
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar6 = param_3[2];
    cVar2 = SBORROW8(lVar7,lVar6);
    lVar5 = lVar7 - lVar6;
    uVar3 = lVar7 == lVar6;
    if (lVar7 <= lVar6) {
      uVar10 = param_3[1];
      uVar9 = *param_3;
      do {
        cVar1 = lVar5 < 0;
        func_0x000107916b0c();
        lVar6 = extraout_x10;
        if (cVar1 != cVar2) break;
        func_0x0001079171e0();
        lVar5 = extraout_x9_00;
        if (cVar1 != cVar2) {
          lVar5 = extraout_x12;
          if (*(long *)(extraout_x9_00 + 0x10) <= *(long *)(extraout_x9_00 + 0x28)) {
            lVar5 = 0;
          }
          lVar5 = extraout_x9_00 + lVar5;
        }
        lVar7 = *(long *)(lVar5 + 0x10);
        cVar2 = SBORROW8(lVar7,extraout_x10_00);
        lVar5 = lVar7 - extraout_x10_00;
        uVar3 = lVar7 == extraout_x10_00;
        lVar6 = extraout_x10_00;
      } while (lVar7 <= extraout_x10_00);
      param_3[1] = uVar10;
      *param_3 = uVar9;
      param_3[2] = lVar6;
    }
  }
  func_0x000107913564(extraout_x8);
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010791462c();
  do {
    func_0x000107915a18();
    if ((bool)uVar3) {
      return 0xffffffff;
    }
    uVar9 = *unaff_x21;
    func_0x0001078fbd80(*unaff_x20,unaff_x20[1],uVar9,unaff_x21[1]);
    iVar4 = (int)uVar9;
    if (iVar4 == 1) {
      puVar8 = (undefined8 *)unaff_x21[3];
      do {
        if (puVar8 == (undefined8 *)unaff_x21[4]) {
          return 1;
        }
        uVar9 = *puVar8;
        func_0x0001078fbd80(*unaff_x20,unaff_x20[1],uVar9,puVar8[1]);
        puVar8 = puVar8 + 3;
      } while ((int)uVar9 == -1);
      iVar4 = -(int)uVar9;
    }
    uVar3 = 0;
    unaff_x21 = unaff_x21 + 6;
  } while (iVar4 < 0);
  return 0;
}



/* Entry: 1078fc504; end: 1078fc617;  */

void FUN_1078fc504(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long lVar2;
  long unaff_x24;
  
  func_0x000107914410();
  func_0x0001079160d0();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078fc544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedb90a)[extraout_x8] * 4 + 0x1078fc548))(1);
    return;
  }
  func_0x000107914f98();
  func_0x0001078fc3d8();
  func_0x000107917118();
  lVar2 = unaff_x19 + 0x78;
  do {
    if (lVar2 == unaff_x21) {
      return;
    }
    func_0x000107915f3c();
    func_0x0001078fc210();
    if ((int)param_1 != 0) {
      func_0x00010791505c();
      lVar2 = unaff_x24;
      do {
        func_0x0001079146d0(unaff_x19 + lVar2);
        uVar1 = lVar2 == -0x50;
        if ((bool)uVar1) break;
        func_0x0001079173cc();
        func_0x0001078fc210();
        lVar2 = lVar2 + -0x28;
      } while ((param_1 & 1) != 0);
      func_0x000107914e50();
      if ((bool)uVar1) {
        func_0x0001079171c8(unaff_x22 + 0x28);
        return;
      }
    }
    func_0x00010791748c();
    lVar2 = extraout_x8_00;
  } while( true );
}



/* Entry: 1078fc904; end: 1078fca27;  */

void FUN_1078fc904(ulong param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar4;
  char in_OV;
  bool bVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long *plVar6;
  long extraout_x9;
  long extraout_x10;
  long extraout_x11;
  long extraout_x13;
  long *plVar7;
  long *unaff_x21;
  ulong unaff_x23;
  ulong unaff_x24;
  long *plVar8;
  long lVar9;
  long unaff_x27;
  long lVar10;
  
  func_0x000107915994();
  func_0x0001079173fc();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0001079173ec();
    if ((bool)in_ZR) {
      func_0x00010791640c();
    }
    func_0x000107916ecc();
    while (unaff_x23 != unaff_x24) {
      func_0x000107913d6c(*(undefined8 *)(unaff_x23 + 0x20));
      lVar10 = extraout_x9 + (extraout_x8 & 0xf) * 0x178;
      if ((*(byte *)(lVar10 + 0x20) & 1) == 0) {
        iVar2 = *(int *)(lVar10 + 0x28);
        iVar3 = *(int *)(lVar10 + 0xd0);
        if (iVar2 != 3 || iVar3 != 3) {
          if (*(long *)(lVar10 + 0x18) < 1) {
            if (iVar2 == 1) {
              if (iVar3 != 1) goto LAB_1078fc9bc;
            }
            else if (iVar2 != 2 || iVar3 != 2) {
LAB_1078fc9bc:
              for (lVar9 = 0x28; bVar5 = lVar9 == 0x178, !bVar5; lVar9 = lVar9 + 0xa8) {
                func_0x000107914bdc(lVar10 + lVar9);
                uVar4 = (bVar5 && extraout_x8_00 == extraout_x11) && extraout_x10 == extraout_x13;
                plVar6 = unaff_x21;
                plVar8 = unaff_x21;
                if ((!bVar5 || extraout_x8_00 != extraout_x11) || extraout_x10 != extraout_x13) {
                  while (plVar7 = (long *)*plVar6, plVar7 != (long *)0x0) {
                    param_1 = (ulong)(plVar7 + 4);
                    FUN_107918928(param_1,&stack0x00000018);
                    lVar1 = unaff_x27;
                    if ((bool)uVar4) {
                      lVar1 = 0;
                    }
                    plVar6 = (long *)((long)plVar7 + lVar1);
                    if ((bool)uVar4) {
                      plVar8 = plVar7;
                    }
                  }
                  if ((unaff_x21 != plVar8) && (func_0x000107917edc(), (param_1 & 1) == 0)) {
                    func_0x0001079181dc();
                    FUN_1078fc904();
                  }
                }
              }
            }
          }
          else if (*(long *)(lVar10 + 0xb0) == *(long *)(lVar10 + 0x158)) goto LAB_1078fc9bc;
        }
      }
      func_0x00010791598c();
      unaff_x23 = param_1;
    }
  }
  return;
}



/* Entry: 1078fe218; end: 1078fe2ab;  */

undefined8 FUN_1078fe218(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0x38) != '\x01') {
    return 0;
  }
  func_0x000107915f10();
  func_0x000107913cd4();
  plVar1 = *(long **)(param_1 + 0x10);
  uVar6 = 0xffffffff;
  lVar8 = -1;
  lVar7 = -1;
  for (plVar5 = *(long **)(param_1 + 8); plVar5 != plVar1; plVar5 = plVar5 + 4) {
    lVar2 = *unaff_x21;
    lVar4 = plVar5[2];
    func_0x0001078f1ad8(lVar2,lVar4);
    if (lVar2 == 0) {
      if ((-1 < lVar7) && (lVar8 != lVar4)) goto LAB_1078fe2a0;
      lVar7 = *plVar5;
      uVar6 = (undefined4)plVar5[1];
      lVar8 = lVar4;
    }
  }
  if (lVar7 < 0) {
LAB_1078fe2a0:
    uVar3 = 0;
  }
  else {
    *unaff_x20 = lVar7;
    *unaff_x19 = uVar6;
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1078fe4c8; end: 1078fe557;  */

void FUN_1078fe4c8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107914d64();
  func_0x00010791839c();
  if ((bool)in_ZR) {
    func_0x000107918564();
    if ((bool)in_CY) {
      lVar1 = extraout_x10 - param_2 >> 2;
      if (extraout_x10 - param_2 == 0) {
        lVar1 = 1;
      }
      func_0x0001078fe698();
      func_0x000107915b70(lVar1 * 2 + 6);
      func_0x0001079135d8();
      func_0x0001078fe674();
      func_0x0001079135c0();
      func_0x0001078fe6e4();
      param_2 = *(long *)(unaff_x19 + 8);
    }
    else {
      func_0x000107913d98();
      if (!(bool)in_ZR) {
        func_0x000107916c70();
      }
      func_0x0001079181a8();
      param_2 = unaff_x21;
    }
  }
  *(undefined8 *)(param_2 + -8) = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(param_2 + -8);
  return;
}



/* Entry: 1078fe9c0; end: 1078ff6b7;  */

/* WARNING: Removing unreachable block (ram,0x0001078ff2d4) */
/* WARNING: Removing unreachable block (ram,0x0001078ff2dc) */

undefined1 * FUN_1078fe9c0(uint **param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  ulong uVar16;
  uint **ppuVar17;
  uint *puVar18;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  undefined8 extraout_x8;
  long lVar19;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar20;
  undefined8 *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar21;
  uint **extraout_x8_05;
  uint **ppuVar22;
  uint **extraout_x8_06;
  undefined1 extraout_w9;
  undefined4 uVar23;
  undefined8 *puVar24;
  undefined8 *extraout_x9;
  long lVar25;
  long extraout_x9_00;
  undefined4 uVar26;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  undefined4 extraout_w11;
  undefined1 *unaff_x20;
  uint **unaff_x21;
  uint *unaff_x23;
  uint *unaff_x24;
  uint **ppuVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  uint *puVar30;
  undefined8 in_stack_00000050;
  undefined1 auStack_7f8 [152];
  uint *puStack_760;
  uint *puStack_758;
  uint **ppuStack_750;
  uint **ppuStack_748;
  undefined1 *puStack_740;
  uint *puStack_738;
  undefined8 *puStack_730;
  undefined *puStack_728;
  uint uStack_720;
  uint *puStack_718;
  uint *puStack_710;
  undefined4 *puStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  uint *puStack_6f0;
  uint uStack_6e4;
  uint **ppuStack_6e0;
  uint uStack_6d4;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  uint *puStack_6c0;
  uint **ppuStack_6b8;
  uint **ppuStack_6b0;
  uint uStack_6a4;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  uint uStack_68c;
  uint *puStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_668;
  uint *puStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  uint uStack_644;
  uint **ppuStack_640;
  uint *puStack_638;
  long lStack_630;
  long lStack_628;
  uint *puStack_620;
  undefined1 auStack_618 [16];
  undefined4 uStack_608;
  undefined1 uStack_604;
  undefined8 uStack_600;
  undefined2 uStack_5f8;
  undefined4 auStack_5f0 [2];
  long alStack_5e8 [12];
  undefined8 uStack_588;
  long lStack_580;
  undefined8 uStack_578;
  uint *puStack_550;
  long lStack_548;
  uint **ppuStack_540;
  uint **ppuStack_538;
  uint **ppuStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined1 uStack_518;
  undefined1 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  uint **ppuStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 uStack_4b8;
  uint **ppuStack_4b0;
  uint **ppuStack_4a8;
  uint **ppuStack_4a0;
  long lStack_498;
  long lStack_490;
  uint *puStack_488;
  long lStack_480;
  uint **ppuStack_478;
  uint **ppuStack_470;
  uint **ppuStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 uStack_450;
  undefined1 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  uint **ppuStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 uStack_3f0;
  uint **ppuStack_3e8;
  uint **ppuStack_3e0;
  uint **ppuStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  uint *puStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined1 uStack_3ac;
  undefined4 auStack_398 [18];
  uint *puStack_350;
  undefined4 uStack_348;
  uint *puStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2c8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_278;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_220 [256];
  undefined1 auStack_120 [8];
  long lStack_118;
  long lStack_110;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 auStack_e8 [2];
  undefined8 auStack_d8 [2];
  undefined8 auStack_c8 [3];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [4];
  char cStack_58;
  byte bStack_57;
  uint uStack_44;
  uint uStack_3c;
  int iStack_34;
  uint uStack_30;
  undefined8 uStack_18;
  
  func_0x000107915f10();
  puVar30 = param_2;
  puVar18 = param_3;
  func_0x000107913ca4();
  puVar30 = puVar30 + 8;
  puStack_6c0 = puVar18 + 8;
  puStack_638 = puVar30;
  uStack_18 = extraout_x8;
  func_0x0001078eb5cc();
  puVar15 = (undefined1 *)0x1;
  if (((((ulong)puVar30 & 1) == 0) && ((param_2[0x18] & 1) == 0)) && ((param_3[0x18] & 1) == 0)) {
    uStack_68c = (uint)*(byte *)((long)param_1 + 0x2c);
    unaff_x23 = param_1[2];
    lVar19 = *(long *)*param_1;
    puVar24 = (undefined8 *)(lVar19 + *(long *)(param_2 + 4) * 0x30);
    if (-1 < *(long *)(param_2 + 6)) {
      func_0x000107916bf8();
      lVar19 = extraout_x8_00;
      puVar24 = extraout_x9;
    }
    puStack_660 = param_1[1];
    puStack_620 = param_1[3];
    puStack_6f0 = param_1[4];
    uStack_6c8 = *puVar24;
    uStack_6d0 = puVar24[1];
    puVar24 = (undefined8 *)(lVar19 + *(long *)(param_3 + 4) * 0x30);
    if (-1 < *(long *)(param_3 + 6)) {
      func_0x000107915928();
      puVar24 = extraout_x8_01;
    }
    uVar28 = uStack_6c8;
    lStack_668 = (long)*(int *)(param_1 + 5);
    uStack_650 = *puVar24;
    uStack_658 = puVar24[1];
    uStack_720 = *param_2;
    uStack_644 = *param_3;
    lStack_3c8 = *(long *)(param_2 + 0x10);
    lStack_3d0 = *(long *)(param_2 + 0x1a);
    puStack_718 = puStack_6c0;
    puStack_710 = unaff_x23;
    uStack_6e4 = uStack_720;
    func_0x0001078ffd1c(lStack_3c8,*(undefined8 *)(param_2 + 0x12),uStack_6c8,&ppuStack_3d8,
                        &ppuStack_3e0,&ppuStack_3e8,&lStack_3c8,&lStack_3d0);
    unaff_x21 = ppuStack_3e0;
    uStack_3f8 = uStack_6d0;
    uStack_3f0 = 1;
    uStack_400 = uVar28;
    ppuStack_408 = ppuStack_3e0;
    func_0x000107917b04();
    param_1 = ppuStack_3e0 + 2;
    ppuStack_3d8 = ppuStack_3e0;
    ppuStack_3e0 = param_1;
    func_0x000107917b04();
    puStack_708 = auStack_398;
    puStack_698 = auStack_e8;
    puStack_6a0 = auStack_c8;
    puStack_6f8 = auStack_d8;
    puStack_700 = auStack_78;
    ppuStack_6e0 = ppuStack_3e8;
    unaff_x20 = auStack_618;
    uStack_678 = 1;
    uStack_680 = 0;
    puStack_688 = param_2;
    while( true ) {
      unaff_x24 = (uint *)0x1;
      in_CY = ppuStack_6e0 <= param_1;
      in_ZR = param_1 == ppuStack_6e0;
      if ((bool)in_ZR) break;
      uVar16 = (ulong)uStack_6e4;
      func_0x0001078ebd68(uVar16,unaff_x21,puStack_6c0,unaff_x23);
      lVar19 = lStack_3c8;
      uVar28 = uStack_650;
      if ((uVar16 & 1) != 0) break;
      lStack_480 = lStack_3c8;
      ppuStack_468 = ppuStack_408;
      uStack_460 = uStack_6c8;
      uStack_458 = uStack_6d0;
      uStack_450 = 1;
      uStack_438 = 0;
      uStack_410 = *(undefined8 *)(unaff_x23 + 8);
      uStack_428 = *(undefined8 *)(unaff_x23 + 2);
      uStack_430 = *(undefined8 *)unaff_x23;
      uStack_418 = *(undefined8 *)(unaff_x23 + 6);
      uStack_420 = *(undefined8 *)(unaff_x23 + 4);
      lStack_498 = *(long *)(param_3 + 0x1a);
      lStack_490 = *(long *)(param_3 + 0x10);
      puStack_718 = puStack_638;
      uStack_720 = uStack_644;
      puStack_710 = unaff_x23;
      ppuStack_6b8 = param_1;
      ppuStack_6b0 = unaff_x21;
      puStack_488 = param_2;
      ppuStack_478 = unaff_x21;
      ppuStack_470 = param_1;
      func_0x0001078ffd1c(lStack_490,*(undefined8 *)(param_3 + 0x12),uStack_650,&ppuStack_4a0,
                          &ppuStack_4a8,&ppuStack_4b0,&lStack_490,&lStack_498);
      param_1 = ppuStack_4a8;
      uStack_4c0 = uStack_658;
      uStack_4b8 = 1;
      uStack_4c8 = uVar28;
      ppuStack_4d0 = ppuStack_4a8;
      func_0x000107917af4();
      ppuVar27 = param_1 + 2;
      ppuStack_4a0 = param_1;
      ppuStack_4a8 = ppuVar27;
      func_0x000107917af4();
      ppuStack_640 = ppuStack_4b0;
      lStack_628 = lVar19;
      while (ppuVar27 != ppuStack_640) {
        uVar16 = (ulong)uStack_644;
        func_0x0001078ebd68(uVar16,param_1,puStack_638,unaff_x23);
        lVar2 = lStack_490;
        if ((uVar16 & 1) != 0) break;
        lVar25 = *(long *)(param_2 + 4);
        lVar20 = *(long *)(param_3 + 4);
        if (((lVar25 == lVar20) && (*(long *)(param_2 + 6) == *(long *)(param_3 + 6))) &&
           (uStack_68c != 0)) {
          if (lStack_498 != lStack_3d0 + 1) {
            if ((lVar19 != 0) || (lStack_490 < *(long *)(param_2 + 0x16) + -2)) goto LAB_1078fecb4;
            lVar19 = 0;
          }
        }
        else {
LAB_1078fecb4:
          lStack_548 = lStack_490;
          ppuStack_530 = ppuStack_4d0;
          uStack_528 = uStack_650;
          uStack_520 = uStack_658;
          uStack_518 = 0;
          uStack_500 = 0;
          uStack_4d8 = *(undefined8 *)(unaff_x23 + 8);
          uStack_4f0 = *(undefined8 *)(unaff_x23 + 2);
          uStack_4f8 = *(undefined8 *)unaff_x23;
          uStack_4e0 = *(undefined8 *)(unaff_x23 + 6);
          uStack_4e8 = *(undefined8 *)(unaff_x23 + 4);
          uStack_608 = 0;
          uStack_604 = 0;
          uStack_600 = 0xffffffffffffffff;
          uStack_5f8 = 0;
          lVar19 = 0;
          puStack_550 = param_3;
          ppuStack_540 = param_1;
          ppuStack_538 = ppuVar27;
          do {
            *(undefined4 *)((long)auStack_5f0 + lVar19) = 0;
            *(undefined8 *)((long)alStack_5e8 + lVar19 + 8) = 0xffffffffffffffff;
            *(undefined8 *)((long)alStack_5e8 + lVar19) = 0xffffffffffffffff;
            *(undefined8 *)((long)alStack_5e8 + lVar19 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)((long)alStack_5e8 + lVar19 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)((long)alStack_5e8 + lVar19 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)((long)alStack_5e8 + lVar19 + 0x30) = uStack_678;
            *(undefined8 *)((long)alStack_5e8 + lVar19 + 0x28) = uStack_680;
            lVar1 = lVar19 + 0x50;
            *(undefined8 *)((long)alStack_5e8 + lVar19 + 0x38) = 0;
            *(undefined8 *)((long)alStack_5e8 + lVar19 + 0x40) = 0;
            lVar19 = lVar1;
          } while (lVar1 != 0xa0);
          alStack_5e8[2] = *(long *)(param_2 + 6);
          alStack_5e8[0] = lStack_668;
          alStack_5e8[3] = lStack_628;
          uStack_588 = *(undefined8 *)(param_3 + 6);
          alStack_5e8[4] = 0xffffffffffffffff;
          alStack_5e8[10] = lStack_668;
          lStack_580 = lVar2;
          uStack_578 = 0xffffffffffffffff;
          lStack_630 = *(long *)(puStack_620 + 10);
          ppuVar17 = &puStack_488;
          alStack_5e8[1] = lVar25;
          alStack_5e8[0xb] = lVar20;
          FUN_1078fa414(auStack_220,ppuVar17,&puStack_550,puStack_660,unaff_x23);
          cVar3 = cStack_58;
          if (cStack_58 == 'd') goto LAB_1078ff53c;
          func_0x000107917ac0(&puStack_3c0);
          uVar12 = uStack_30;
          if (cVar3 == 'i') {
            uStack_3b0 = 2;
            func_0x00010791754c(*puStack_698);
            func_0x00010791628c(*extraout_x8_02);
            *(undefined8 *)(extraout_x10 + 0xb0) = uStack_a8;
            *(undefined8 *)(extraout_x10 + 0xa8) = uStack_b0;
            *(undefined8 *)(extraout_x10 + 0xb8) = uStack_a0;
            lVar19 = 0x28;
            if (uStack_3c != 1) {
              lVar19 = 0x78;
            }
            *(undefined4 *)(extraout_x10 + lVar19) = 1;
            lVar19 = 0x78;
            if (uStack_3c != 1) {
              lVar19 = 0x28;
            }
            *(undefined4 *)(extraout_x10 + lVar19) = extraout_w11;
            goto LAB_1078ff530;
          }
          uVar4 = cVar3 == 't';
          if ((bool)uVar4) {
            func_0x0001078ffd64(&puStack_3c0,3,auStack_f0,&cStack_58);
            lVar19 = lStack_118;
            func_0x0001078fac5c(lStack_118,*(undefined8 *)(lStack_110 + 0x10),
                                *(undefined8 *)(lStack_110 + 0x18));
            uVar12 = uStack_3c;
            uVar8 = (uint)lVar19;
            uStack_6a4 = uVar8;
            func_0x000107915564();
            uVar9 = uVar8;
            func_0x0001079188a4();
            if ((bool)uVar4) {
              func_0x000107916898();
              if (uVar9 == uVar12) {
                if (uStack_6a4 == 0) {
                  uStack_348 = 1;
                  if (uVar8 != 1) {
                    uStack_348 = 2;
                  }
                  auStack_398[0] = 3;
                }
                else {
                  if (uStack_6a4 != uVar8) goto LAB_1078ff1ac;
                  auStack_398[0] = 1;
                  if (uVar8 != 1) {
                    auStack_398[0] = 2;
                  }
                  uStack_3ac = 1;
                  uStack_348 = auStack_398[0];
                }
              }
              else {
LAB_1078ff1ac:
                if (uVar9 == uVar8) {
                  uVar12 = (uint)auStack_120;
                  func_0x0001078fac84();
                  if (uVar12 == 0) goto LAB_1078ff524;
                  if (uVar12 == uVar8) {
                    auStack_398[0] = 1;
                    if (uVar8 != 1) {
                      auStack_398[0] = 2;
                    }
                    uStack_348 = 1;
                    if (uVar8 == 1) {
                      uStack_348 = 2;
                    }
                    goto LAB_1078ff1e0;
                  }
                }
                auStack_398[0] = 1;
                if (uVar8 == 1) {
                  auStack_398[0] = 2;
                }
                uStack_348 = 1;
                if (uVar8 != 1) {
                  uStack_348 = 2;
                }
              }
            }
            else {
              uVar9 = (uint)auStack_120;
              func_0x0001078fac84();
              uStack_6d4 = uVar9;
              func_0x000107916898();
              uVar7 = uVar9;
              func_0x00010791735c();
              bVar5 = uVar8 == 0;
              bVar6 = uVar7 * uVar12 == 1;
              if ((uVar9 == uVar12 || uVar9 == uVar8) ||
                 ((uVar8 == 0 && uVar12 == 0 && (uVar9 != 0xffffffff)))) {
                if (uStack_6d4 == 0 && (!bVar5 || bVar6)) {
LAB_1078ff524:
                  auStack_398[0] = 4;
                  uStack_348 = 4;
                }
                else if (uStack_6a4 == 0) {
                  uVar23 = 1;
                  if (uVar7 == 1) {
                    uVar23 = 2;
                  }
                  uStack_348 = 3;
                  if (!bVar5 || bVar6) {
                    uStack_348 = uVar23;
                  }
                  auStack_398[0] = 3;
                }
                else if (uStack_6a4 == uStack_6d4 && uVar7 * uStack_6a4 != -1) {
                  auStack_398[0] = 1;
                  if (uVar7 != 1) {
                    auStack_398[0] = 2;
                  }
                  uVar23 = 1;
                  if (uVar7 == 1) {
                    uVar23 = 2;
                  }
                  uStack_348 = 3;
                  if (!bVar5 || bVar6) {
                    uStack_348 = uVar23;
                  }
                }
                else {
                  if (uStack_6d4 + uVar7 == 0) {
                    auStack_398[0] = 1;
                    if (uVar7 == 1) {
                      auStack_398[0] = 2;
                    }
                    uStack_348 = 1;
                    if (uVar7 != 1) {
                      uStack_348 = 2;
                    }
                  }
                  else {
                    if (uStack_6a4 != -uVar7) goto LAB_1078ff530;
                    auStack_398[0] = 1;
                    if (uVar7 == 1) {
                      auStack_398[0] = 2;
                    }
                    uStack_348 = auStack_398[0];
                    if (bVar5 && !bVar6) goto LAB_1078ff450;
                  }
LAB_1078ff1e0:
                  uStack_3ac = 1;
                }
              }
              else {
                auStack_398[0] = 1;
                if (uVar7 == 1) {
                  auStack_398[0] = 2;
                }
                uVar23 = 1;
                if (uVar8 != 1 && uVar12 != 1) {
                  uVar23 = 2;
                }
                uStack_348 = 3;
                if (!bVar5 || bVar6) {
LAB_1078ff248:
                  uStack_348 = uVar23;
                  uStack_3ac = 1;
                }
              }
            }
            goto LAB_1078ff530;
          }
          if (cVar3 == 'm') {
            ppuVar17 = &puStack_3c0;
            func_0x0001078ffd64(ppuVar17,4,auStack_f0,&cStack_58);
            uVar8 = uStack_3c;
            uVar9 = uStack_44;
            uVar7 = (uint)ppuVar17;
            if (uVar12 == 1) {
              func_0x000107915564();
              if (uVar8 + uVar7 == 0) {
                lVar19 = 0x28;
                if (uVar7 != 0xffffffff) {
                  lVar19 = 0x78;
                }
                *(undefined4 *)((long)&puStack_3c0 + lVar19) = 1;
                lVar19 = 0x78;
                if (uVar7 != 0xffffffff) {
                  lVar19 = 0x28;
                }
LAB_1078fefac:
                *(undefined4 *)((long)&puStack_3c0 + lVar19) = 2;
              }
              else {
                func_0x00010791735c();
                func_0x000107918338();
                iVar13 = extraout_w8 + 0x100;
                func_0x0001078fac0c();
                if ((uVar7 & uVar8) == 0xffffffff) {
LAB_1078ff19c:
                  auStack_398[0] = 2;
                  uStack_348 = 2;
                  uVar23 = uStack_348;
                  goto LAB_1078ff248;
                }
                if (uVar8 == uVar7 && uVar8 == 1) {
                  uVar4 = iVar13 == 0;
                  bVar5 = !(bool)uVar4;
                  func_0x0001079188a4();
                  bVar6 = bVar5;
                  if ((bool)uVar4) {
                    func_0x0001079138f0(lStack_118);
                    func_0x000107918338();
                    iVar14 = extraout_w8_01 + 0x100;
                    func_0x0001078fac34();
                    func_0x000107916d00();
                    lVar19 = lStack_118;
                    if ((bool)uVar4) {
LAB_1078ff4ec:
                      func_0x0001079147d0(lVar19);
                      bVar6 = (bool)(bVar5 ^ 1);
                      if (iVar14 * iVar13 != -1) {
                        bVar6 = bVar5;
                      }
                    }
                  }
LAB_1078ff500:
                  func_0x000107917654(bVar6 * 'P');
                  uStack_3ac = extraout_w9;
                }
                else if (uVar7 == 0) {
                  if (uVar8 == 1) goto LAB_1078ff524;
                  auStack_398[0] = 2;
LAB_1078ff450:
                  uStack_348 = 3;
                }
                else {
LAB_1078ff194:
                  uStack_3b0 = 8;
                }
              }
            }
            else {
              uVar28 = *(undefined8 *)(lStack_100 + 0x10);
              func_0x0001078fabc0(uVar28,*(undefined8 *)(lStack_100 + 0x18),uStack_f8);
              uVar8 = (uint)uVar28;
              if (uVar9 + uVar8 == 0) {
                lVar19 = 0x78;
                if (uVar8 != 0xffffffff) {
                  lVar19 = 0x28;
                }
                *(undefined4 *)((long)&puStack_3c0 + lVar19) = 1;
                lVar19 = 0x28;
                if (uVar8 != 0xffffffff) {
                  lVar19 = 0x78;
                }
                goto LAB_1078fefac;
              }
              func_0x0001078fabec(uStack_f8);
              func_0x000107918338();
              iVar13 = extraout_w8_00 + 0x118;
              func_0x0001078fac0c();
              if ((uVar8 & uVar9) == 0xffffffff && uVar12 == 1) goto LAB_1078ff19c;
              if ((uVar9 == 1 && uVar8 == 1) && uVar12 == 0xffffffff) {
                auStack_398[0] = 3;
                if (iVar13 == -1) {
                  auStack_398[0] = 1;
                }
                uStack_348 = 1;
                uVar23 = uStack_348;
                goto LAB_1078ff248;
              }
              if (uVar9 == uVar8 && uVar9 == uVar12) {
                uVar4 = iVar13 == 0;
                bVar5 = (uVar12 == 1) != !(bool)uVar4;
                func_0x0001079188a4();
                bVar6 = bVar5;
                if ((bool)uVar4) {
                  func_0x0001079138f0(lStack_100);
                  func_0x000107918338();
                  iVar14 = extraout_w8_02 + 0x118;
                  func_0x0001078fac34();
                  func_0x000107916d00();
                  lVar19 = lStack_100;
                  if ((bool)uVar4) goto LAB_1078ff4ec;
                }
                goto LAB_1078ff500;
              }
              if (uVar8 != 0) goto LAB_1078ff194;
              if (uVar9 == uVar12) goto LAB_1078ff524;
              uStack_348 = 1;
              if (uVar12 == 1) {
                uStack_348 = 2;
              }
              auStack_398[0] = 3;
            }
LAB_1078ff530:
            ppuVar17 = &puStack_3c0;
LAB_1078ff534:
            func_0x0001078ffde0(puStack_620);
          }
          else {
            if (cVar3 != 'c') {
              if ((cVar3 != 'e') || ((bStack_57 & 1) != 0)) goto LAB_1078ff53c;
LAB_1078ff0e8:
              uVar4 = 1;
              puVar15 = auStack_f0;
              func_0x0001078ed470();
              uStack_3b0 = 6;
              uVar29 = (puStack_698 + ((ulong)puVar15 & 0xffffffff) * 2)[1];
              uVar28 = puStack_698[((ulong)puVar15 & 0xffffffff) * 2];
              func_0x00010791754c();
              func_0x000107914f24();
              func_0x0001079144a4();
              *(undefined8 *)(extraout_x10_01 + 0xb0) = uVar29;
              *(undefined8 *)(extraout_x10_01 + 0xa8) = uVar28;
              *(undefined8 *)(extraout_x10_01 + 0xb8) = *(undefined8 *)(extraout_x8_04 + 0x28);
              iVar13 = (int)auStack_120;
              func_0x0001078fac84();
              iVar14 = iVar13;
              func_0x000107916898();
              iVar11 = iVar14;
              func_0x000107915564();
              if ((iVar13 == 0) && (uVar4 = iVar14 == iVar11, (bool)uVar4)) {
                uStack_348 = 4;
                auStack_398[0] = 4;
              }
              else {
                func_0x0001079188a4();
                if (!(bool)uVar4) {
                  iVar14 = iVar13;
                }
                auStack_398[0] = 1;
                if (iVar14 == -1) {
                  auStack_398[0] = 2;
                }
                uStack_348 = 1;
                if (iVar14 != -1) {
                  uStack_348 = 2;
                }
              }
              if (cVar3 == 'c') {
                uStack_3b0 = 5;
              }
              goto LAB_1078ff530;
            }
            if ((bStack_57 & 1) == 0) {
              if (iStack_34 != 0) {
                puVar15 = auStack_f0;
                func_0x0001078ed470();
                iVar10 = (int)puVar15;
                uStack_3b0 = 5;
                uVar29 = (puStack_698 + ((ulong)puVar15 & 0xffffffff) * 2)[1];
                uVar28 = puStack_698[((ulong)puVar15 & 0xffffffff) * 2];
                func_0x00010791754c();
                func_0x000107914f24();
                func_0x0001079144a4();
                iVar14 = iStack_34;
                *(undefined8 *)(extraout_x10_00 + 0xb0) = uVar29;
                *(undefined8 *)(extraout_x10_00 + 0xa8) = uVar28;
                *(undefined8 *)(extraout_x10_00 + 0xb8) = *(undefined8 *)(extraout_x8_03 + 0x28);
                func_0x000107916898();
                iVar11 = iVar10;
                func_0x00010791735c();
                iVar13 = iVar10;
                if (iVar14 != 1) {
                  iVar13 = iVar11;
                }
                iVar13 = iVar13 * iVar14;
                uVar23 = 1;
                if (iVar13 != 1) {
                  uVar23 = 2;
                }
                uVar26 = 1;
                if (iVar13 == 1) {
                  uVar26 = 2;
                }
                uStack_348 = 4;
                auStack_398[0] = 4;
                if (iVar13 != 0) {
                  uStack_348 = uVar26;
                  auStack_398[0] = uVar23;
                }
                ppuVar17 = ppuStack_470;
                if (iVar10 == 0) {
                  ppuVar17 = &puStack_488;
                  func_0x0001078fa77c();
                }
                puVar30 = *ppuVar17;
                func_0x00010791509c(puStack_3c0,uStack_3b8,puVar30,ppuVar17[1]);
                puStack_350 = puVar30;
                if (iVar11 == 0) {
                  func_0x0001078fa77c();
                }
                func_0x000107915078();
                goto LAB_1078ff530;
              }
              goto LAB_1078ff0e8;
            }
            iVar13 = (int)&puStack_2f0;
            func_0x000107917ac0();
            uVar12 = uStack_30;
            if (iStack_34 == 1) {
              func_0x000107916898();
              if (iVar13 == 1) {
                uStack_2c8 = 2;
              }
              else {
                bVar5 = iVar13 == 0;
                iVar13 = 0;
                if (bVar5) goto LAB_1078ff3b8;
                uStack_2c8 = 1;
              }
              uStack_278 = 3;
              uStack_2e0 = 5;
              uStack_2e8 = puStack_6f8[1];
              puStack_2f0 = (uint *)*puStack_6f8;
              uStack_290 = uStack_88;
              uStack_298 = uStack_90;
              uStack_288 = uStack_80;
              uStack_240 = puStack_700[1];
              uStack_248 = *puStack_700;
              uStack_238 = puStack_700[2];
              ppuVar17 = &puStack_2f0;
              puVar30 = puStack_620;
              func_0x0001078ffde0();
              iVar13 = (int)puVar30;
            }
LAB_1078ff3b8:
            if (uVar12 == 1) {
              func_0x00010791735c();
              if (iVar13 == 1) {
                uStack_278 = 2;
              }
              else {
                if (iVar13 == 0) goto LAB_1078ff53c;
                uStack_278 = 1;
              }
              uStack_2c8 = 3;
              uStack_2e0 = 5;
              uStack_2e8 = puStack_698[1];
              puStack_2f0 = (uint *)*puStack_698;
              func_0x00010791628c(*puStack_6a0);
              uVar28 = *(undefined8 *)(extraout_x9_00 + 0x170);
              *(undefined8 *)(extraout_x10_02 + 0xb0) = *(undefined8 *)(extraout_x9_00 + 0x178);
              *(undefined8 *)(extraout_x10_02 + 0xa8) = uVar28;
              *(undefined8 *)(extraout_x10_02 + 0xb8) = *(undefined8 *)(extraout_x9_00 + 0x180);
              ppuVar17 = &puStack_2f0;
              goto LAB_1078ff534;
            }
          }
LAB_1078ff53c:
          unaff_x24 = puStack_620;
          func_0x000107900104();
          ppuVar22 = ppuVar17;
          if (lStack_630 != 0) {
            uVar16 = ((long)ppuVar17 - *(long *)unaff_x24) / 200 + lStack_630;
            if ((long)uVar16 < 1) {
              uVar21 = (0x13 - uVar16) / 0x14;
              unaff_x24 = unaff_x24 + uVar21 * -2;
              ppuVar22 = (uint **)(*(long *)unaff_x24 + (uVar21 * 0x14 - (0x13 - uVar16)) * 200 +
                                  0xed8);
            }
            else {
              unaff_x24 = unaff_x24 + (uVar16 / 0x14) * 2;
              ppuVar22 = (uint **)(*(long *)unaff_x24 + (uVar16 % 0x14) * 200);
            }
          }
          unaff_x21 = (uint **)0xc8;
          puVar30 = puStack_620;
          func_0x0001078fffb4();
          lVar19 = lStack_628;
          param_2 = puStack_688;
          if (ppuVar17 != ppuVar22) {
            uVar21 = ((long)ppuVar17 - *(long *)puVar30) / 200 +
                     ((long)puVar30 - (long)unaff_x24 >> 3) * 0x14;
            uVar16 = ((long)ppuVar22 - *(long *)unaff_x24) / 200;
            in_CY = uVar16 <= uVar21;
            in_ZR = uVar21 == uVar16;
            if (!(bool)in_ZR) {
              puVar15 = (undefined1 *)0x0;
              *(undefined1 *)puStack_6f0 = 1;
              goto LAB_1078ff69c;
            }
          }
        }
        lVar20 = lStack_498;
        param_1 = param_1 + 2;
        ppuVar27 = ppuVar27 + 2;
        lStack_490 = lVar2 + 1;
        ppuStack_4a8 = ppuVar27;
        ppuStack_4a0 = param_1;
        func_0x000107917af4();
        lStack_498 = lVar20 + 1;
      }
      unaff_x21 = ppuStack_6b0 + 2;
      param_1 = ppuStack_6b8 + 2;
      lStack_3c8 = lStack_628 + 1;
      ppuStack_3e0 = param_1;
      ppuStack_3d8 = unaff_x21;
      func_0x000107917b04();
      lStack_3d0 = lStack_3d0 + 1;
    }
    puVar15 = (undefined1 *)0x1;
  }
LAB_1078ff69c:
  func_0x000107913564(uStack_18);
  if ((bool)in_ZR) {
    return puVar15;
  }
  ___stack_chk_fail();
  puStack_728 = &UNK_1078ff6b8;
  ppuStack_750 = param_1;
  ppuStack_748 = unaff_x21;
  puStack_740 = unaff_x20;
  puStack_738 = param_3;
  puStack_730 = &stack0x00000050;
  func_0x000107914a04();
  if (((bool)in_CY && !(bool)in_ZR) || (func_0x0001079147b4(), !(bool)in_CY)) {
    func_0x000107914da4();
    ppuVar17 = ppuStack_748;
    ppuVar27 = ppuStack_750;
    puStack_760 = unaff_x24;
    puStack_758 = unaff_x23;
    func_0x000107915d78();
    if (!(bool)in_ZR) {
      func_0x000107914c78();
      ppuVar22 = extraout_x8_05;
      while (uVar4 = ppuVar17 == ppuVar22, !(bool)uVar4) {
        func_0x000107915d6c();
        while (func_0x000107916f18(), ppuVar22 = extraout_x8_06, ppuVar17 = ppuVar27, !(bool)uVar4)
        {
          func_0x00010791460c();
          FUN_1078fe9c0();
          if (((ulong)puVar15 & 1) == 0) {
            return (undefined1 *)0x0;
          }
        }
      }
    }
    return (undefined1 *)0x1;
  }
  func_0x0001079153ac();
  func_0x000107913364();
  func_0x000107913b24();
  func_0x0001078f9428();
  func_0x000107915ec8();
  if ((bool)in_ZR) {
code_r0x0001078ff72c:
    func_0x000107915ed4();
    func_0x000107914dd4();
    func_0x0001078ff82c();
    if ((int)puVar15 != 0) {
      func_0x0001079172ac();
      func_0x000107914dd4();
      func_0x0001078ff82c();
      goto code_r0x0001078ff76c;
    }
  }
  else {
    func_0x0001079155e0();
    iVar13 = (int)puVar15;
    func_0x0001078fb028();
    func_0x0001079155e0();
    func_0x000107914dd4();
    func_0x0001078ff82c();
    if (iVar13 != 0) {
      iVar13 = (int)auStack_7f8;
      func_0x0001079149b0();
      func_0x0001078ff858();
      if (iVar13 != 0) {
        puVar15 = auStack_7f8;
        func_0x0001079149d8();
        func_0x0001078ff858();
        if (((ulong)puVar15 & 1) != 0) goto code_r0x0001078ff72c;
      }
    }
  }
  puVar15 = (undefined1 *)0x0;
code_r0x0001078ff76c:
  func_0x0001079154b4();
  func_0x000107915384();
  func_0x0001079154e4();
  return puVar15;
}



/* Entry: 1078ffb0c; end: 1078ffd13;  */

undefined8 FUN_1078ffb0c(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  iVar3 = (int)&stack0x00000000;
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153e4();
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  func_0x0001079155d4();
  if ((bool)in_ZR) {
LAB_1078ffbe4:
    func_0x0001079155c8();
    if ((bool)in_ZR) {
      func_0x0001079181f0();
LAB_1078ffc54:
      iVar3 = (int)param_1;
      uVar2 = 0x7f < unaff_x21;
      if ((bool)uVar2) {
LAB_1078ffc5c:
        iVar3 = (int)param_1;
        uVar2 = 0x62 < unaff_x20;
        if (99 < unaff_x20) goto LAB_1078ffc7c;
        func_0x000107913ea0();
        iVar3 = (int)param_1;
        if (!(bool)uVar2) goto LAB_1078ffc7c;
        func_0x0001079139c4();
        func_0x0001078ffd14();
        iVar3 = (int)param_1;
        if (((ulong)param_1 & 1) == 0) goto LAB_1078ffcc4;
      }
      else {
LAB_1078ffc7c:
        func_0x0001079146f8();
        func_0x0001078ffa94();
        if (iVar3 == 0) goto LAB_1078ffcc4;
      }
      func_0x000107913e90();
      if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
         (func_0x000107913e80(), bVar1)) {
        uVar4 = 0;
        func_0x00010791386c();
        func_0x0001078ffd14();
        if ((uVar4 & 1) != 0) {
LAB_1078ffc9c:
          uVar5 = 1;
          goto LAB_1078ffcc8;
        }
      }
      else {
        func_0x000107913eb0();
        func_0x0001078ffa94();
        if (iVar3 != 0) goto LAB_1078ffc9c;
      }
    }
    else {
      func_0x0001079158a8();
      if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
          (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), bVar1)) {
        func_0x000107915ee0();
        func_0x0001078f9724();
        func_0x000107913a34();
        func_0x0001078ffd14();
        if ((int)param_1 != 0) {
          func_0x000107913650();
          func_0x0001078ffd14();
          if (((ulong)param_1 & 1) != 0) goto LAB_1078ffc5c;
        }
      }
      else {
        func_0x000107914708();
        func_0x0001078ffa94();
        if ((int)param_1 != 0) {
          func_0x000107913ec0();
          func_0x0001078ffa94();
          if ((int)param_1 != 0) goto LAB_1078ffc54;
        }
      }
    }
  }
  else {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto LAB_1078ffb4c;
      func_0x000107913d24();
      func_0x0001078f96f8();
      func_0x00010791354c();
      func_0x0001078ffd14();
      if (((ulong)param_1 & 1) != 0) goto LAB_1078ffb80;
    }
    else {
LAB_1078ffb4c:
      func_0x000107913f30();
      func_0x0001078ffa94();
      if ((int)param_1 != 0) {
LAB_1078ffb80:
        func_0x000107913ef0();
        in_CY = false;
        if ((bool)uVar2) {
          func_0x000107913ee0();
          in_CY = false;
          if ((bool)uVar2) {
            in_CY = 0x62 < unaff_x20;
            in_ZR = unaff_x20 == 99;
            if (unaff_x20 < 100) {
              in_CY = 0x78 < unaff_x21;
              in_ZR = unaff_x21 == 0x79;
              if ((bool)in_CY) {
                func_0x000107914c84();
                func_0x0001078f9724();
                func_0x000107913880();
                func_0x0001078ffd14();
                if (iVar3 != 0) {
                  func_0x000107913894();
                  func_0x0001078ffd14();
                  param_1 = (undefined1 *)register0x00000008;
                  if (((ulong)register0x00000008 & 1) != 0) goto LAB_1078ffbe4;
                }
                goto LAB_1078ffcc4;
              }
            }
          }
        }
        func_0x000107913f20();
        func_0x0001078ffa94();
        if ((int)param_1 != 0) {
          func_0x000107913f10();
          func_0x0001078ffa94();
          if ((int)param_1 != 0) goto LAB_1078ffbe4;
        }
      }
    }
  }
LAB_1078ffcc4:
  uVar5 = 0;
LAB_1078ffcc8:
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return uVar5;
}



/* Entry: 107900080; end: 107900103;  */

void FUN_107900080(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    func_0x00010791464c();
    return;
  }
  func_0x000104bd35f4();
  func_0x0001004d7774();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107900258; end: 1079002bb;  */

undefined8 * FUN_107900258(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_1;
  func_0x00010791751c();
  *puVar1 = extraout_x8;
  param_1[1] = &PTR_DAT_1109ea0e8;
  func_0x000105301370(puVar1 + 2,param_2 + 0x10);
  *param_1 = &PTR_DAT_1109ea070;
  param_1[1] = &PTR_DAT_1109ea0a0;
  param_1[2] = &PTR_DAT_1109ea0c8;
  return param_1;
}



/* Entry: 1079005d8; end: 107900633;  */

long FUN_1079005d8(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  long *extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long lVar4;
  
  func_0x000107917834();
  plVar3 = extraout_x8;
  while( true ) {
    iVar2 = (int)param_1;
    lVar4 = *plVar3;
    if (lVar4 == 0) break;
    param_1 = lVar4 + 0x20;
    FUN_107918928();
    lVar1 = unaff_x22;
    if ((bool)in_ZR) {
      lVar1 = 0;
    }
    plVar3 = (long *)(lVar4 + lVar1);
    if ((bool)in_ZR) {
      unaff_x19 = lVar4;
    }
  }
  if ((unaff_x21 == unaff_x19) || (func_0x000107917c8c(), iVar2 != 0)) {
    unaff_x19 = unaff_x21;
  }
  return unaff_x19;
}



/* Entry: 107900918; end: 10790093f;  */

void FUN_107900918(void)

{
  uint extraout_w8;
  undefined8 *unaff_x19;
  
  func_0x00010002bfa0();
  if ((extraout_w8 & 1) == 0) {
    FUN_1078f4acc(*unaff_x19);
  }
  return;
}



/* Entry: 107900d20; end: 107900e17;  */

void FUN_107900d20(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 auStack_f0 [112];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010791551c();
  uVar1 = unaff_x20 == 99;
  if ((unaff_x20 < 100) &&
     (uVar1 = param_3[1] - *param_3 == 0x79, 0x78 < (ulong)(param_3[1] - *param_3))) {
    func_0x000107913d54();
    uStack_58 = param_2[1];
    uStack_80 = *param_2;
    uStack_68 = param_2[3];
    uStack_70 = param_2[2];
    uStack_50 = param_2[2];
    uStack_78 = param_1;
    uStack_60 = uStack_80;
    uStack_48 = param_1;
    func_0x000107913364();
    func_0x00010791463c(&uStack_60,&uStack_80);
    func_0x000107900cc8();
    func_0x000107915ec8();
    if (!(bool)uVar1) {
      func_0x000107913d34();
      func_0x000107916258();
      func_0x000107900e4c();
      func_0x0001079183e8();
      func_0x000107915350();
      func_0x000107914dd4();
      func_0x000107900ecc();
      func_0x0001079149b0(auStack_f0);
      func_0x000107900ef8();
      func_0x0001079149d8(auStack_f0);
      func_0x000107900ef8();
    }
    func_0x000107918208();
    func_0x000107914dd4();
    func_0x000107900ecc();
    func_0x000107918854();
    func_0x000107914dd4();
    func_0x000107900ecc();
    func_0x000107915b60();
    func_0x0001079159d0();
    func_0x000107915b7c();
    return;
  }
  func_0x000107915d78(param_3);
  if (!(bool)uVar1) {
    func_0x000107914c78();
    lVar2 = extraout_x8;
    while (unaff_x21 != lVar2) {
      func_0x000107915d6c();
      lVar2 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar2) {
        func_0x00010791460c();
        func_0x000107900b6c();
        lVar2 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1079011a0; end: 1079011bf;  */

void FUN_1079011a0(void)

{
  func_0x000107913928();
  func_0x000107900e4c();
  func_0x000107917014();
  return;
}



/* Entry: 107901640; end: 107901673;  */

void FUN_107901640(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107914c78();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000107912734();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107902020; end: 107902047;  */

void FUN_107902020(void)

{
  uint extraout_w8;
  undefined8 *unaff_x19;
  
  func_0x00010002bfa0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107902048(*unaff_x19);
  }
  return;
}



/* Entry: 107902710; end: 1079027bf;  */

/* WARNING: Possible PIC construction at 0x0001079027b8: Changing call to branch */

void FUN_107902710(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x24;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [120];
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
  
  func_0x000107917a38();
  func_0x0001079145b8();
  if (!(bool)in_CY) {
    func_0x000107915248();
    func_0x000107916ebc();
    lVar3 = unaff_x22 + 0x78;
    goto LAB_1079027ac;
  }
  func_0x0001079171d4(0x222222222222222);
  func_0x0001079146e8();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000107913dbc();
    func_0x000107916a48();
    if (unaff_x24 == 0) {
      param_1 = (undefined8 *)0x0;
    }
    else {
      in_CY = extraout_x8 <= unaff_x24;
      in_ZR = unaff_x24 == extraout_x8;
      if ((bool)in_CY && !(bool)in_ZR) {
        func_0x000104bd35f4();
        goto code_r0x0001079027c0;
      }
      func_0x000107917be8();
    }
    func_0x000107914eac();
    func_0x000107916ebc();
    lVar3 = (long)param_1 + unaff_x22 + 0x78;
    func_0x0001079138bc(0xffffffffffffff88);
    func_0x000107916e4c();
    if (unaff_x20 != 0) {
      func_0x000107914d94();
    }
LAB_1079027ac:
    *(long *)(unaff_x19 + 8) = lVar3;
    return;
  }
code_r0x0001079027c0:
  func_0x000107913ad0();
  func_0x000107913cb4();
  uVar4 = *param_1;
  uVar5 = 0;
  func_0x0001079143ec(uVar4,param_1[2]);
  uVar7 = param_1[1];
  uVar6 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = uVar4;
  uStack_98 = uVar7;
  uStack_80 = uVar6;
  uStack_78 = uVar7;
  uStack_70 = uVar4;
  uStack_68 = uStack_88;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x000107902c2c();
  func_0x000107913794();
  func_0x000107902c98();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto code_r0x000107902834;
      func_0x000107916ef0();
      func_0x000107913df4();
      func_0x000107902f98();
      func_0x000107915b2c();
      func_0x00010791354c();
      func_0x000107902d04();
    }
    else {
code_r0x000107902834:
      func_0x000107913f30();
      FUN_107902f14();
    }
    func_0x000107913ef0();
    in_CY = false;
    if ((bool)uVar2) {
      func_0x000107913ee0();
      in_CY = false;
      if ((bool)uVar2) {
        in_CY = 0x62 < unaff_x20;
        in_ZR = unaff_x20 == 99;
        if (unaff_x20 < 100) {
          in_CY = 0x78 < unaff_x21;
          in_ZR = unaff_x21 == 0x79;
          if ((bool)in_CY) {
            func_0x000107916ef0();
            func_0x000107915338();
            func_0x000107913880(&uStack_60);
            func_0x000107902d04();
            func_0x000107913894(&uStack_60);
            func_0x000107902d04();
            goto code_r0x0001079028bc;
          }
        }
      }
    }
    func_0x000107913f20();
    FUN_107902f14();
    func_0x000107913f10();
    FUN_107902f14();
  }
code_r0x0001079028bc:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079185d0();
code_r0x00010790292c:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto code_r0x000107902934;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914858();
      FUN_107902f14();
      func_0x000107913ec0();
      FUN_107902f14();
      goto code_r0x00010790292c;
    }
    func_0x000107913d34();
    uStack_60 = uVar4;
    uStack_58 = uVar5;
    uStack_50 = uVar6;
    uStack_48 = uVar7;
    func_0x000107915510();
    func_0x000107915b2c();
    func_0x000107913adc(auStack_150,&uStack_b8);
    func_0x000107902d04();
    func_0x000107913650();
    func_0x000107902d04();
code_r0x000107902934:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x000107913a0c();
      func_0x000107902d04();
      goto code_r0x000107902958;
    }
  }
  func_0x000107914848();
  FUN_107902f14();
code_r0x000107902958:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&uStack_a0);
    func_0x000107902d04();
  }
  else {
    func_0x000107913eb0();
    FUN_107902f14();
  }
  func_0x000107902fd8(auStack_130);
  func_0x000107916e90();
  func_0x000107916cd8();
  func_0x000107915aec();
  func_0x000107915adc();
  func_0x000107915b1c();
  return;
}



/* Entry: 107902f14; end: 107902f77;  */

void FUN_107902f14(void)

{
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 *puVar1;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *puVar2;
  
  func_0x000107915c10();
  if ((!(bool)in_ZR) && (func_0x0001079143ac(), !(bool)in_ZR)) {
    func_0x00010791589c();
    puVar1 = extraout_x8;
    puVar2 = extraout_x9;
    while (unaff_x22 != puVar2) {
      for (puVar2 = (undefined8 *)*unaff_x20; puVar2 != puVar1; puVar2 = puVar2 + 1) {
        func_0x0001079029d8(*unaff_x19,*unaff_x22,*puVar2);
        puVar1 = (undefined8 *)unaff_x20[1];
      }
      func_0x000107915c04();
      puVar1 = extraout_x8_00;
      puVar2 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 1079030d4; end: 1079030df;  */

void FUN_1079030d4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107913ad0();
  func_0x000107914d64();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001079186b4();
    if ((bool)in_CY) {
      func_0x000104bd35f4();
      func_0x000107918860();
      while (func_0x00010791814c(), !(bool)in_ZR) {
        unaff_x19[2] = extraout_x8 + -0x30;
        func_0x0001079126fc();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    func_0x000107917c24();
  }
  func_0x00010791570c(0x30);
  return;
}



/* Entry: 107903310; end: 107903347;  */

void FUN_107903310(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000107914c78();
  func_0x000107916138();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010791351c();
  return;
}



/* Entry: 107903640; end: 107903653;  */

void FUN_107903640(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107906534; end: 1079065a3;  */

void FUN_107906534(long *param_1,undefined8 *param_2)

{
  long unaff_x20;
  long lVar1;
  
  func_0x0001004d761c();
  func_0x000107914c78();
  param_2[1] = *param_2;
  for (lVar1 = *param_1; lVar1 != *(long *)(unaff_x20 + 8); lVar1 = lVar1 + 0x30) {
    func_0x000107914da4();
    func_0x0001079065a4();
  }
  return;
}



/* Entry: 107906ecc; end: 107906f5f;  */

void FUN_107906ecc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  if (iVar1 < *param_1) {
    *param_1 = iVar1;
    iVar2 = iVar1;
  }
  iVar3 = param_1[2];
  if (param_1[2] < iVar1) {
    param_1[2] = iVar1;
    iVar3 = iVar1;
  }
  iVar1 = param_2[1];
  iVar4 = param_1[1];
  if (iVar1 < param_1[1]) {
    param_1[1] = iVar1;
    iVar4 = iVar1;
  }
  iVar5 = param_1[3];
  if (param_1[3] < iVar1) {
    param_1[3] = iVar1;
    iVar5 = iVar1;
  }
  iVar1 = param_2[2];
  if (iVar1 < iVar2) {
    *param_1 = iVar1;
  }
  if (iVar3 < iVar1) {
    param_1[2] = iVar1;
  }
  iVar1 = param_2[3];
  if (iVar1 < iVar4) {
    param_1[1] = iVar1;
  }
  if (iVar5 < iVar1) {
    param_1[3] = iVar1;
  }
  return;
}



/* Entry: 1079072ac; end: 1079072d3;  */

undefined1  [16] FUN_1079072ac(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  func_0x00010791540c(0x7fffffff7fffffff,param_1,param_1);
  return auStack_20;
}



/* Entry: 107907484; end: 107907b93;  */

/* WARNING: Removing unreachable block (ram,0x00010790796c) */

void FUN_107907484(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int iVar13;
  undefined8 extraout_x8;
  long lVar14;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  int extraout_w9;
  int iVar15;
  long lVar16;
  undefined8 *unaff_x19;
  int unaff_w21;
  int unaff_w22;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined1 uStack_3a4;
  int aiStack_390 [12];
  undefined8 uStack_360;
  undefined8 uStack_358;
  int iStack_2f0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_230;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_190;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 auStack_f0 [2];
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  int iStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_48;
  byte bStack_47;
  int iStack_34;
  int iStack_2c;
  int iStack_24;
  int iStack_20;
  undefined8 uStack_8;
  
  func_0x000107917a38();
  puVar10 = &uStack_3b0;
  func_0x0001079182d0();
  func_0x000107913ca4();
  puVar9 = auStack_f0;
  uStack_8 = extraout_x8;
  func_0x000107915914();
  func_0x000107907c10();
  uVar2 = 1;
  if (cStack_48 == 'd') goto LAB_107907b48;
  func_0x000107917ad8();
  if (cStack_48 == 'i') {
    uStack_3a8 = 2;
    uStack_3b0 = uStack_a8;
    uStack_358 = uStack_90;
    uStack_360 = uStack_98;
    uStack_2b8 = uStack_80;
    uStack_2c0 = uStack_88;
    uVar2 = iStack_2c == 1;
    lVar14 = 0x20;
    if (!(bool)uVar2) {
      lVar14 = 0xc0;
    }
    *(undefined4 *)((long)&uStack_3b0 + lVar14) = 1;
    lVar14 = 0xc0;
    if (!(bool)uVar2) {
      lVar14 = 0x20;
    }
    *(undefined4 *)((long)&uStack_3b0 + lVar14) = 2;
    iVar13 = iStack_2f0;
  }
  else if (cStack_48 == 't') {
    func_0x000107918800();
    func_0x0001079090dc();
    uVar11 = uStack_d8;
    func_0x00010790920c(uStack_d8,*(undefined8 *)(lStack_d0 + 0x10),
                        *(undefined8 *)(lStack_d0 + 0x18));
    iVar13 = iVar15;
    func_0x00010791538c();
    iVar15 = (int)uVar11;
    if (iVar13 * iStack_2c == -1) {
      iVar8 = iVar13;
      func_0x000107916684();
      if (iVar8 == iStack_2c) {
        if (iVar15 == 0) {
          aiStack_390[0] = 3;
          uVar2 = iVar13 == 1;
          iVar13 = 1;
          if (!(bool)uVar2) {
            iVar13 = 2;
          }
          goto LAB_107907b40;
        }
        if (iVar15 == iVar13) {
          uVar2 = iVar13 == 1;
          aiStack_390[0] = 1;
          iStack_2f0 = aiStack_390[0];
          if (!(bool)uVar2) {
            aiStack_390[0] = 2;
            iStack_2f0 = aiStack_390[0];
          }
          goto LAB_107907874;
        }
      }
      uVar2 = iVar8 == iVar13;
      if ((bool)uVar2) {
        func_0x000107916cac();
        if (iVar8 == 0) goto LAB_107907b34;
        if (iVar8 == iVar13) {
          uVar2 = iVar13 == 1;
          aiStack_390[0] = 1;
          if (!(bool)uVar2) {
            aiStack_390[0] = 2;
          }
          iStack_2f0 = 1;
          if ((bool)uVar2) {
            iStack_2f0 = 2;
          }
          goto LAB_107907874;
        }
      }
      uVar2 = iVar13 == 1;
      aiStack_390[0] = 1;
      if ((bool)uVar2) {
        aiStack_390[0] = 2;
      }
      iVar13 = 1;
      if (!(bool)uVar2) {
        iVar13 = 2;
      }
    }
    else {
      iVar6 = iVar13;
      func_0x000107916cac();
      iVar7 = iVar6;
      func_0x000107916684();
      iVar8 = iVar7;
      func_0x000107916ca4();
      bVar4 = iVar13 != 0;
      bVar5 = iVar8 * iStack_2c == 1;
      if ((iVar7 == iStack_2c || iVar7 == iVar13) ||
         ((iVar13 == 0 && iStack_2c == 0 && (iVar7 != -1)))) {
        uVar2 = iVar6 == 0;
        if ((bool)uVar2 && (bVar4 || bVar5)) {
LAB_107907b34:
          func_0x00010791841c();
          iVar13 = extraout_w8_01;
        }
        else if (iVar15 == 0) {
          aiStack_390[0] = 3;
          iVar15 = 1;
          if (iVar8 == 1) {
            iVar15 = 2;
          }
          uVar2 = bVar4 || bVar5;
          iVar13 = aiStack_390[0];
          if (bVar4 || bVar5) {
            iVar13 = iVar15;
          }
        }
        else if (iVar15 == iVar6 && iVar8 * iVar15 != -1) {
          aiStack_390[0] = 1;
          if (iVar8 != 1) {
            aiStack_390[0] = 2;
          }
          iVar15 = 1;
          if (iVar8 == 1) {
            iVar15 = 2;
          }
          uVar2 = bVar4 || bVar5;
          iVar13 = 3;
          if ((bool)uVar2) {
            iVar13 = iVar15;
          }
        }
        else {
          if (iVar6 + iVar8 == 0) {
            uVar2 = iVar8 == 1;
            aiStack_390[0] = 1;
            if ((bool)uVar2) {
              aiStack_390[0] = 2;
            }
            iStack_2f0 = 1;
            if (!(bool)uVar2) {
              iStack_2f0 = 2;
            }
            goto LAB_107907874;
          }
          uVar2 = 0;
          iVar13 = iStack_2f0;
          if (iVar15 == -iVar8) {
            uVar2 = iVar8 == 1;
            aiStack_390[0] = 1;
            if ((bool)uVar2) {
              aiStack_390[0] = 2;
            }
            iStack_2f0 = aiStack_390[0];
            if (bVar4 || bVar5) goto LAB_107907998;
            iVar13 = 3;
          }
        }
      }
      else {
        aiStack_390[0] = 1;
        if (iVar8 == 1) {
          aiStack_390[0] = 2;
        }
        iStack_2f0 = 1;
        if (iVar13 != 1 && iStack_2c != 1) {
          iStack_2f0 = 2;
        }
        uVar2 = bVar4 || bVar5;
        iVar13 = 3;
        if ((bool)uVar2) goto LAB_107907998;
      }
    }
  }
  else if (cStack_48 == 'm') {
    func_0x0001079187ec();
    iVar15 = (int)puVar10;
    func_0x0001079090dc();
    uVar3 = iStack_20 == 1;
    if ((bool)uVar3) {
      func_0x00010791538c();
      func_0x000107918344();
      if (!(bool)uVar3) {
        func_0x000107916ca4();
        func_0x000107917e54();
        func_0x0001079180ac();
        bVar4 = (bool)uVar3 && unaff_w22 == 1;
        uVar2 = true;
        if (!(bool)uVar3 || unaff_w22 != 1) {
          func_0x000107918508();
          if ((bVar4 && unaff_w21 == 1) && unaff_w22 == -1) {
            uVar2 = false;
            iStack_2f0 = 3;
            aiStack_390[0] = 1;
LAB_107907998:
            uStack_3a4 = 1;
            iVar13 = iStack_2f0;
          }
          else if (iStack_2c == unaff_w21 && iStack_2c == unaff_w22) {
            uVar3 = false;
            func_0x0001079164d4(unaff_w22 == 1);
            uVar2 = false;
            if ((bool)uVar3) {
              func_0x000107913f70(uStack_d8);
              func_0x000107917cb8();
              func_0x000107916d00();
              uVar2 = false;
              uStack_c0 = uStack_d8;
              if ((bool)uVar3) {
LAB_107907b04:
                func_0x000107916188(uStack_c0);
                uVar2 = iVar15 * iStack_20 == -1;
              }
            }
LAB_107907b18:
            func_0x000107916628(aiStack_390);
            iVar13 = iStack_2f0;
          }
          else if (unaff_w21 == 0) {
            uVar2 = 1;
            if (iStack_2c == unaff_w22) goto LAB_107907b34;
            uVar2 = unaff_w22 == 1;
            aiStack_390[0] = 1;
            if ((bool)uVar2) {
              aiStack_390[0] = 2;
            }
            iVar13 = 3;
          }
          else {
LAB_107907828:
            uVar2 = 0;
            uStack_3a8 = 8;
            iVar13 = iStack_2f0;
          }
          goto LAB_107907b40;
        }
LAB_107907830:
        aiStack_390[0] = 2;
        iStack_2f0 = 2;
LAB_107907874:
        uStack_3a4 = 1;
        iVar13 = iStack_2f0;
        goto LAB_107907b40;
      }
      lVar14 = 0xc0;
      lVar16 = 0x20;
    }
    else {
      func_0x000107915b38(uStack_c0);
      func_0x000107918344();
      if (!(bool)uVar3) {
        iVar15 = iStack_b8;
        func_0x000107909198();
        func_0x000107917e60();
        func_0x0001079180ac();
        uVar2 = (bool)uVar3 && unaff_w22 == 1;
        if ((bool)uVar3 && unaff_w22 == 1) goto LAB_107907830;
        func_0x000107918508();
        if (((bool)uVar2 && unaff_w21 == 1) && unaff_w22 == -1) {
          uVar2 = iStack_20 == -1;
          aiStack_390[0] = 3;
          if ((bool)uVar2) {
            aiStack_390[0] = 1;
          }
          iStack_2f0 = 1;
          goto LAB_107907998;
        }
        if (iStack_34 == unaff_w21 && iStack_34 == unaff_w22) {
          uVar3 = iStack_20 == 0;
          func_0x0001079164d4(unaff_w22 == 1);
          uVar2 = false;
          if ((bool)uVar3) {
            func_0x000107913f70(uStack_c0);
            func_0x000107917cc4();
            func_0x000107916d00();
            uVar2 = false;
            if ((bool)uVar3) goto LAB_107907b04;
          }
          goto LAB_107907b18;
        }
        if (unaff_w21 != 0) goto LAB_107907828;
        uVar2 = 1;
        if (iStack_34 == unaff_w22) goto LAB_107907b34;
        uVar2 = unaff_w22 == 1;
        iVar13 = 1;
        if ((bool)uVar2) {
          iVar13 = 2;
        }
        aiStack_390[0] = 3;
        goto LAB_107907b40;
      }
      lVar14 = 0x20;
      lVar16 = 0xc0;
    }
    uVar2 = unaff_w21 == -1;
    lVar1 = lVar16;
    if (!(bool)uVar2) {
      lVar1 = lVar14;
    }
    *(undefined4 *)((long)&uStack_3b0 + lVar1) = 1;
    if (!(bool)uVar2) {
      lVar14 = lVar16;
    }
    *(undefined4 *)((long)&uStack_3b0 + lVar14) = 2;
    iVar13 = iStack_2f0;
  }
  else {
    uVar2 = cStack_48 == 'c';
    if ((bool)uVar2) {
      if ((bStack_47 & 1) != 0) {
        puVar9 = &uStack_250;
        func_0x000107917ad8();
        if (iStack_24 == 1) {
          func_0x000107916684();
          if ((int)puVar9 == 1) {
            uStack_230 = 2;
          }
          else {
            if ((int)puVar9 == 0) goto LAB_107907a0c;
            uStack_230 = 1;
          }
          uStack_190 = 3;
          uStack_248 = 5;
          uStack_250 = uStack_a0;
          uStack_1f8 = uStack_68;
          uStack_200 = uStack_70;
          uStack_158 = uStack_58;
          uStack_160 = uStack_60;
          puVar9 = unaff_x19;
          func_0x000107908df8();
        }
LAB_107907a0c:
        uVar2 = iStack_20 == 1;
        if (!(bool)uVar2) goto LAB_107907b48;
        func_0x000107916ca4();
        uVar2 = (int)puVar9 == 1;
        if ((bool)uVar2) {
          uStack_190 = 2;
        }
        else {
          if ((int)puVar9 == 0) goto LAB_107907b48;
          uStack_190 = 1;
        }
        uStack_230 = 3;
        uStack_248 = 5;
        uStack_250 = uStack_a8;
        uStack_1f8 = uStack_90;
        uStack_200 = uStack_98;
        uStack_158 = uStack_80;
        uStack_160 = uStack_88;
        iVar13 = iStack_2f0;
        goto LAB_107907b40;
      }
      if (iStack_24 != 0) {
        puVar12 = auStack_b0;
        FUN_107909290();
        uStack_3a8 = 5;
        func_0x000107916420(auStack_f0 + ((ulong)puVar12 & 0xffffffff));
        iVar15 = (int)puVar12;
        func_0x000107918078((undefined8 *)
                            ((long)auStack_f0 +
                            ((ulong)puVar12 & 0xffffffff) * (extraout_x8_00 & 0xffffffff)));
        func_0x000107916684();
        func_0x000107916ca4();
        func_0x000107917208();
        if ((bool)uVar2) {
          iVar8 = extraout_w9 + 1;
          iVar13 = extraout_w9;
        }
        else {
          iVar13 = extraout_w9 + 1;
          iVar8 = extraout_w9;
        }
        uVar2 = extraout_w8 == 0;
        iStack_2f0 = 4;
        aiStack_390[0] = 4;
        if (!(bool)uVar2) {
          iStack_2f0 = iVar8;
          aiStack_390[0] = iVar13;
        }
        if (iVar15 == 0) {
          func_0x0001079081b4();
        }
        func_0x000107914678();
        if ((int)auStack_f0 == 0) {
          func_0x0001079081b4();
        }
        func_0x000107914678();
        iVar13 = iStack_2f0;
        goto LAB_107907b40;
      }
    }
    else {
      uVar2 = cStack_48 == 'e';
      puVar9 = puVar10;
      if ((!(bool)uVar2) || ((bStack_47 & 1) != 0)) goto LAB_107907b48;
    }
    puVar12 = auStack_b0;
    FUN_107909290(puVar12);
    uStack_3a8 = 6;
    func_0x000107916420(auStack_f0 + ((ulong)puVar12 & 0xffffffff));
    func_0x000107918078((undefined8 *)
                        ((long)auStack_f0 +
                        ((ulong)puVar12 & 0xffffffff) * (extraout_x8_01 & 0xffffffff)));
    iVar15 = (int)auStack_e0;
    func_0x00010790922c();
    iVar8 = iVar15;
    func_0x000107916684();
    iVar13 = iVar8;
    func_0x00010791538c();
    if ((iVar15 == 0) && (iVar8 == iVar13)) {
      func_0x00010791841c();
      iVar13 = extraout_w8_00;
    }
    else {
      if (iVar13 * iVar8 != -1) {
        iVar8 = iVar15;
      }
      aiStack_390[0] = 1;
      if (iVar8 == -1) {
        aiStack_390[0] = 2;
      }
      iVar13 = 1;
      if (iVar8 != -1) {
        iVar13 = 2;
      }
    }
    uVar2 = cStack_48 == 'c';
    if ((bool)uVar2) {
      uStack_3a8 = 5;
    }
  }
LAB_107907b40:
  iStack_2f0 = iVar13;
  func_0x000107908df8();
  puVar9 = unaff_x19;
LAB_107907b48:
  func_0x000107913564(uStack_8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  *(undefined4 *)(puVar9 + 1) = 0;
  *(undefined1 *)((long)puVar9 + 0xc) = 0;
  puVar9[2] = 0xffffffffffffffff;
  *(undefined2 *)(puVar9 + 3) = 0;
  lVar14 = 0;
  do {
    *(undefined4 *)((long)puVar9 + lVar14 + 0x20) = 0;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x50) = 0x100000000;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x58) = 0;
    *(undefined4 *)((long)puVar9 + lVar14 + 0x60) = 0;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x78) = 0xffffffffffffffff;
    *(undefined2 *)((long)puVar9 + lVar14 + 0x80) = 0x101;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x88) = 0;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x90) = 0;
    *(undefined8 *)((long)puVar9 + lVar14 + 0x98) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar9 + lVar14 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar9 + lVar14 + 0xa8) = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar9 + lVar14 + 0xb0) = 0;
    *(undefined4 *)((long)puVar9 + lVar14 + 0xb8) = 0;
    lVar16 = lVar14 + 0xa0;
    *(undefined2 *)((long)puVar9 + lVar14 + 0xbc) = 0;
    lVar14 = lVar16;
  } while (lVar16 != 0x140);
  return;
}



/* Entry: 1079088e4; end: 107908947;  */

undefined1  [16] FUN_1079088e4(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  
  if ((bRam0000000113726a88 & 1) == 0) {
    iVar2 = 0x13726a88;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam0000000113726a98 = 0x100000000;
      func_0x00010790831c();
      ___cxa_guard_release(0x113726a88);
    }
  }
  auVar1._8_8_ = uRam0000000113726aa0;
  auVar1._0_8_ = uRam0000000113726a98;
  return auVar1;
}



/* Entry: 107908fb0; end: 107908fc3;  */

long FUN_107908fb0(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 4) * 8) + (uVar1 & 0xf) * 0x160;
  }
  return 0;
}



/* Entry: 107909290; end: 1079092af;  */

void FUN_107909290(long param_1)

{
  func_0x0001079089f4(param_1 + 0x28,param_1 + 0x50);
  return;
}



/* Entry: 1079096f0; end: 107909743;  */

void FUN_1079096f0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar1 = extraout_x8;
    while (unaff_x21 != lVar1) {
      func_0x000107915d6c();
      lVar1 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar1) {
        func_0x00010791460c();
        func_0x0001079093a0();
        lVar1 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 107909bf0; end: 107909c83;  */

void FUN_107909bf0(void)

{
  undefined1 in_ZR;
  
  func_0x000107913fec();
  func_0x0001079135a4();
  func_0x0001079134a0();
  func_0x000107915c1c();
  if (!(bool)in_ZR) {
    func_0x000107917308();
    func_0x000107915144();
    func_0x000107914d88();
    func_0x000107909ec0();
    func_0x0001079148c4();
    func_0x000107914aa0();
    func_0x000107909f80();
    func_0x0001079148b4();
    func_0x000107914aa0();
    func_0x000107909f80();
  }
  func_0x00010791658c();
  func_0x000107914d88();
  func_0x000107909ec0();
  func_0x0001079165f8();
  func_0x000107914d88();
  func_0x000107909ec0();
  func_0x0001079151e0();
  func_0x00010791518c();
  func_0x000107915024();
  return;
}



/* Entry: 10790a274; end: 10790a27b;  */

void FUN_10790a274(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar2)) goto code_r0x00010790a2b4;
      func_0x000107914d28();
      func_0x000107913668();
      func_0x00010790a428();
    }
    else {
code_r0x00010790a2b4:
      func_0x0001079142a0();
      func_0x00010790a218();
    }
    func_0x000107914220();
    in_CY = false;
    if (((bool)uVar2) && (func_0x0001079142c0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107916834();
          func_0x000107913810();
          func_0x00010790a428();
          func_0x0001079137f8();
          func_0x00010790a428();
          goto code_r0x00010790a32c;
        }
      }
    }
    func_0x000107914290();
    func_0x00010790a218();
    func_0x0001079142b0();
    func_0x00010790a218();
  }
code_r0x00010790a32c:
  func_0x000107915a78();
  if ((bool)in_ZR) {
    func_0x0001079176fc();
code_r0x00010790a388:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto code_r0x00010790a390;
  }
  else {
    func_0x0001079156e4();
    if ((((!(bool)in_CY) || (func_0x000107914210(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x0001079145fc();
      func_0x00010790a218();
      func_0x0001079142e0();
      func_0x00010790a218();
      goto code_r0x00010790a388;
    }
    func_0x000107916824();
    func_0x000107913840();
    func_0x00010790a428();
    func_0x000107913828();
    func_0x00010790a428();
code_r0x00010790a390:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107914200(), (bool)uVar2)) {
      func_0x0001079137b0();
      func_0x00010790a428();
      goto code_r0x00010790a3b4;
    }
  }
  func_0x0001079145ec();
  func_0x00010790a218();
code_r0x00010790a3b4:
  func_0x0001079141f0();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar1)) {
    func_0x0001079137c8();
    func_0x00010790a428();
  }
  else {
    func_0x0001079142f0();
    func_0x00010790a218();
  }
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return;
}



/* Entry: 10790ac0c; end: 10790ac53;  */

void FUN_10790ac0c(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000107913c7c();
  func_0x00010790ab6c();
  iVar1 = *(int *)(unaff_x22 + 0xc);
  iVar2 = *(int *)(unaff_x21 + 0xc);
  cVar3 = SBORROW4(iVar1,iVar2);
  cVar4 = iVar1 - iVar2 < 0;
  bVar5 = iVar1 == iVar2;
  if (((iVar2 < iVar1) && (func_0x000107916b6c(), !bVar5 && cVar4 == cVar3)) &&
     (func_0x0001079168cc(), !bVar5 && cVar4 == cVar3)) {
    func_0x0001079185fc();
  }
  return;
}



/* Entry: 10790b064; end: 10790b0df;  */

void FUN_10790b064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  uStack_18 = param_3;
  FUN_1078f1ad0(param_2,&uStack_18);
  return;
}



/* Entry: 10790baa8; end: 10790bbbb;  */

void FUN_10790baa8(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long lVar2;
  long unaff_x24;
  
  func_0x000107914410();
  func_0x0001079160d0();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010790bae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedb922)[extraout_x8] * 4 + 0x10790baec))(1);
    return;
  }
  func_0x000107914f98();
  func_0x00010790b97c();
  func_0x000107917118();
  lVar2 = unaff_x19 + 0x78;
  do {
    if (lVar2 == unaff_x21) {
      return;
    }
    func_0x000107915f3c();
    func_0x00010790b734();
    if ((int)param_1 != 0) {
      func_0x00010791505c();
      lVar2 = unaff_x24;
      do {
        func_0x0001079146d0(unaff_x19 + lVar2);
        uVar1 = lVar2 == -0x50;
        if ((bool)uVar1) break;
        func_0x0001079173cc();
        func_0x00010790b734();
        lVar2 = lVar2 + -0x28;
      } while ((param_1 & 1) != 0);
      func_0x000107914e50();
      if ((bool)uVar1) {
        func_0x0001079171c8(unaff_x22 + 0x28);
        return;
      }
    }
    func_0x00010791748c();
    lVar2 = extraout_x8_00;
  } while( true );
}



/* Entry: 10790c1e0; end: 10790c2a3;  */

/* WARNING: Possible PIC construction at 0x00010790c518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790c29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790cc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790cb90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010790cc34) */
/* WARNING: Removing unreachable block (ram,0x00010790cc44) */
/* WARNING: Removing unreachable block (ram,0x00010790cc74) */
/* WARNING: Removing unreachable block (ram,0x00010790cca0) */
/* WARNING: Removing unreachable block (ram,0x00010790cccc) */
/* WARNING: Removing unreachable block (ram,0x00010790cce4) */
/* WARNING: Removing unreachable block (ram,0x00010790c51c) */
/* WARNING: Removing unreachable block (ram,0x00010790cb94) */
/* WARNING: Removing unreachable block (ram,0x00010790cba0) */
/* WARNING: Removing unreachable block (ram,0x00010790cbcc) */
/* WARNING: Removing unreachable block (ram,0x00010790cbf8) */
/* WARNING: Removing unreachable block (ram,0x00010790cc10) */
/* WARNING: Removing unreachable block (ram,0x000107913bd4) */

void FUN_10790c1e0(long *param_1,long *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar10;
  long *plVar11;
  undefined1 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong extraout_x8;
  ulong uVar16;
  long *unaff_x19;
  undefined8 uVar17;
  long *unaff_x20;
  long *plVar18;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long lVar19;
  long lVar20;
  ulong unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong uVar21;
  ulong unaff_x28;
  long *unaff_x30;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 in_stack_00000040;
  undefined8 *puStack_10;
  undefined *puStack_8;
  
  func_0x000107917a38();
  func_0x0001079145b8();
  if ((bool)in_CY) {
    func_0x0001079171d4(0x276276276276276);
    func_0x0001079146e8();
    if ((bool)in_CY && !(bool)in_ZR) {
      puVar22 = (undefined *)0x10790c2a0;
code_r0x00010790c2a4:
      puVar23 = &UNK_10790c2b0;
      puStack_10 = &stack0x00000040;
      puStack_8 = puVar22;
      func_0x000107913ad0();
      ppuVar6 = &puStack_10;
      puVar12 = (undefined1 *)register0x00000008;
code_r0x00010790c2b0:
      puVar9 = (undefined1 *)ppuVar6;
      *(ulong *)(puVar9 + -0x60) = unaff_x28;
      *(long **)(puVar9 + -0x58) = unaff_x27;
      *(long **)(puVar9 + -0x50) = unaff_x26;
      *(ulong *)(puVar9 + -0x48) = unaff_x25;
      *(ulong *)(puVar9 + -0x40) = unaff_x24;
      *(long *)(puVar9 + -0x38) = unaff_x23;
      *(long **)(puVar9 + -0x30) = unaff_x22;
      *(long **)(puVar9 + -0x28) = unaff_x21;
      *(long **)(puVar9 + -0x20) = unaff_x20;
      *(long **)(puVar9 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar9 + -0x10) = puVar12 + -0x10;
      *(undefined **)(puVar9 + -8) = puVar23;
      *(int *)(puVar9 + -0x154) = (int)param_5;
      unaff_x21 = param_1;
      unaff_x26 = param_2;
code_r0x00010790c2e8:
      *(long **)(puVar9 + -0x150) = unaff_x26 + -0xd;
      *(long **)(puVar9 + -0x168) = unaff_x26 + -0x27;
      *(long **)(puVar9 + -0x160) = unaff_x26 + -0x1a;
      *(long **)(puVar9 + -0x140) = unaff_x26;
      unaff_x27 = unaff_x21;
code_r0x00010790c304:
      unaff_x21 = unaff_x27;
      iVar10 = (int)param_1;
      uVar16 = (long)unaff_x26 - (long)unaff_x21;
      uVar21 = (long)uVar16 / 0x68;
      switch(uVar21) {
      case 0:
      case 1:
        goto code_r0x00010790c650;
      case 2:
        func_0x000107914838();
        func_0x000107915d0c();
        if (iVar10 != 0) {
          func_0x000107913e1c(puVar9 + -0xd0);
          uVar17 = *(undefined8 *)(puVar9 + -0x150);
          func_0x000107914144(unaff_x21);
          func_0x000107914ab4(uVar17,puVar9 + -0xd0);
        }
        goto code_r0x00010790c650;
      case 3:
        puVar12 = *(undefined1 **)(puVar9 + -0x10);
        puVar22 = *(undefined **)(puVar9 + -8);
        plVar18 = unaff_x21;
        func_0x000107916c24(unaff_x21,unaff_x21 + 0xd,*(undefined8 *)(puVar9 + -0x150));
        goto code_r0x00010790ca7c;
      case 4:
        puVar12 = *(undefined1 **)(puVar9 + -0x10);
        puVar22 = *(undefined **)(puVar9 + -8);
        plVar14 = unaff_x30;
        func_0x000107916c24(unaff_x21,unaff_x21 + 0xd,unaff_x21 + 0x1a,
                            *(undefined8 *)(puVar9 + -0x150));
        break;
      case 5:
        plVar14 = *(long **)(puVar9 + -0x150);
        uVar17 = *(undefined8 *)(puVar9 + -0x10);
        uVar15 = *(undefined8 *)(puVar9 + -8);
        func_0x000107916c24(unaff_x21,unaff_x21 + 0xd,unaff_x21 + 0x1a,unaff_x21 + 0x27,plVar14,
                            unaff_x30);
        func_0x0001079189bc();
        *(undefined8 *)(puVar9 + -0xd0) = uVar17;
        *(undefined8 *)(puVar9 + -200) = uVar15;
        puVar12 = puVar9 + -0xd0;
        func_0x000107913908();
        puVar22 = &UNK_10790cc34;
        break;
      default:
        if ((long)uVar16 < 0x9c0) {
          if ((*(uint *)(puVar9 + -0x154) & 1) == 0) {
            if (unaff_x21 != unaff_x26) {
              plVar14 = unaff_x21 + -0xd;
              while (unaff_x21 = unaff_x21 + 0xd, unaff_x21 != unaff_x26) {
                func_0x000107914838();
                func_0x000107915d0c();
                if ((int)param_1 != 0) {
                  func_0x000107914010(puVar9 + -0xd0);
                  plVar18 = plVar14;
                  do {
                    param_1 = plVar18;
                    plVar13 = param_1 + 0x1a;
                    func_0x000107914ab4(plVar13,param_1 + 0xd);
                    func_0x000107914838();
                    func_0x000107915d0c();
                    plVar18 = param_1 + -0xd;
                  } while (((ulong)plVar13 & 1) != 0);
                  param_1 = param_1 + 0xd;
                  func_0x000107914ab4(param_1,puVar9 + -0xd0);
                }
                plVar14 = plVar14 + 0xd;
              }
            }
            goto code_r0x00010790c650;
          }
          if (unaff_x21 == unaff_x26) goto code_r0x00010790c650;
          lVar19 = 0;
          plVar14 = unaff_x21;
          goto code_r0x00010790c728;
        }
        if (param_4 != 0) {
          plVar14 = unaff_x21 + (uVar21 >> 1) * 0xd;
          if (uVar16 < 0x3401) {
            func_0x000107915848();
            func_0x000107916854();
          }
          else {
            func_0x000107914e28();
            func_0x000107916854();
            func_0x000107916854(unaff_x21 + 0xd,plVar14 + -0xd,*(undefined8 *)(puVar9 + -0x160));
            func_0x000107916854(unaff_x21 + 0x1a,plVar14 + 0xd,*(undefined8 *)(puVar9 + -0x168));
            func_0x00010791522c();
            func_0x000107916854();
            func_0x000107913e1c(puVar9 + -0xd0);
            func_0x000107914010(unaff_x21);
            func_0x000107914ab4(plVar14,puVar9 + -0xd0);
            param_1 = plVar14;
          }
          *(long *)(puVar9 + -0x148) = param_4 + -1;
          puVar4 = (uint *)unaff_x30[1];
          uVar5 = *(uint *)*unaff_x30;
          if ((*(uint *)(puVar9 + -0x154) & 1) != 0) {
            uVar3 = *puVar4;
code_r0x00010790c3dc:
            puVar12 = puVar9 + -0x138;
            func_0x000107913e1c();
            lVar19 = 0;
            do {
              lVar19 = lVar19 + 0x68;
              func_0x000107913e08();
              func_0x00010790c958();
            } while (((ulong)puVar12 & 1) != 0);
            plVar14 = (long *)((long)unaff_x21 + lVar19);
            plVar18 = *(long **)(puVar9 + -0x140);
            unaff_x27 = plVar14;
            if (lVar19 == 0x68) {
              plVar18 = *(long **)(puVar9 + -0x140);
              do {
                plVar13 = plVar18;
                if (plVar18 <= plVar14) break;
                plVar18 = plVar18 + -0xd;
                func_0x000107913e08();
                func_0x000107917dc4();
                plVar13 = plVar18;
              } while (((ulong)puVar12 & 1) == 0);
            }
            else {
              do {
                plVar18 = plVar18 + -0xd;
                func_0x000107913e08();
                func_0x000107917dc4();
                plVar13 = plVar18;
              } while ((int)puVar12 == 0);
            }
            while( true ) {
              unaff_x25 = (ulong)uVar3;
              unaff_x28 = (ulong)uVar5;
              if (plVar18 <= unaff_x27) break;
              func_0x000107914ab4(puVar9 + -0xd0,unaff_x27);
              func_0x0001079141e4(unaff_x27);
              plVar11 = plVar18;
              func_0x000107914ab4(plVar18,puVar9 + -0xd0);
              uVar3 = *(uint *)(*unaff_x30 + 4);
              uVar5 = *(uint *)unaff_x30[1];
              do {
                unaff_x27 = unaff_x27 + 0xd;
                func_0x000107917858();
                func_0x00010790c958();
              } while (((ulong)plVar11 & 1) != 0);
              do {
                plVar18 = plVar18 + -0xd;
                func_0x000107917858();
                func_0x00010790c958();
              } while (((ulong)plVar11 & 1) == 0);
            }
            unaff_x22 = unaff_x27 + -0xd;
            if (unaff_x21 != unaff_x22) {
              func_0x0001079141e4(unaff_x21);
            }
            param_2 = (long *)(puVar9 + -0x138);
            unaff_x20 = unaff_x22;
            func_0x000107914ab4();
            param_4 = *(long *)(puVar9 + -0x148);
            unaff_x26 = *(long **)(puVar9 + -0x140);
            unaff_x24 = 0x68;
            param_1 = unaff_x20;
            if (plVar13 <= plVar14) {
              func_0x000107915260();
              func_0x00010790ccec();
              param_1 = unaff_x20;
              func_0x0001079171fc();
              func_0x00010790ccec();
              if ((int)param_1 != 0) goto code_r0x00010790c62c;
              plVar13 = unaff_x20;
              if (((ulong)unaff_x20 & 1) != 0) goto code_r0x00010790c304;
            }
            param_5 = (ulong)(*(uint *)(puVar9 + -0x154) & 1);
            func_0x000107915260();
            puVar23 = &UNK_10790c51c;
            ppuVar6 = (undefined8 **)(puVar9 + -0x170);
            unaff_x19 = unaff_x30;
            unaff_x20 = plVar13;
            unaff_x23 = param_4;
            puVar12 = puVar9;
            goto code_r0x00010790c2b0;
          }
          uVar3 = *puVar4;
          unaff_x22 = (long *)(ulong)puVar4[1];
          func_0x000107913e08();
          func_0x000107915d0c();
          if (((ulong)param_1 & 1) != 0) goto code_r0x00010790c3dc;
          puVar12 = puVar9 + -0x138;
          func_0x000107913e1c();
          func_0x000107913e08();
          func_0x00010790c958();
          unaff_x27 = unaff_x21;
          if (((ulong)puVar12 & 1) == 0) {
            do {
              unaff_x27 = unaff_x27 + 0xd;
              if (unaff_x26 <= unaff_x27) break;
              func_0x000107913e08();
              func_0x000107917dcc();
            } while ((int)puVar12 == 0);
          }
          else {
            do {
              unaff_x27 = unaff_x27 + 0xd;
              func_0x000107913e08();
              func_0x000107917dcc();
            } while (((ulong)puVar12 & 1) == 0);
          }
          plVar14 = unaff_x26;
          if (unaff_x27 < unaff_x26) {
            do {
              plVar14 = plVar14 + -0xd;
              func_0x000107913e08();
              func_0x0001079167e4();
            } while (((ulong)puVar12 & 1) != 0);
          }
          while (unaff_x27 < plVar14) {
            func_0x000107914ab4(puVar9 + -0xd0,unaff_x27);
            func_0x000107914010(unaff_x27);
            plVar18 = plVar14;
            func_0x000107914ab4(plVar14,puVar9 + -0xd0);
            unaff_x22 = (long *)(ulong)*(uint *)*unaff_x30;
            do {
              unaff_x27 = unaff_x27 + 0xd;
              func_0x000107917708();
              func_0x000107917dcc();
            } while ((int)plVar18 == 0);
            do {
              plVar14 = plVar14 + -0xd;
              func_0x000107917708();
              func_0x0001079167e4();
            } while (((ulong)plVar18 & 1) != 0);
          }
          unaff_x20 = unaff_x27 + -0xd;
          if (unaff_x21 != unaff_x20) {
            func_0x000107914010(unaff_x21);
          }
          param_1 = unaff_x20;
          func_0x000107914ab4(unaff_x20,puVar9 + -0x138);
          *(undefined4 *)(puVar9 + -0x154) = 0;
          param_4 = *(long *)(puVar9 + -0x148);
          goto code_r0x00010790c304;
        }
        if (unaff_x21 == unaff_x26) goto code_r0x00010790c650;
        func_0x0001079169f0();
        for (; -1 < (long)unaff_x22; unaff_x22 = (long *)((long)unaff_x22 + -1)) {
          func_0x0001079143fc();
          func_0x00010790cef4();
        }
        do {
          if ((long)uVar21 < 2) goto code_r0x00010790c650;
          *(long **)(puVar9 + -0x140) = unaff_x26;
          plVar14 = (long *)(puVar9 + -0x138);
          func_0x000107913e1c();
          uVar16 = 0;
          plVar18 = unaff_x21;
          do {
            iVar10 = (int)plVar14;
            uVar2 = uVar16 << 1 | 1;
            uVar1 = uVar16 * 2 + 2;
            plVar13 = plVar18 + uVar16 * 0xd + 0xd;
            uVar8 = uVar2;
            if ((long)uVar1 < (long)uVar21) {
              func_0x000107914838();
              func_0x0001079170f0();
              plVar13 = plVar18 + uVar16 * 0xd + 0x1a;
              uVar8 = uVar1;
              if (iVar10 == 0) {
                plVar13 = plVar18 + uVar16 * 0xd + 0xd;
                uVar8 = uVar2;
              }
            }
            uVar16 = uVar8;
            func_0x000107914010();
            plVar14 = plVar18;
            plVar18 = plVar13;
          } while ((long)uVar16 <= (long)(uVar21 - 2 >> 1));
          unaff_x26 = (long *)(*(long *)(puVar9 + -0x140) + -0x68);
          if (plVar13 == unaff_x26) {
            puVar12 = puVar9 + -0x138;
code_r0x00010790c8e0:
            func_0x000107914ab4(plVar13,puVar12);
          }
          else {
            func_0x000107914ab4(plVar13,unaff_x26);
            plVar14 = unaff_x26;
            func_0x000107914ab4(unaff_x26,puVar9 + -0x138);
            iVar10 = (int)plVar14;
            uVar16 = (long)plVar13 + (0x68 - (long)unaff_x21);
            if (0x68 < (long)uVar16) {
              uVar16 = uVar16 / 0x68 - 2 >> 1;
              func_0x000107914838();
              func_0x0001079167e4();
              if (iVar10 != 0) {
                func_0x000107914010(puVar9 + -0xd0);
                plVar14 = plVar13;
                do {
                  plVar13 = unaff_x21 + uVar16 * 0xd;
                  func_0x0001079141e4();
                  if (uVar16 == 0) break;
                  func_0x000107918584();
                  func_0x000107914838();
                  func_0x00010790c958();
                  uVar1 = (ulong)plVar14 & 1;
                  plVar14 = plVar13;
                } while (uVar1 != 0);
                puVar12 = puVar9 + -0xd0;
                goto code_r0x00010790c8e0;
              }
            }
          }
          uVar21 = uVar21 - 1;
        } while( true );
      }
      func_0x0001079189bc();
      *(undefined1 **)(puVar9 + -0xd0) = puVar12;
      *(undefined **)(puVar9 + -200) = puVar22;
      puVar12 = puVar9 + -0xd0;
      func_0x000107913a74();
      puVar22 = &UNK_10790cb94;
      plVar18 = unaff_x21;
      unaff_x21 = plVar14;
code_r0x00010790ca7c:
      func_0x000107916658();
      *(undefined1 **)(puVar9 + -0xb0) = puVar12;
      *(undefined **)(puVar9 + -0xa8) = puVar22;
      func_0x0001079144b8();
      func_0x000107915034();
      func_0x000107915d0c();
      iVar10 = (int)plVar18;
      func_0x000107915034();
      func_0x000107916808();
      if (((ulong)plVar18 & 1) == 0) {
        if (iVar10 == 0) {
          return;
        }
        func_0x000107914144(puVar9 + -0x168);
        func_0x000107914010(unaff_x30);
        func_0x000107914ab4(unaff_x20,puVar9 + -0x168);
        iVar10 = (int)unaff_x20;
        func_0x00010791532c(*unaff_x22);
        func_0x000107915d0c();
        if (iVar10 == 0) {
          return;
        }
        func_0x000107913e1c(puVar9 + -0x168);
        func_0x000107914144(unaff_x21);
        func_0x000107915724();
      }
      else {
        if (iVar10 == 0) {
          func_0x000107913e1c(puVar9 + -0x168);
          func_0x000107914144();
          iVar10 = (int)unaff_x21;
          func_0x000107915724();
          func_0x000107914ab4();
          func_0x00010791532c(*unaff_x22);
          func_0x000107916808();
          if (iVar10 == 0) {
            return;
          }
          func_0x000107914144(puVar9 + -0x168);
        }
        else {
          func_0x000107913e1c(puVar9 + -0x168);
          unaff_x30 = unaff_x21;
        }
        func_0x000107914010(unaff_x30);
      }
      func_0x000107914ab4();
      return;
    }
    func_0x000107913dbc();
    func_0x000107916a48();
    if (unaff_x24 == 0) {
      param_1 = (long *)0x0;
    }
    else {
      if (extraout_x8 < unaff_x24) {
        puVar22 = &SUB_10790c2a4;
        func_0x000104bd35f4();
        goto code_r0x00010790c2a4;
      }
      func_0x000107917c18();
    }
    func_0x000107913e1c((long)param_1 + (long)unaff_x22);
    plVar14 = (long *)((long)param_1 + (long)unaff_x22 + 0x68);
    func_0x0001079138bc(0xffffffffffffff98);
    func_0x000107916e4c();
    if (unaff_x20 != (long *)0x0) {
      func_0x000107914d94();
    }
  }
  else {
    func_0x000107913e1c();
    plVar14 = unaff_x22 + 0xd;
  }
  unaff_x19[1] = (long)plVar14;
  return;
code_r0x00010790c728:
  plVar14 = plVar14 + 0xd;
  if (plVar14 == unaff_x26) {
code_r0x00010790c650:
    func_0x000107916c24(*(undefined8 *)(puVar9 + -8));
    return;
  }
  func_0x000107914838();
  func_0x000107917dc4();
  if ((int)param_1 != 0) {
    func_0x000107914010(puVar9 + -0xd0);
    lVar7 = lVar19;
    do {
      lVar20 = lVar7;
      plVar18 = unaff_x21;
      func_0x000107914ab4();
      param_1 = unaff_x21;
      if (lVar20 == 0) goto code_r0x00010790c784;
      func_0x000107914838();
      func_0x00010790c958();
      lVar7 = lVar20 + -0x68;
    } while (((ulong)plVar18 & 1) != 0);
    param_1 = (long *)((long)unaff_x21 + lVar20);
code_r0x00010790c784:
    func_0x000107914ab4(param_1,puVar9 + -0xd0);
  }
  lVar19 = lVar19 + 0x68;
  goto code_r0x00010790c728;
code_r0x00010790c62c:
  unaff_x26 = unaff_x22;
  if (((ulong)unaff_x20 & 1) != 0) goto code_r0x00010790c650;
  goto code_r0x00010790c2e8;
}



/* Entry: 10790d0e0; end: 10790d103;  */

void FUN_10790d0e0(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 10790e0b8; end: 10790e137;  */

void FUN_10790e0b8(undefined8 *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int *unaff_x19;
  long *unaff_x20;
  
  func_0x000107914c78();
  piVar1 = (int *)*param_1;
  if ((param_1[1] - (long)piVar1 != 8) || (*piVar1 != *unaff_x19 || piVar1[1] != unaff_x19[1])) {
    while( true ) {
      func_0x000107915254();
      func_0x000107903230();
      lVar2 = unaff_x20[1];
      if ((ulong)(lVar2 - *unaff_x20) < 0x11) break;
      iVar3 = *(int *)(lVar2 + -0x18);
      func_0x00010790827c(iVar3,*(undefined4 *)(lVar2 + -0x14),*(undefined4 *)(lVar2 + -0x10),
                          *(undefined4 *)(lVar2 + -0xc),*unaff_x19,unaff_x19[1]);
      if (iVar3 != 0) {
        return;
      }
      func_0x00010790ead0();
    }
  }
  return;
}



/* Entry: 10790ef70; end: 10790efbb;  */

undefined8 FUN_10790ef70(long param_1,long param_2,long param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)(param_1 + 0x24);
  lVar2 = (param_2 - param_1) / 0x68;
  while( true ) {
    if (lVar2 == 0) {
      return 0xffffffffffffffff;
    }
    if (((*(long *)(piVar1 + -3) == param_3) && (piVar1[-1] == param_4)) && (*piVar1 == 1)) break;
    piVar1 = piVar1 + 0x1a;
    lVar2 = lVar2 + -1;
  }
  return *(undefined8 *)(piVar1 + -7);
}



/* Entry: 10790f2b4; end: 10790f337;  */

void FUN_10790f2b4(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    func_0x00010791464c();
    return;
  }
  func_0x000104bd35f4();
  func_0x0001004d7774();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10790f9e8; end: 10790fa57;  */

undefined8 FUN_10790f9e8(long *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x21;
  long lVar4;
  
  lVar4 = *param_1;
  bVar1 = lVar4 == param_1[1];
  if ((!bVar1) && (func_0x0001079174bc(), !bVar1)) {
    func_0x00010791589c();
    lVar3 = extraout_x8;
    for (; uVar2 = lVar4 == lVar3, !(bool)uVar2; lVar4 = lVar4 + 8) {
      while (func_0x000107916f18(), !(bool)uVar2) {
        func_0x00010791415c();
        func_0x00010790f3ec();
        if (((ulong)param_1 & 1) == 0) {
          return 0;
        }
      }
      lVar3 = *(long *)(unaff_x21 + 8);
    }
  }
  return 1;
}


